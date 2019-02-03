#include "agenda.h"
#include <list>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "alumno.h"

void Agenda::modificarAlumno(std::string s){
  std::list <Alumno>::iterator it;
  std::list <Alumno> aux;
  Alumno a("");
  int opcionmenu=0;
  std::string opcion="s";
  std::string modificado;
  int entero;
  aux=getAlumnos();

  for(it=aux.begin();it!=aux.end();it++){
    if(it->getDni()==s||it->getApellidos()==s){
      a=*it;
      aux.erase(it);
    }
  }
  while(opcion!="n"||opcion!="N"){
    std::cout << "Seleccione parametro a cambiar" << '\n';
    std::cout << "1.- DNI" << '\n';
    std::cout << "2.- Nombre" << '\n';
    std::cout << "3.- Apellidos" << '\n';
    std::cout << "4.- Telefono" << '\n';
    std::cout << "5.- Email" << '\n';
    std::cout << "6.- Direccion" << '\n';
    std::cout << "7.- Fecha de nacimiento" << '\n';
    std::cout << "8.- Curso" << '\n';
    std::cout << "9.- Numero de grupo" << '\n';
    std::cout << "10.- ¿Lider?" << '\n';
    std::cin.ignore();
    std::cin >> opcionmenu;
    switch (opcionmenu) {
      case 1:
      std::cout << "Introduzca el DNI" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      a.setDni(modificado);
      break;
      case 2:
      std::cout << "Introduzca el nombre" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      a.setNombre(modificado);
      break;
      case 3:
      std::cout << "Introduzca los apellidos" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      a.setApellidos(modificado);
      break;
      case 4:
      std::cout << "Introduzca el telefono" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      a.setTelefono(modificado);
      break;
      case 5:
      std::cout << "Introduzca el email" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      a.setEmail(modificado);
      break;
      case 6:
      std::cout << "Introduzca la direccion" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      a.setDireccion(modificado);
      break;
      case 7:
      std::cout << "Introduzca la fecha de nacimiento(formato dd/mm/aaaa)" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      a.setFechaNacimiento(modificado);
      break;
      case 8:
      std::cout << "Introduzca el curso" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      entero=atoi(modificado.c_str());
      a.setCurso(entero);
      break;
      case 9:
      std::cout << "Introduzca el numero de grupo" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      entero=atoi(modificado.c_str());
      a.setGrupo(entero);
      break;
      case 10:
      std::cout << "Introduzca 1 si el alumno es lider, cualquier otra tecla si no lo es" << '\n';
      std::cin.ignore();
      getline(std::cin,modificado);
      entero=atoi(modificado.c_str());
      if(entero==1){
        a.setLider(1);
      }
      else{
        a.setLider(0);
      }
      break;
    }
    std::cout << "¿Desea cambiar otro dato?" << '\n';
    std::cout << "Si: pulse cualquier tecla" << '\n';
    std::cout << "No: pulse n" << '\n';
    std::cin.ignore();
    std::cin >> opcion;
    }
    aux.push_back(a);
    setAlumnos(aux);
}
