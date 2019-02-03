#include "credencial.h"
#include <string>
#include <fstream>

std::ostream &operator<<(std::ostream &escritura, Credencial &c){
  escritura<<c.getUsuario()<<','<<c.getContrasena()<<'\n';
  return escritura;
}
std::istream &operator>>(std::istream &lectura, Credencial &c){
  std::string aux;
  getline(lectura,aux,',');
  c.setUsuario(aux);
  getline(lectura,aux,',');
  c.setContrasena(aux);
  return lectura;
}
/*
void Credencial::escribeCredencial(std::ofstream &f){
  size_t size;
  size=usuario_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)usuario_.c_str(),size);
  size=contrasena_.size();
  f.write((char*)&size,sizeof(size_t));
  f.write((char*)contrasena_.c_str(),size);
}

Credencial Credencial::leeCredencial(std::ifstream &f){
  Credencial aux("","");
  size_t size;
  char *data;
  f.read((char*)&size, sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setUsuario(data);
  delete data;
  f.read((char*)&size,sizeof(size));
  data=new char[size+1];
  f.read(data,size);
  data[size]='\0';
  aux.setContrasena(data);
  delete data;
  return aux;
}*/
