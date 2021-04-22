#ifndef VIA_H
#define VIA_H

#include<iostream>
#include<vector>
#include "Vagon.h"

using namespace std;

class Via
{
  private:
  vector <Vagon *> vagonesViaPrincipal;
  
  public:
  /**
    Constructor de la clase.
  */
  Via();
  /**
    Destructor de la clase.
  */
  ~Via();
  /**
    Introducir un vagon.
  */
  void introducirVagon(Vagon *);
  /**
    Estado actual.
  */
  void estadoActual();
  /**
    Destructor de la clase.
  */
  void retrocederPor(Via *);
  /**
    Destructor de la clase.
  */
  void avanzarDesde(Via *);
};

#else
class Via;
#endif