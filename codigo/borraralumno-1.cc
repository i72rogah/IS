#include "agenda.h"
#include <list>

void Agenda::borrarAlumno(std::string s){
  std::list <Alumno> aux;
  std::list <Alumno>::iterator it;
  aux=getAlumnos();
  for(it=aux.begin();it!=aux.end();it++){
    if(it->getDni()==s||it->getApellidos()==s){
      aux.erase(it);
    }
  }
  setAlumnos(aux);
}
