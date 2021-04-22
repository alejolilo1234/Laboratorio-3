/*
  Archivo: Via.h
  Autores: 
* Jhon Abril <jhon.abril@correounivalle.edu.co>
* Deisy Catalina Melo <deisy.melo@correounivalle.edu.co>
  Fecha creación: 2021-04-21
  Fecha última modificación: 2021-04-22
  Licencia: GNU-GPL
*/

/*
  CLASE: Via;
  INTENCIÓN: Acomodar diferentes vagones en sus vias, dentro de un vector privado para asi poder darle ordenes a ellos, como retroceder por un carril, avanzar, etc. Al final poder determinar el orden de los vagones en su estadoActual. 
  RELACIONES: Conoce vagones.
*/

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
    Constructor de la clase. No hace nada.
  */
  Via();
  /**
    Destructor de la clase.
  */
  ~Via();
  /**
    Inserta un vagon en el vector de punteros a vagones.
  */
  void introducirVagon(Vagon *);
  /**
    Estado actual en el cual se encuentra el vector de punteros a vagones.
  */
  void estadoActual();
  /**
    Retroceder por la con vía el vagon correspondiente, hacía RamalIzquierdo o hacía RamalDerecho.
  */
  void retrocederPor(Via *);
  /**
    Avanzar por la vía con el vagon correspondiente, hacia la vía principal.
  */
  void avanzarDesde(Via *);
};

#else
class Via;
#endif