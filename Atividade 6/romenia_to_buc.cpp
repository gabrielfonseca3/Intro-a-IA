#include "romenia.h"

vector<EstadosRomenia> romenia_to_buc;

void inicializarRomenia_to_Buc(){
  romenia_to_buc.push_back({"Arad", {{"Zerind", 75}, {"Sibiu", 140}, {"Timisoara", 118}}, 366});
  romenia_to_buc.push_back({"Zerind", {{"Arad", 75}, {"Oradea", 71}}, 374});
  romenia_to_buc.push_back({"Timisoara", {{"Arad", 118}, {"Lugoj", 111}}, 329});
  romenia_to_buc.push_back({"Lugoj", {{"Timisoara", 111}, {"Mehadia", 70}}, 244});
  romenia_to_buc.push_back({"Mehadia", {{"Lugoj", 70}, {"Drobeta", 75}}, 241});
  romenia_to_buc.push_back({"Drobeta", {{"Mehadia", 75}, {"Craiova", 120}}, 242});
  romenia_to_buc.push_back({"Craiova", {{"Drobeta", 120}, {"Rimnicu Vilcea", 146}, {"Pitesti", 138}}, 160});
  romenia_to_buc.push_back({"Sibiu", {{"Arad", 140}, {"Oradea", 151}, {"Fagaras", 99}, {"Rimnicu Vilcea", 80}}, 253});
  romenia_to_buc.push_back({"Oradea", {{"Zerind", 71}, {"Sibiu", 151}}, 380});
  romenia_to_buc.push_back({"Rimnicu Vilcea", {{"Sibiu", 80}, {"Craiova", 146}, {"Pitesti", 97}}, 193});
  romenia_to_buc.push_back({"Pitesti", {{"Rimnicu Vilcea", 97}, {"Craiova", 138}, {"Bucareste", 101}}, 100});
  romenia_to_buc.push_back({"Fagaras", {{"Sibiu", 99}, {"Bucareste", 211}}, 211});
  romenia_to_buc.push_back({"Bucareste", {{"Fagaras", 211}, {"Pitesti", 101}, {"Giurgiu", 90}, {"Urziceni", 85}}, 0});
  romenia_to_buc.push_back({"Giurgiu", {{"Bucareste", 90}}, 77});
  romenia_to_buc.push_back({"Urziceni", {{"Bucareste", 85}, {"Hirsova", 98}, {"Vaslui", 142}}, 80});
  romenia_to_buc.push_back({"Hirsova", {{"Urziceni", 98}, {"Eforie", 86}}, 151});
  romenia_to_buc.push_back({"Eforie", {{"Hirsova", 86}}, 161});
  romenia_to_buc.push_back({"Vaslui", {{"Urziceni", 142}, {"Iasi", 92}}, 199});
  romenia_to_buc.push_back({"Iasi", {{"Vaslui", 92}, {"Neamt", 87}}, 318});
  romenia_to_buc.push_back({"Neamt", {{"Iasi", 87}}, 234});
}
