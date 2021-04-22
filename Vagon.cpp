/*
  Archivo: Vagon.cpp
  Autores: 
* Jhon Abril <jhon.abril@correounivalle.edu.co>
* Deisy Catalina Melo <deisy.melo@correounivalle.edu.co>
  Fecha creación: 2021-04-21
  Fecha última modificación: 2021-04-22
  Licencia: GNU-GPL
*/

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