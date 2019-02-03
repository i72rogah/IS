#include "profesor.h"
#include "alumno.h"
#include "ficherobinario.h"
#include <list>
#include <fstream>
#include <iostream>
#include <string>

void Profesor::guardarCopia(std::string nombre,Agenda &ag){
  //Alumno a("");
  std::list <Alumno> aux;//lista auxiliar para trabajar con los alumnos
  std::list <Alumno>::iterator i;
  nombre="copias/copia_"+nombre+".bin";
  //FicheroBinario fichero(nombre.c_str());
  //fichero.openout();
  std::ofstream fichero(nombre.c_str(),std::ofstream::binary);
  aux=ag.getAlumnos();//copia los alumnos a la lista auxiliar
  for(i=aux.begin();i!=aux.end();i++){
    //a=*i;
    fichero<<*i;//escribe en el fichero al alumno
  }
  fichero.close();//cierra fichero
}
