#include "Vagon.h"

Vagon::Vagon(int _numero, bool _alerta)
{
  this -> numero = _numero;
  this -> alerta = _alerta;
}

Vagon::~Vagon()
{
  //
}

int Vagon::suNumero()
{
  return this -> numero;
}