#include <iostream>
#include <string>
#include <cstdio>
#include "agenda.h"
#include "alumno.h"
#include "profesor.h"

Profesor cargaProfesor(std::string s);

int menu();

void registrarProfesor();

int login(std::string usuario,std::string contrasena);

int main(int argc, char const *argv[]) {
  int opcion=99,entero;
  Profesor p;
  Agenda ag;
  Agenda* ptr=&ag;
  std::string aux, usuario, contrasena;
  std::cout << "ACCESO AL SISTEMA" << '\n';
  std::cout << "Usuario(DNI): ";
  std::cin >> usuario;
  std::cout << "Contrasena: ";
  std::cin >> contrasena;
  if(login(usuario,contrasena)=1){
    std::cout << "Usuario o contrasena incorrecto" << '\n';
    return 0;
  }
  else{
    p=cargaProfesor(aux);
    p.setPtrAgenda(ptr);
    while(opcion!=0){
      opcion=menu();
      switch (opcion) {
        case 1:
        if(ag.getAlumnos().size()<150){
          ag.introducirAlumno();
        }
        else{
          std::cout << "La capacidad de la agenda esta completa" << '\n';
        }
        break;
        case 2:
        std::cout << "Introduzca DNI o apellidos del alumno" << '\n';
        std::cin.ignore();
        getline(std::cin,aux);
        if(ag.buscarAlumno(aux)==-1){
          std::cout << "La agenda esta vacia" << '\n';
          break;
        }
        if(ag.buscarAlumno(aux)==0){
          std::cout << "Alumno no encontrado" << '\n';
        }
        else if(ag.buscarAlumno(aux)==1){
          ag.modificarAlumno(aux);
        }
        else{
          std::cout << "Existe mas de un alumno con esos apellidos" << '\n';
          std::cout << "Introduzca el DNI" << '\n';
          std::cin.ignore();
          std::cin >> aux;
          if(ag.buscarAlumno(aux)==0){
            std::cout << "Alumno no encontrado" << '\n';
          }
          else if(ag.buscarAlumno(aux)==1){
            ag.modificarAlumno(aux);
          }
          else{
            std::cout << "Mas de un alumno con el mismo DNI, modifica los datos de los alumnos" << '\n';
          }
        }
        break;
        case 3:
        std::cout << "Introduzca DNI o apellidos del alumno" << '\n';
        std::cin.ignore();
        getline(std::cin,aux);
        if(ag.buscarAlumno(aux)==-1){
          std::cout << "La agenda esta vacia" << '\n';
          break;
        }
        if(ag.buscarAlumno(aux)==0){
          std::cout << "Alumno no encontrado" << '\n';
        }
        else if(ag.buscarAlumno(aux)==1){
          ag.borrarAlumno(aux);
        }
        else{
          std::cout << "Existe mas de un alumno con esos apellidos" << '\n';
          std::cout << "Introduzca el DNI" << '\n';
          std::cin.ignore();
          std::cin >> aux;
          if(ag.buscarAlumno(aux)==0){
            std::cout << "Alumno no encontrado" << '\n';
          }
          else if(ag.buscarAlumno(aux)==1){
            ag.borrarAlumno(aux);
          }
          else{
            std::cout << "Mas de un alumno con el mismo DNI, modifica los datos de los alumnos" << '\n';
          }
        }
        break;
        case 4:
        ag.mostrarAlumnos();
        break;
        case 5:
        std::cout << "Introduzca numero del equipo" << '\n';
        std::cin.ignore();
        std::cin >> entero;
        ag.mostrarEquipo(entero);
        break;
        case 6:
        std::cout << "Introduzca DNI o apellidos del alumno" << '\n';
        std::cin.ignore();
        getline(std::cin,aux);
        if(ag.buscarAlumno(aux)==-1){
          std::cout << "La agenda esta vacia" << '\n';
          break;
        }
        if(ag.buscarAlumno(aux)==0){
          std::cout << "Alumno no encontrado" << '\n';
        }
        else if(ag.buscarAlumno(aux)==1){
          ag.mostrarAlumno(aux);
        }
        else{
          std::cout << "Existe mas de un alumno con esos apellidos" << '\n';
          std::cout << "Introduzca el DNI" << '\n';
          std::cin.ignore();
          std::cin >> aux;
          if(ag.buscarAlumno(aux)==0){
            std::cout << "Alumno no encontrado" << '\n';
          }
          else if(ag.buscarAlumno(aux)==1){
            ag.mostrarAlumno(aux);
          }
          else{
            std::cout << "Mas de un alumno con el mismo DNI, modifica los datos de los alumnos" << '\n';
          }
        }
        break;
        case 7:
        ag.ordenarAlf();
        break;
        case 8:
        p.importarDatos();
        break;
        case 9:
        p.exportarDatos();
        break;
        case 10:
        if(p.getCoordinador()==false){
          std::cout << "No tiene permisos para realizar esta opcion" << '\n';
        }
        else{
          std::cout << "Introduzca la fecha de la copia de seguridad(formato dd/mm/aaaa)" << '\n';
          std::cin.ignore();
          std::cin >> aux;
          p.cargarCopia(aux);
        }
        break;
        case 11:
        if(p.getCoordinador()==false){
          std::cout << "No tiene permisos para realizar esta opcion" << '\n';
        }
        else{
          std::cout << "Introduzca la fecha de hoy para la copia de seguridad(formato dd/mm/aaaa)" << '\n';
          std::cin.ignore();
          std::cin >> aux;
          p.guardarCopia(aux);
        }
        break;
        case 12:
        registrarProfesor();
        break;
      }
    }
  }
  return 0;
}
