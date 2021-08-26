/*
  Archivo: Via.cpp
  Autores: 
* Jhon Abril <jhon.abril@correounivalle.edu.co>
* Deisy Catalina Melo <deisy.melo@correounivalle.edu.co>
  Fecha creación: 2021-04-21
  Fecha última modificación: 2021-08-26
  Licencia: GNU-GPL
*/

#include "Via.h"

Via::Via()
{
  //
}

Via::~Via()
{
  for(int cualVagon = 0; cualVagon < vagonesViaPrincipal.size(); cualVagon++)
  {
    delete vagonesViaPrincipal[cualVagon];
    vagonesViaPrincipal[cualVagon] = nullptr;
  }
}

void Via::introducirVagon(Vagon *_vagon)
{
  this -> vagonesViaPrincipal.push_back(_vagon);
}

string Via::estadoActual()
{
  string resultado = "\n-------------------------\n| "; 
  for(int cualVagon = 0; cualVagon < vagonesViaPrincipal.size(); cualVagon++)
  {
    for(int cual = 0; cual < 1; cual++)
    {
      resultado += to_string(vagonesViaPrincipal[cualVagon] -> suNumero());
    }
    resultado += " | ";
  }
  resultado += "\n-------------------------\n";
  return resultado;
}

void Via::retrocederPor(Via &_via)
{
  // No se debe hacer ningún condicional porque la vía izquierda y derecha deben estar vacias :)
  _via.introducirVagon(this -> vagonesViaPrincipal.back());
  this -> vagonesViaPrincipal.pop_back();
}

void Via::avanzarDesde(Via &_via)
{
  if(_via.susVagones())
  {
    //
  }
  else
  {
    this -> introducirVagon(_via.vagonesViaPrincipal.back());
    _via.vagonesViaPrincipal.pop_back();
  }
}

bool Via::susVagones()
{
  if(vagonesViaPrincipal.empty())
  {
    return true;
  }
  return false;
}