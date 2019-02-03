#include "profesor.h"
#include "alumno.h"
#include "ficherobinario.h"
#include "agenda.h"
#include <list>
#include <iostream>
#include <fstream>

void Profesor::exportarDatos(Agenda &ag){
  std::ofstream fichero(getNombreFichero().c_str(),std::ofstream::binary);
  //Alumno a("");
  //FicheroBinario fichero(getNombreFichero().c_str());
  //fichero.openout();
  std::list <Alumno> aux;//lista auxiliar para trabajar con los alumnos
  std::list <Alumno>::iterator i;
  aux=ag.getAlumnos();//copia los alumnos a la lista auxiliar
  for(i=aux.begin();i!=aux.end();i++){
    //a=*i;
    fichero<<*i;//escribe en el fichero al alumno
  }
  fichero.close();//cierra fichero
}
