#include "alumno.h"
#include <string>
#include <cstdlib>
#include <fstream>

Alumno::Alumno(std::string dni,std::string nombre,std::string apellidos,
  std::string telefono,std::string email,std::string direccion,
  std::string fechanacimiento,int curso,int grupo,int lider){
  dni_=dni;
  nombre_=nombre;
  apellidos_=apellidos;
  telefono_=telefono;
  email_=email;
  direccion_=direccion;
  fechanacimiento_=fechanacimiento;
  curso_=curso;
  grupo_=grupo;
  lider_=lider;
}
std::ostream &operator<<(std::ostream &escritura, Alumno &a){
  escritura<<a.getDni()<<','<<a.getNombre()<<','<<a.getApellidos()<<','<<a.getTelefono()<<','
  <<a.getEmail()<<','<<a.getDireccion()<<','<<a.getFechaNacimiento()<<','<<a.getCurso()<<','
  <<a.getGrupo()<<','<<a.getLider()<<'\n';
  return escritura;
}
std::istream &operator>>(std::istream &lectura, Alumno &a){
  std::string aux;
  getline(lectura,aux,',');
  a.setDni(aux);
  getline(lectura,aux,',');
  a.setNombre(aux);
  getline(lectura,aux,',');
  a.setApellidos(aux);
  getline(lectura,aux,',');
  a.setTelefono(aux);
  getline(lectura,aux,',');
  a.setEmail(aux);
  getline(lectura,aux,',');
  a.setDireccion(aux);
  getline(lectura,aux,',');
  a.setFechaNacimiento(aux);
  getline(lectura,aux,',');
  a.setCurso(atoi(aux.c_str()));
  getline(lectura,aux,',');
  a.setGrupo(atoi(aux.c_str()));
  getline(lectura,aux,'\n');
  a.setLider(atoi(aux.c_str()));
  return lectura;
}
/*
void Alumno::escribeAlumno(std::ofstream &f){
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
  f.write((char*)&curso_,sizeof(curso_));
  f.write((char*)&grupo_,sizeof(grupo_));
  f.write((char*)&lider_,sizeof(lider_));
}

Alumno Alumno::leeAlumno(std::ifstream &f){
  Alumno aux("");
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
  aux.setCurso(atoi(data));
  f.read(data,sizeof(int));
  aux.setGrupo(atoi(data));
  //leer lider
  f.read(data,sizeof(int));
  aux.setLider(atoi(data));
  return aux;
}*/
