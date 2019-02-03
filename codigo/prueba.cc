#include <list>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include "alumno.h"
#include "agenda.h"
#include "credencial.h"

bool compare_int_desc(Alumno a, Alumno b){//para ser ascendente cambiar < por >
  return (a.getCurso()<b.getCurso());
}

bool compare_str_desc(Alumno a, Alumno b){//para cambiar orden intercambiar false y true
  for(int i=0;i<a.getDni().length()&&b.getDni().length();i++){
    if(tolower(a.getDni()[i])<tolower(b.getDni()[i])) return false;
    else if(tolower(a.getDni()[i])>tolower(b.getDni()[i])) return true;
  }
}
int main(int argc, char const *argv[]) {
  std::list<Alumno> lista;
  std::list<Alumno>::iterator it;
  Alumno a(" ");
  Credencial c("","");
  std::string aux;
  int entero;
  Agenda ag;
  Agenda* ptr=&ag;
  //std::ofstream fichero("copias/fichero.bin",std::ofstream::binary);
  FILE* fichero;
  fichero=fopen("copias/fichero.bin","wb");
  if(fichero==NULL){
    std::cout << "fichero no encontrado" << '\n';
    return 0;
  }
  else{
    lista.clear();
    for(int i=0;i<3;i++){
      std::cout << "nuevo " <<i<< '\n';
      char n='\n';
      //std::cin >> aux; //usar getline en todos los parametros para que funcione
      getline(std::cin,aux);
      a.setDni(aux);
      //std::cin >> aux;
      getline(std::cin,aux);
      a.setNombre(aux);
      getline(std::cin,aux);
      a.setApellidos(aux);//necesita recibir varias palabras
      //std::cin >> aux;
      getline(std::cin,aux);
      a.setTelefono(aux);
      //std::cin >> aux;
      getline(std::cin,aux);
      a.setEmail(aux);
      std::getline(std::cin,aux);
      a.setDireccion(aux);//necesita recibir diferentes palabras
      //std::cin >> aux;
      getline(std::cin,aux);
      a.setFechaNacimiento(aux);
      //std::cin >> aux;
      getline(std::cin,aux);
      entero=atoi(aux.c_str());
      a.setCurso(entero);
      //std::cin >> aux;
      getline(std::cin,aux);
      entero=atoi(aux.c_str());
      a.setGrupo(entero);
      a.setLider(1);
      fwrite(&a,sizeof(Alumno),1,fichero);
    }
    fclose(fichero);
  }
  std::ifstream fichero2("copias/fichero.bin",std::ifstream::binary);
  if(!fichero2.is_open()){
    std::cout << "fichero no encontrado" << '\n';
    return 0;
  }
  while(fichero2.read((char*)&a,sizeof(Alumno)) && !fichero2.eof()){

    //fichero2.read((char*)&a,sizeof(Alumno));
    lista.push_back(a);
  }
  fichero2.close();
  std::cout << "----------------antes-----------" << '\n';
  for(it=lista.begin();it!=lista.end();it++){
    std::cout << "dni: " <<it->getDni()<< '\n';
    std::cout << "nombre:" <<it->getNombre()<< '\n';
    std::cout << "apellidos: " <<it->getApellidos()<< '\n';
    std::cout << "telefono: " <<it->getTelefono()<< '\n';
    std::cout << "email: " <<it->getEmail()<< '\n';
    std::cout << "direccion: " <<it->getDireccion()<< '\n';
    std::cout << "fecha de nacimiento: " <<it->getFechaNacimiento()<< '\n';
    std::cout << "curso: " <<it->getCurso()<< '\n';
    std::cout << "grupo: " <<it->getGrupo()<< '\n';
    if(it->getLider()==1){
      std::cout << "es lider" << '\n';
    }
    else{
      std::cout << "no es lider" << '\n';
    }
  }
  std::cout << "--------------despues--------------" << '\n';
  lista.sort(compare_str_desc);
  for(it=lista.begin();it!=lista.end();it++){
    a=*it;
    std::cout << "########################################" << '\n';
    std::cout << "  - DNI: " <<it->getDni()<< '\n';
    std::cout << "  - Nombre:" <<it->getNombre()<< '\n';
    std::cout << "  - Apellidos: " <<it->getApellidos()<< '\n';
    std::cout << "  - Telefono: " <<it->getTelefono()<< '\n';
    std::cout << "  - Email: " <<it->getEmail()<< '\n';
    std::cout << "  - Direccion: " <<it->getDireccion()<< '\n';
    std::cout << "  - Fecha de nacimiento: " <<it->getFechaNacimiento()<< '\n';
    std::cout << "  - Curso: " <<it->getCurso()<< '\n';
    std::cout << "  - Grupo: " <<it->getGrupo()<< '\n';
    if(it->getLider()==1){
      std::cout << "  - Es lider del grupo" << '\n';
    }
    else{
      std::cout << "  - No es lider del grupo" << '\n';
    }
    std::cout << "########################################" << '\n';
  }
  return 0;
}
