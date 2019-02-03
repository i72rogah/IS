#include <fstream>
#include <string>
#include <list>
#include <iostream>
#include <cstdlib>
#include "profesor.h"
#include "ficherobinario.h"
#include "credencial.h"

void registrarProfesor(){
  Profesor p("");
  Credencial c("","");
  //FicheroBinario ficherop("profesores.bin");
  //ficherop.openout();
  //FicheroBinario ficheroc("credenciales.bin");
  //ficheroc.openout();
  std::string aux;
  std::cout << "DNI: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setDni(aux);
  c.setUsuario(aux);
  std::cout << "Nombre: ";
  //std::cin.ignore();
  getline(std::cin,aux);
  p.setNombre(aux);
  std::cout << "Apellidos: ";
  //std::cin.ignore();
  getline(std::cin,aux);
  p.setApellidos(aux);
  std::cout << "Telefono: ";
  //std::cin.ignore();
  getline(std::cin,aux);
  p.setTelefono(aux);
  std::cout << "Email: ";
  //std::cin.ignore();
  getline(std::cin,aux);
  p.setEmail(aux);
  std::cout << "Direccion: ";
  //std::cin.ignore();
  getline(std::cin,aux);
  p.setDireccion(aux);
  std::cout << "Fecha de nacimiento(formato dd/mm/aaaa): ";
  //std::cin.ignore();
  getline(std::cin,aux);
  p.setFechaNacimiento(aux);
  std::cout << "Nombre fichero local: ";
  //std::cin.ignore();
  getline(std::cin,aux);
  p.setNombreFichero(aux);
  std::cout << "¿El profesor es coordinador?" << '\n';
  std::cout << "Si: pulse cualquier tecla" << '\n';
  std::cout << "No: pulse n" << '\n';
  //std::cin.ignore();
  std::cin >> aux;
  if(aux=="n"||aux=="N"){
    p.setCoordinador(0);
  }
  else{
    p.setCoordinador(1);
  }
  p.setPtrAgenda(NULL);
  std::ofstream ficherop("profesores.bin",std::ofstream::app);
  if(!ficherop.is_open()){return;};
  std::ofstream ficheroc("credenciales.bin",std::ofstream::app);
  if(!ficheroc.is_open()){return;};
  std::cout << "Contrasena del profesor para acceso: ";
  //std::cin.ignore();
  std::cin >> aux;
  c.setContrasena(aux);
  ficherop<<p;
  ficheroc<<c;
  ficherop.close();
  ficheroc.close();
}
