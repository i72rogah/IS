#ifndef  CREDENCIAL_H
#define CREDENCIAL_H

#include <string>

class Credencial {
private:
  std::string usuario_;
  std::string contrasena_;

public:
  inline void setUsuario(std::string s){usuario_=s;};
  inline std::string getUsuario(){return usuario_;};
  inline void setContrasena(std::string s){contrasena_=s;};
  inline std::string getContrasena(){return contrasena_;};
};

#endif
