#include "profesor.h"
#include "alumno.h"
#include "ficherobinario.h"
#include <list>
#include <fstream>
#include <string>
#include <iostream>
//#include <cstdlib>

void Profesor::cargarCopia(std::string nombre,Agenda &ag){
  Alumno a("");
  std::list <Alumno> aux;
  nombre="copias/copia_"+nombre+".bin";
  //FicheroBinario fichero(nombre.c_str());
  //fichero.openin();
  std::ifstream fichero(nombre.c_str(),std::ifstream::binary);
  if(!fichero.is_open()){ //comprobar fallo en apertura del fichero
    std::cout << "Copia de seguridad no encontrada" << '\n';
    return;
  }
  else{
    aux.clear();
    while(fichero>>a && !fichero.eof()){
      aux.push_back(a);
    }
    ag.setAlumnos(aux);
  }
}
