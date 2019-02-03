#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
#include <fstream>

class Alumno {
private:
  std::string dni_;
  std::string nombre_;
  std::string apellidos_;
  std::string telefono_;
  std::string email_;
  std::string direccion_;
  std::string fechanacimiento_;
  int curso_;
  int grupo_;
  int lider_;

public:
  Alumno(std::string dni,std::string nombre="",std::string apellidos="",std::string telefono="",std::string email="",std::string direccion="",std::string fechanacimiento="",int curso=0,int grupo=0,int lider=0);
  inline std::string getDni(){return dni_;};
  inline void setDni(std::string dni){dni_=dni;};
  //
  inline std::string getNombre(){return nombre_;};
  inline void setNombre(std::string nombre){nombre_=nombre;};
  //
  inline std::string getApellidos(){return apellidos_;};
  inline void setApellidos(std::string apellidos){apellidos_=apellidos;};
  //
  inline std::string getTelefono(){return telefono_;};
  inline void setTelefono(std::string telefono){telefono_=telefono;};
  //
  inline std::string getEmail(){return email_;};
  inline void setEmail(std::string email){email_=email;};
  //
  inline std::string getDireccion(){return direccion_;};
  inline void setDireccion(std::string direccion){direccion_=direccion;};
  //
  inline std::string getFechaNacimiento(){return fechanacimiento_;};
  inline void setFechaNacimiento(std::string fechanacimiento){fechanacimiento_=fechanacimiento;};
  //
  inline int getCurso(){return curso_;};
  inline void setCurso(int curso){curso_=curso;};
  //
  inline int getGrupo(){return grupo_;};
  inline void setGrupo(int grupo){grupo_=grupo;};
  //
  inline int getLider(){return lider_;};
  inline void setLider(int lider){lider_=lider;};

  friend std::ostream &operator<<(std::ostream &escritura, Alumno &a);
  friend std::istream &operator>>(std::istream &lectura, Alumno &a);

  //void escribeAlumno(std::ofstream &f);
  //Alumno leeAlumno(std::ifstream &f);
};
#endif
