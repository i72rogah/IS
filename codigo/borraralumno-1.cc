#include "agenda.h"
#include <list>

void Agenda::borrarAlumno(std::string s){
  list <Alumno> aux;
  list <Alumno>::iterator it;
  aux=getAlumnos();
  for(it=aux.begin();it!=aux.end();it++){
    if(it->getDNI()==s||it->getApellidos()==s){
      aux.erase(it);
    }
  }
  setAlumnos(aux);
}
