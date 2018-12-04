#include "agenda.h"
#include "alumno.h"
#include <iostream>
#include <string>



void Agenda::introducirAlumno(){
  std::string aux;
  int aux;
  Alumno a;
  std::cout << "Introduzca el DNI del alumno" << '\n';
  std::cin >> aux;
  if (buscarAlumno(aux)==0) {
   a.setDni(aux);
   std::cout << "Introduzca el nombre del alumno" << '\n';
   std::cin >> aux;
   a.setNombre(aux);
   std::cout << "Introduzca el apellido del alumno" << '\n';
   std::cin >> aux;
   a.setApellido(aux);
   std::cout << "Introduzca el telefono del alumno" << '\n';
   std::cin >> aux;
   a.setTelefono(aux);
   std::cout << "Introduzca el  e-mail del alumno" << '\n';
   std::cin >> aux;
   a.setMail(aux);
   std::cout << "Introduzca la direccion del alumno" << '\n';
   std::cin >> aux;
   a.setDireccion(aux);
   std::cout << "Introduzca la fecha de nacimiento del alumno (Formato dd/mm/aaaa)" << '\n';
   std::cin >> aux;
   a.setFechaNacimiento(aux);
   std::cout << "Introduzca el curso del alumno" << '\n';
   std::cin >> aux;
   a.setCurso(aux);
   std::cout << "Introduzca el numero del equipo del alumno" << '\n';
   std::cin >> aux;
   a.setEquipo(aux);
   std::cout << "Introduzca si el alumno es o no lider" << '\n';
   std::cin >> aux;
   a.setLider(aux);
  }
  else{
    std::cout << "El alumno ya existe" << '\n';
  }
}
