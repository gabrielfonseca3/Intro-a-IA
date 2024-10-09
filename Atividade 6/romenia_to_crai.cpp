#include "romenia.h"

vector<EstadosRomenia> romenia_to_crai;

void inicializarRomenia_to_Crai() {
  romenia_to_crai.push_back({"Arad", {{"Zerind", 75}, {"Sibiu", 140}, {"Timisoara", 118}}, 160});
  romenia_to_crai.push_back({"Zerind", {{"Arad", 75}, {"Oradea", 71}}, 150});
  romenia_to_crai.push_back({"Oradea", {{"Zerind", 71}, {"Sibiu", 151}}, 140});
  romenia_to_crai.push_back({"Sibiu", {{"Arad", 140}, {"Oradea", 151}, {"Fagaras", 99}, {"Rimnicu Vilcea", 80}}, 80});
  romenia_to_crai.push_back({"Timisoara", {{"Arad", 118}, {"Lugoj", 111}}, 244});
  romenia_to_crai.push_back({"Lugoj", {{"Timisoara", 111}, {"Mehadia", 70}}, 234});
  romenia_to_crai.push_back({"Mehadia", {{"Lugoj", 70}, {"Drobeta", 75}}, 198});
  romenia_to_crai.push_back({"Drobeta", {{"Mehadia", 75}, {"Craiova", 120}}, 120});
  romenia_to_crai.push_back({"Craiova", {{"Drobeta", 120}, {"Rimnicu Vilcea", 146}, {"Pitesti", 138}}, 0});
  romenia_to_crai.push_back({"Rimnicu Vilcea", {{"Sibiu", 80}, {"Craiova", 146}, {"Pitesti", 97}}, 146});
  romenia_to_crai.push_back({"Fagaras", {{"Sibiu", 99}, {"Bucareste", 211}}, 239});
  romenia_to_crai.push_back({"Pitesti", {{"Rimnicu Vilcea", 97}, {"Craiova", 138}, {"Bucareste", 101}}, 138});
  romenia_to_crai.push_back({"Bucareste", {{"Fagaras", 211}, {"Pitesti", 101}, {"Giurgiu", 90}}, 227});
  romenia_to_crai.push_back({"Giurgiu", {{"Bucareste", 90}}, 270});
}
