#ifndef  CREDENCIAL_H
#define CREDENCIAL_H

#include <string>
#include <fstream>

class Credencial {
private:
  std::string usuario_;
  std::string contrasena_;

public:
  inline Credencial(std::string usuario,std::string contrasena){usuario_=usuario;contrasena_=contrasena;};
  inline void setUsuario(std::string s){usuario_=s;};
  inline std::string getUsuario(){return usuario_;};
  inline void setContrasena(std::string s){contrasena_=s;};
  inline std::string getContrasena(){return contrasena_;};
  friend std::ostream &operator<<(std::ostream &escritura, Credencial &c);
  friend std::istream &operator>>(std::istream &lectura, Credencial &c);
  //void escribeCredencial(std::ofstream &f);
  //Credencial leeCredencial(std::ifstream &f);
};

#endif
