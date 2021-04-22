/*
  Archivo: Vagon.h
  Autores: 
* Jhon Abril <jhon.abril@correounivalle.edu.co>
* Deisy Catalina Melo <deisy.melo@correounivalle.edu.co>
  Fecha creación: 2021-04-21
  Fecha última modificación: 2021-04-22
  Licencia: GNU-GPL
*/

/*
  CLASE: Vagon;
  INTENCIÓN: Definir el número correspondiente del vagón y declarar si se encuentra dicho vagón en estado de alerta por presuntas personas contagiadas con el virus COVID-19.
  RELACIONES: Ninguna.
*/

#ifndef VAGON_H
#define VAGON_H

class Vagon
{
  private:
  int numero;
  bool alerta;
  
  public:
  /**
    Constructor de la clase para su numero y su estado de alerta.
  */
  Vagon(int,bool);
  /**
    Destructor de la clase. 
  */
  ~Vagon();
  /**
    Nos dice el número del vagón correspondiente.
  */
  int suNumero();
};

#else
class Vagon;
#endif