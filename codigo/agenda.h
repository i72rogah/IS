#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <list>

class Agenda {
private:
list<Alumno>alumnos_;


public:
void introducirAlumno();
void modificarAlumno(std::string s);
void borrarAlumno(std::string s);
int buscarAlumno(std::string s);
void mostrarAlumnos(std::string s);
void mostarEquipo(int equipo);
void mostrarAlumno();
void ordenarAlf();
inline list <Alumno> getAlumnos(){return alumnos_;};
inline void setAlumnos(list <Alumno> aux){alumnos_=aux;};
};




#endif
