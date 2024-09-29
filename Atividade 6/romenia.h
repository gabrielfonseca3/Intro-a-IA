#ifndef ROMENIA_H
#define ROMENIA_H

#include <string>
#include <vector>

using std::vector, std::string;

struct Acao{
  string destino;
  int custo;
};

struct EstadosRomenia{
  string estado;
  vector<Acao> acoes;
  int distancia;
};

extern vector<EstadosRomenia> romenia;

void inicializarRomenia();

#endif
