/*
  Archivo: Via.cpp
  Autores: 
* Jhon Abril <jhon.abril@correounivalle.edu.co>
* Deisy Catalina Melo <deisy.melo@correounivalle.edu.co>
  Fecha creación: 2021-04-21
  Fecha última modificación: 2021-04-22
  Licencia: GNU-GPL
*/

#include "Via.h"
#include "Vagon.h"

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

void Via::estadoActual()
{
  cout << "\n-------------------------\n| "; 
  for(int cualVagon = 0; cualVagon < vagonesViaPrincipal.size(); cualVagon++)
  {
    for(int pipe = 0; pipe < 1; pipe++)
    {
      cout << vagonesViaPrincipal[cualVagon] -> suNumero();
    }
    cout << " | ";
  }
  cout << "\n-------------------------\n";
}

void Via::retrocederPor(Via *_via)
{
  _via->vagonesViaPrincipal.insert(_via->vagonesViaPrincipal.begin(),1,this -> vagonesViaPrincipal.back());
  this -> vagonesViaPrincipal.pop_back();
}

void Via::avanzarDesde(Via *_via)
{
  this -> vagonesViaPrincipal.push_back(_via->vagonesViaPrincipal.front());
  _via->vagonesViaPrincipal.erase(_via->vagonesViaPrincipal.begin());
}