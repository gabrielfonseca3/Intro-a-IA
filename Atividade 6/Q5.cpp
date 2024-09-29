#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <unordered_set>

using namespace std;
// Estrutura do Nó da matriz
struct Node{
  int x, y;
  int g_custo;
  int h_custo;
  int f_cost() const{
    return g_custo + h_custo; // custo total
  }

  bool operator>(const Node& other) const{
    return f_cost() > other.f_cost(); // filha de prioridade 
  }

};

int heuristic(int x1, int y1, int x2, int y2){
  return abs(x1-x2) + abs(y1-y2);
}

void a_star_search(int startX, int startY, int goalX, int goalY, int matriz[6][6]){
  priority_queue<Node, vector<Node>, greater<Node>> openSet; // Fila de prioridade
    unordered_set<int> closedSet;

    openSet.push({startX, startY, 0, heuristic(startX, startY, goalX, goalY)});

    while(!openSet.empty()){
      Node current = openSet.top(); // Nó de menor custo total
      openSet.pop();

      if (current.x == goalX && current.y == goalY){ // Checa se é o nó objetivo
        cout << "Caminho encontrado com custo: " << current.g_custo << endl;
        return;
      }

      closedSet.insert(current.x * 6 + current.y);

      for (auto[dx, dy] : vector<pair<int, int>>{{0, 1}, {1, 0}, {0, -1}, {-1, 0}}){
        int newX = current.x + dx;
        int newY = current.y + dy;

        // Verifica se o novo nó está dentro dos limites da matriz
        if (newX < 0 || newY < 0 || newX >= 6 || newY >= 6 || closedSet.count (newX * 6 + newY)){
          continue;
        }

        int newGCost = current.g_custo + matriz[newX][newY];
        int newHCost = heuristic(newX, newY, goalX, goalY);

        openSet.push({newX, newY, newGCost, newHCost});

      }
    }

    cout << "Nenhum caminho encontrado." << endl; // Se a fila ficar vazia
}

int main() {
    // Inicializa a matriz
    int matriz[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    // Chama a função A* a partir do canto superior esquerdo (0,0) até o canto inferior direito (5,5)
    a_star_search(0, 0, 5, 5, matriz);

    return 0;
}
