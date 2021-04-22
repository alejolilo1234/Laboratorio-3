/*
  Archivo: main.cpp
  Autores: 
* Jhon Abril <jhon.abril@correounivalle.edu.co>
* Deisy Catalina Melo <deisy.melo@correounivalle.edu.co>
  Fecha creación: 2021-04-21
  Fecha última modificación: 2021-04-22
  Licencia: GNU-GPL
*/

/* HISTORIA: hay un tren con 6 vagones numerados consecutivamente de izquierda a derecha, del 1 al 6.
  En los vagones 2 y 4 hay personas enfermas que conviene transportarlas pero aisladas de las demás.
  Para ello, vamos a mover estos vagones al final del tren. Por suerte, en la estación hay dos ramales (uno hacia la izquierda y otro hacia la derecha) que nos van a ayudar a hacer este movimiento de vagones.
*/

#include "Via.h"
#include "Vagon.h"

int main()
{
  Via viaPrincipal;
  Via ramalIzquierdo;
  Via ramalDerecho;
  
  // Situación inicial:
  viaPrincipal.introducirVagon(new Vagon(1, false));  // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(2, true));  // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(3, false));  // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(4, true));  // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(5, false));  // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(6, false));  // TOMA PROPIEDAD
  
  cout << "Al inicio: "; viaPrincipal.estadoActual();
  
  //Movimientos de los vagones
  viaPrincipal.retrocederPor(&ramalIzquierdo);  // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.retrocederPor(&ramalIzquierdo);  // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.retrocederPor(&ramalDerecho);  // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.retrocederPor(&ramalIzquierdo);  // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.retrocederPor(&ramalDerecho);  // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.avanzarDesde(&ramalIzquierdo);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(&ramalIzquierdo);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(&ramalIzquierdo);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(&ramalDerecho);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(&ramalDerecho);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  
  // Situación final:
  cout << "Al final: "; viaPrincipal.estadoActual();
  return 0;
}