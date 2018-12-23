#include "alumno.h"
#include "agenda.h"
#include <iostream>
#include <list>
#include <string>

void Agenda::mostrarAlumno(std::string s){
  std::list<Alumno> aux;
  std::list<Alumno>::iterator it;
  aux=getAlumnos();
  for(it=aux.begin();it!=aux.end();it++){
    if(it->getDni()==s||it->getApellidos()==s){
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
