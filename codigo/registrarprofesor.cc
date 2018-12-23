#include <fstream>
#include <string>
#include <list>
#include <iostream>
#include <cstdlib>
#include "profesor.h"
#include "credencial.h"

void registrarProfesor(){
  Profesor p;
  Credencial c;
  std::string aux;
  std::list<Profesor> listap;
  std::list<Profesor>::iterator itp;
  std::list<Credencial> listac;
  std::list<Credencial>::iterator itc;
  std::ifstream ficherop("profesores.bin",std::ifstream::binary);
  std::ifstream ficheroc("credenciales.bin",std::ifstream::binary);
  if(!ficherop.is_open()){exit(-1);};
  if(!ficheroc.is_open()){exit(-1);};
  while(ficherop.read((char*)&p,sizeof(p))&&!ficherop.eof()){
    listap.push_back(p);
  }
  std::cout << "aqui" << '\n';
  while(ficheroc.read((char*)&c,sizeof(c))&&!ficheroc.eof()){
    listac.push_back(c);
  }
  std::cout << "DNI: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setDni(aux);
  c.setUsuario(aux);
  std::cout << "Nombre: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setNombre(aux);
  std::cout << "Apellidos: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setApellidos(aux);
  std::cout << "Telefono: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setTelefono(aux);
  std::cout << "Email: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setEmail(aux);
  std::cout << "Direccion: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setDireccion(aux);
  std::cout << "Fecha de nacimiento(formato dd/mm/aaaa): ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setFechaNacimiento(aux);
  std::cout << "Nombre fichero local: ";
  std::cin.ignore();
  getline(std::cin,aux);
  p.setNombreFichero(aux);
  std::cout << "¿El profesor es coordinador?" << '\n';
  std::cout << "Si: pulse cualquier tecla" << '\n';
  std::cout << "No: pulse n" << '\n';
  std::cin.ignore();
  getline(std::cin,aux);
  if(aux=="n"||aux=="N"){
    p.setCoordinador(false);
  }
  else{
    p.setCoordinador(true);
  }
  p.setPtrAgenda(NULL);
  listap.push_back(p);
  ficherop.close();
  ficheroc.close();
  std::ofstream ficherop2("profesores.bin",std::ofstream::binary);
  for(itp=listap.begin();itp!=listap.end();itp++){
    p=*itp;
    ficherop2.write((char*)&p,sizeof(Profesor));
  }
  std::ofstream ficheroc2("credenciales.bin",std::ofstream::binary);
  if(!ficheroc2.is_open()){exit(-1);};
  std::cout << "Contrasena del profesor para acceso: ";
  std::cin.ignore();
  std::cin >> aux;
  c.setContrasena(aux);
  listac.push_back(c);
  for(itc=listac.begin();itc!=listac.end();itc++){
    c=*itc;
    ficheroc2.write((char*)&c,sizeof(Credencial));
  }
  ficheroc2.close();
}
