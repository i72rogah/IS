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
int buscarAlumno();
void mostrarAlumnos();
void mostarEquipo(int equipo);
void mostrarAlumno();
void ordenarAlf(std::string s);
void ordenarAlf(int curso);
inline list <Alumno> getAlumnos(){return alumnos_;};
inline void setAlumnos(list <Alumno> aux){alumnos_=aux;};
};




#endif
