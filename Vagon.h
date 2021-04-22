#ifndef VAGON_H
#define VAGON_H

class Vagon
{
  private:
  int numero;
  bool alerta;
  
  public:
  /**
    Constructor de la clase.
  */
  Vagon(int,bool);
  /**
    Destructor de la clase.
  */
  ~Vagon();
  /**
    Destructor de la clase.
  */
  int suNumero();
};

#else
class Vagon;
#endif