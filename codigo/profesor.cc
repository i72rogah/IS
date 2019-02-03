#include "profesor.h"
#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>

Profesor::Profesor(std::string dni,std::string nombre,std::string apellidos,std::string telefono,
  std::string email,std::string direccion,std::string fechanacimiento,
  int coordinador,std::string nombreFichero,Agenda* ptr){
  dni_=dni;
  nombre_=nombre;
  apellidos_=apellidos;
  telefono_=telefono;
  email_=email;
  direccion_=direccion;
  fechanacimiento_=fechanacimiento;
  coordinador_=coordinador;
  nombreFichero_=nombreFichero;
  ptrAgenda_=ptr;
}

std::ostream &operator<<(std::ostream &escritura, Profesor &p){
  std::string aux;
  if(p.getCoordinador()==0){aux="false";}
  else{aux="true";}
  escritura<<p.getDni()<<','<<p.getNombre()<<','<<p.getApellidos()<<','<<p.getTelefono()<<','
  <<p.getEmail()<<','<<p.getDireccion()<<','<<aux<<','<<p.getNombreFichero()<<'\n';
  return escritura;
}
std::istream &operator>>(std::istream &lectura, Profesor &p){
  std::string aux;
  getline(lectura,aux,',');
  p.setDni(aux);
  getline(lectura,aux,',');
  p.setNombre(aux);
  getline(lectura,aux,',');
  p.setApellidos(aux);
  getline(lectura,aux,',');
  p.setTelefono(aux);
  getline(lectura,aux,',');;
  p.setEmail(aux);
  getline(lectura,aux,',');
  p.setDireccion(aux);
  getline(lectura,aux,',');
  if(aux=="true"){p.setCoordinador(1);}
  else{p.setCoordinador(0);}
  getline(lectura,aux,'\n');
  p.setNombreFichero(aux);
  return lectura;
}
/*
void Profesor::escribeProfesor(std::ofstream &f){
  size_t size;
  size=dni_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)dni_.c_str(),size);
  size=nombre_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)nombre_.c_str(),size);
  size=apellidos_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)apellidos_.c_str(),size);
  size=telefono_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)telefono_.c_str(),size);
  size=email_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)email_.c_str(),size);
  size=direccion_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)direccion_.c_str(),size);
  size=fechanacimiento_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)fechanacimiento_.c_str(),size);
  f.write((char*)&coordinador_,sizeof(coordinador_));
  size=nombreFichero_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)nombreFichero_.c_str(),size);
}

Profesor Profesor::leeProfesor(std::ifstream &f){
  Profesor aux("");
  size_t size;
  char *data;
  f.read((char*)&size, sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setDni(data);
  delete data;
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setNombre(data);
  delete data;
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setApellidos(data);
  delete data;
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setTelefono(data);
  delete data;
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setEmail(data);
  delete data;
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setDireccion(data);
  delete data;
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setFechaNacimiento(data);
  delete data;
  f.read(data,sizeof(int));
  aux.setCoordinador(atoi(data));
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setNombreFichero(data);
  delete data;
  return aux;
}*/
