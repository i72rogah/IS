#include "credencial.h"
#include <iostream>
#include <string>

bool login(std::string usuario,std::string contraseña){
  std::ifstream fichero("credenciales.bin",std::ifstream::binary);
  Credencial c;
  if(!fichero.is_open()){
    std::cout << "Fichero de credenciales no encontrado" << '\n';
    exit(-1);
  }
  else{
    while(fichero.read((char*)&c,sizeof(Credencial))&&!fichero.eof()){
      if(c.usuario==usuario && c.contraseña==contraseña){
        fichero.close();
        return true;
      }
    }
    fichero.close();
    return false;
  }
}
