#include <list>
#include <string>
#include <iostream>
#include "alumno.h"
#include "agenda.h"


int Agenda::buscarAlumno(std::string s){

  std::list <Alumno>::iterator it;
  //std::list <Alumno> aux;
  //aux=getAlumnos();
  int cont=0;
  if(alumnos_.size()==0){
    return -1;
  }
  for(it=alumnos_.begin();it!=alumnos_.end();it++){
    if(it->getDni()==s||it->getApellidos()==s){
      cont++;
    }
  }
   return cont;
}
