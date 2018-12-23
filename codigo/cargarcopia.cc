#include "profesor.h"
#include "alumno.h"
#include <list>
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>

void Profesor::cargarCopia(std::string nombre){
  Alumno a;
  std::list <Alumno> aux;
  nombre="copias/copia_"+nombre+".bin";
  std::ifstream fichero(nombre.c_str(),std::ifstream::binary);
  if(!fichero.is_open()){ //comprobar fallo en apertura del fichero
    std::cout << "Copia de seguridad no encontrada" << '\n';
    exit(-1);
  }
  else{
    aux.clear();
    while(fichero.read((char*)&a,sizeof(Alumno)) && !fichero.eof()){
      aux.push_back(a);
    }
    ptrAgenda_->setAlumnos(aux);
    fichero.close();
  }
}
