#include "credencial.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int login(std::string usuario,std::string contrasena){
  std::ifstream fichero("credenciales.bin",std::ifstream::binary);
  Credencial c;
  if(!fichero.is_open()){
    std::cout << "Fichero de credenciales no encontrado" << '\n';
    exit(-1);
  }
  else{
    while(fichero.read((char *)&c,sizeof(Credencial)) && !fichero.eof()){
      if(c.getUsuario()==usuario&&c.getContrasena()==contrasena){
        fichero.close();
        return 1;
      }
    }
    fichero.close();
    return 0;
  }
}
