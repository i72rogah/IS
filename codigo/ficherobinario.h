#ifndef FICHEROBINARIO_H
#define FICHEROBINARIO_H

#include <fstream>
#include <string>
#include "alumno.h"
#include "profesor.h"
#include "credencial.h"


class FicheroBinario {
private:
  std::string nombreFichero_;
  std::fstream fichero_;

public:
  inline FicheroBinario (std::string nombreFichero){nombreFichero_=nombreFichero;};
  void escribeProfesor(Profesor p);
  void escribeCredencial(Credencial c);
  void escribeAlumno(Alumno a);
  Alumno leeAlumno();
  Profesor leeProfesor();
  Credencial leeCredencial();
  void openout();
  void openin();
  bool eof();
  inline void close(){fichero_.close();};
};


#endif
