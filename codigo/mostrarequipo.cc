#include "alumno.h"
#include "agenda.h"
#include <iostream>
#include <list>
#include <cstdlib>

void Agenda::mostrarEquipo(int equipo){
  std::list<Alumno> aux;
  std::list<Alumno>::iterator it;
  aux=getAlumnos();
  if(aux.empty()){
    std::cout << "La agenda esta vacia" << '\n';
    return;
  }
  for(it=aux.begin();it!=aux.end();it++){
    if(it->getGrupo()==equipo){
      std::cout << "###############################################################" << '\n';
      std::cout << "  - DNI: " <<it->getDni()<< '\n';
      std::cout << "  - Nombre:" <<it->getNombre()<< '\n';
      std::cout << "  - Apellidos: " <<it->getApellidos()<< '\n';
      std::cout << "  - Telefono: " <<it->getTelefono()<< '\n';
      std::cout << "  - Email: " <<it->getEmail()<< '\n';
      std::cout << "  - Direccion: " <<it->getDireccion()<< '\n';
      std::cout << "  - Fecha de nacimiento: " <<it->getFechaNacimiento()<< '\n';
      std::cout << "  - Curso: " <<it->getCurso()<< '\n';
      std::cout << "  - Grupo: " <<it->getGrupo()<< '\n';
      if(it->getLider()==true){
        std::cout << "  - Es lider del grupo" << '\n';
      }
      else{
        std::cout << "  - No es lider del grupo" << '\n';
      }
      std::cout << "###############################################################" << '\n';
    }
  }
}
