#include "agenda.h"
#include "alumno.h"
#include <iostream>
#include <string>



void Agenda::introducirAlumno(){
  std::string aux;
  Alumno a;
  std::cout << "Introduzca el DNI del alumno" << '\n';
  getline(std::cin,aux);
  if (buscarAlumno(aux)==0) {
   a.setDni(aux);
   std::cout << "Introduzca el nombre del alumno" << '\n';
   getline(std::cin,aux);
   a.setNombre(aux);
   std::cout << "Introduzca el apellido del alumno" << '\n';
   getline(std::cin,aux);
   a.setApellido(aux);
   std::cout << "Introduzca el telefono del alumno" << '\n';
   getline(std::cin,aux);
   a.setTelefono(aux);
   std::cout << "Introduzca el  e-mail del alumno" << '\n';
   getline(std::cin,aux);
   a.setMail(aux);
   std::cout << "Introduzca la direccion del alumno" << '\n';
   getline(std::cin,aux);
   a.setDireccion(aux);
   std::cout << "Introduzca la fecha de nacimiento del alumno (Formato dd/mm/aaaa)" << '\n';
   getline(std::cin,aux);
   a.setFechaNacimiento(aux);
   std::cout << "Introduzca el curso del alumno" << '\n';
   getline(std::cin,aux);
   a.setCurso(atoi(aux.c_str()));
   std::cout << "Introduzca el numero del equipo del alumno" << '\n';
   getline(std::cin,aux);
   a.setEquipo(atoi(aux.c_str()));
   std::cout << "Introduzca si el alumno es o no lider" << '\n';
   getline(std::cin,aux);
   a.setLider(aux);
  }
  else{
    std::cout << "El alumno ya existe" << '\n';
  }
}
