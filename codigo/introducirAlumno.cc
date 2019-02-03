#include "agenda.h"
#include "alumno.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <string>

void Agenda::introducirAlumno(){
  std::string aux, opcion="s";
  std::list <Alumno> lista;
  std::list <Alumno>::iterator it;
  Alumno a("");
  int encontrado=0;
  std::cout << "Introduzca el DNI del alumno" << '\n';
  std::cin.ignore();
  std::cin >> aux;
  if (buscarAlumno(aux)==0||buscarAlumno(aux)==-1) {
   a.setDni(aux);
   std::cout << "Introduzca el nombre del alumno" << '\n';
   std::cin.ignore();
   std::cin >> aux;
   a.setNombre(aux);
   std::cout << "Introduzca el apellido del alumno" << '\n';
   std::cin.ignore();
   getline(std::cin,aux);
   a.setApellidos(aux);
   std::cout << "Introduzca el telefono del alumno" << '\n';
   //std::cin.ignore();
   std::cin >> aux;
   a.setTelefono(aux);
   std::cout << "Introduzca el  e-mail del alumno" << '\n';
   //std::cin.ignore();
   std::cin >> aux;
   a.setEmail(aux);
   std::cout << "Introduzca la direccion del alumno" << '\n';
   std::cin.ignore();
   getline(std::cin,aux);
   a.setDireccion(aux);
   std::cout << "Introduzca la fecha de nacimiento del alumno (Formato dd/mm/aaaa)" << '\n';
   //std::cin.ignore();
   std::cin >> aux;
   a.setFechaNacimiento(aux);
   std::cout << "Introduzca el curso del alumno" << '\n';
   //std::cin.ignore();
   std::cin >> aux;
   a.setCurso(atoi(aux.c_str()));
   std::cout << "Introduzca el numero del equipo del alumno" << '\n';
   //std::cin.ignore();
   std::cin >> aux;
   a.setGrupo(atoi(aux.c_str()));
   for(it=lista.begin();it!=lista.end();it++){
     if(it->getGrupo()==a.getGrupo()){
       encontrado=1;
     }
   }
   if(encontrado==0){
     std::cout << "Es el alumno lider del grupo?" << '\n';
     std::cout << "Si: pulse cualquier tecla" << '\n';
     std::cout << "No: pulse n" << '\n';
     std::cin.ignore();
     std::cin >> opcion;
     if(opcion=="n"||opcion=="N"){
       a.setLider(0);
     }
     else{
       a.setLider(1);
     }
   }
   else{
     std::cout << "Este alumno no sera lider del grupo" << '\n';
     a.setLider(0);
   }
   alumnos_.push_back(a);
 }
  else{
    std::cout << "El alumno ya existe" << '\n';
  }

}
