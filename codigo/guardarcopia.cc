#include "profesor.h"
#include "alumno.h"
#include <list>
#include <fstream>
#include <iostream>
#include <string>

void Profesor::guardarCopia(std::string nombre){
  Alumno a;
  std::list <Alumno> aux;//lista auxiliar para trabajar con los alumnos
  std::list <Alumno>::iterator i;
  nombre="copias/copia_"+nombre+".bin";
  std::ofstream fichero(nombre.c_str(),std::ofstream::binary);
  aux=ptrAgenda_->getAlumnos();//copia los alumnos a la lista auxiliar
  for(i=aux.begin();i!=aux.end();i++){
    a=*i;
    fichero.write((char*)&a,sizeof(Alumno));//escribe en el fichero al alumno
  }
  fichero.close();//cierra fichero
}
