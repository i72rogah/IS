#include "ficherobinario.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "alumno.h"
#include "profesor.h"
#include "credencial.h"

bool FicheroBinario::eof(){
  if(!fichero_.eof()){return true;}
  else{return false;}
}
void FicheroBinario::openin(){
  fichero_.open(nombreFichero_.c_str(),std::ifstream::binary|std::ifstream::in);
}
void FicheroBinario::openout(){
  fichero_.open(nombreFichero_.c_str(),std::ofstream::binary|std::ofstream::ate);
}
void FicheroBinario::escribeProfesor(Profesor p){
  //fichero_.open(nombreFichero_,std::ofstream::bin|std::ofstream::ate);
  size_t size;
  size=p.getDni().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getDni().c_str(),size);
  size=p.getNombre().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getNombre().c_str(),size);
  size=p.getApellidos().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getApellidos().c_str(),size);
  size=p.getTelefono().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getTelefono().c_str(),size);
  size=p.getEmail().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getEmail().c_str(),size);
  size=p.getDireccion().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getDireccion().c_str(),size);
  size=p.getFechaNacimiento().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getFechaNacimiento().c_str(),size);
  fichero_.write((char*)&p.getCoordinador(),sizeof(int));
  size=p.getNombreFichero().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)p.getNombreFichero().c_str(),size);
  //fichero_.close();
}
void FicheroBinario::escribeCredencial(Credencial c){
  //fichero_.open(nombreFichero_,std::ofstream::bin|std::ofstream::ate);
  if(!fichero_.is_open()){std::cout << "Fichero no encontrado" << '\n'; exit(-1);};
  size_t size;
  size=c.getUsuario().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)c.getUsuario().c_str(),size);
  size=c.getContrasena().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)c.getContrasena().c_str(),size);
  //fichero_.close();
}
void FicheroBinario::escribeAlumno(Alumno a){
  //fichero_.open(nombreFichero_,std::ofstream::bin|std::ofstream::ate);
  if(!fichero_.is_open()){std::cout << "Fichero no encontrado" << '\n'; exit(-1);};
  size_t size;
  size=a.getDni().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)a.getDni().c_str(),size);
  size=a.getNombre().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)a.getNombre().c_str(),size);
  size=a.getApellidos().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)a.getApellidos().c_str(),size);
  size=a.getTelefono().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)a.getTelefono().c_str(),size);
  size=a.getEmail().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)a.getEmail().c_str(),size);
  size=a.getDireccion().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)a.getDireccion().c_str(),size);
  size=a.getFechaNacimiento().size();
  fichero_.write((char*)&size,sizeof(size_t));
  fichero_.write((char*)a.getFechaNacimiento().c_str(),size);
  fichero_.write((char*)&a.getCurso(),sizeof(a.getCurso()));
  fichero_.write((char*)&a.getGrupo(),sizeof(a.getGrupo()));
  fichero_.write((char*)&a.getLider(),sizeof(a.getLider()));
  //fichero_.close();
}
Alumno FicheroBinario::leeAlumno(){
  //fichero_.open(nombreFichero_,std::ifstream::bin|std::ifstream::in);
  if(!fichero_.is_open()){std::cout << "Fichero no encontrado" << '\n'; exit(-1);};
  Alumno aux("");
  size_t size;
  char *data;
  fichero_.read((char*)&size, sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setDni(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setNombre(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setApellidos(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setTelefono(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setEmail(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setDireccion(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setFechaNacimiento(data);
  delete data;
  fichero_.read(data,sizeof(int));
  aux.setCurso(atoi(data));
  fichero_.read(data,sizeof(int));
  aux.setGrupo(atoi(data));
  //leer lider
  fichero_.read(data,sizeof(int));
  aux.setLider(atoi(data));
  return aux;
  //fichero_.close();
}
Profesor FicheroBinario::leeProfesor(){
  //fichero_.open(nombreFichero_,std::ifstream::bin|std::ifstream::in);
  Profesor aux("");
  size_t size;
  char *data;
  fichero_.read((char*)&size, sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setDni(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setNombre(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setApellidos(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setTelefono(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setEmail(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setDireccion(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setFechaNacimiento(data);
  delete data;
  fichero_.read(data,sizeof(int));
  aux.setCoordinador(atoi(data));
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setNombreFichero(data);
  delete data;
  return aux;
  //fichero_.close();
}
Credencial FicheroBinario::leeCredencial(){
  //fichero_.open(nombreFichero_,std::ifstream::bin|std::ofstream::in);
  Credencial aux("","");
  size_t size;
  char *data;
  fichero_.read((char*)&size, sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setUsuario(data);
  delete data;
  fichero_.read((char*)&size,sizeof(size));
  data=new char[size+1];
  fichero_.read(data,size);
  data[size]='\0';
  aux.setContrasena(data);
  delete data;
  return aux;
  //fichero_.close();
}
