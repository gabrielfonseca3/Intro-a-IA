#include "romenia.h"
#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <limits>

using std::vector, std::greater, std::priority_queue, std::unordered_map, 
std::numeric_limits, std::cout, std::endl;

struct Node{
  string cidade; // Estado atual
  int g;         // Custo acumulado
  int f;        // Custo total (g+h)

  bool operator>(const Node& outro) const {
    return f > outro.f;
  }
};

int aStarSearch(const string& inicio, const string& objetivo){
  // Fila de prioridade da fronteira
  priority_queue<Node, vector<Node>, greater<Node>> fronteira;

  // Tabelas para armazenar o menor custo e o caminho
  unordered_map<string, int> g_score; // Custo até cada cidade
  unordered_map<string, string> came_from; // custo para reconstruir o caminho

  // Inicializar o g_scroe com infinito
  for (const auto& estado: romenia) {
    g_score[estado.estado] = numeric_limits<int>::max();
  }
  g_score[inicio] = 0;

  // Colocar o ponto de partida na fronteira
  fronteira.push({inicio, 0, romenia[0].distancia});

  while(!fronteira.empty()){
    Node atual = fronteira.top();
    fronteira.pop();

    if (atual.cidade == objetivo){
      cout << "Objetivo encontrado: " << objetivo << endl;
      cout << "com custo: " << atual.g << endl;

      string caminho = objetivo;
      cout << "Caminho: " << caminho;
      while(caminho != inicio){
        caminho = came_from[caminho];
        cout << " <- " << caminho;
      }
      cout << endl;
      return atual.g;
    }  

    for (const auto& estado : romenia){
      if (estado.estado == atual.cidade){
        for (const auto& acao : estado.acoes){
          int novo_g = atual.g + acao.custo;

          if (novo_g < g_score[acao.destino]){ // Caso seja um caminho melhor, atualiza
            g_score[acao.destino] = novo_g;
            came_from[acao.destino] = atual.cidade;

            int h = 0;
            for (const auto& e : romenia){
              if (e.estado == acao.destino){
                h = e.distancia;
                break;
              }
            }
            fronteira.push({acao.destino, novo_g, novo_g + h});
          }
        }
        break;
      }
    }
  }

  cout << "Não foi possível encontrar um caminho para" << objetivo << endl;
  return -1;
}

int main() {
    // Inicializa os dados das cidades
    inicializarRomenia();

    // Definir o ponto de partida e destino
    string partida = "Arad";
    string destino = "Bucareste";

    // Executar a busca A*
    int custo = aStarSearch(partida, destino);

    // Exibir o custo final
    if (custo != -1) {
        cout << "Custo total do caminho: " << custo << " km\n";
    }

    return 0;
}
