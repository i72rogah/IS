#include "alumno.h"
#include "agenda.h"

bool compare_dni_asc(Alumno a, Alumno b){
  for(int i=0;i<a.getDNI().length()&&b.getDNI().length();i++){
    if(tolower(a.getDNI()[i])<tolower(b.getDNI()[i])) return true;
    else if(tolower(a.getDNI()[i])>tolower(b.getDNI()[i])) return false;
  }
}
bool compare_dni_desc(Alumno a, Alumno b){
  for(int i=0;i<a.getDNI().length()&&b.getDNI().length();i++){
    if(tolower(a.getDNI()[i])<tolower(b.getDNI()[i])) return false;
    else if(tolower(a.getDNI()[i])>tolower(b.getDNI()[i])) return true;
  }
}
bool compare_nombre_asc(Alumno a, Alumno b){
  for(int i=0;i<a.getNombre().length()&&b.getNombre().length();i++){
    if(tolower(a.getNombre()[i])<tolower(b.getNombre()[i])) return true;
    else if(tolower(a.getNombre()[i])>tolower(b.getNombre()[i])) return false;
  }
}
bool compare_nombre_desc(Alumno a, Alumno b){
  for(int i=0;i<a.getNombre().length()&&b.getNombre().length();i++){
    if(tolower(a.getNombre()[i])<tolower(b.getNombre()[i])) return false;
    else if(tolower(a.getNombre()[i])>tolower(b.getNombre()[i])) return true;
  }
}
bool compare_apell_asc(Alumno a, Alumno b){
  for(int i=0;i<a.getApellidos().length()&&b.getApellidos().length();i++){
    if(tolower(a.getApellidos()[i])<tolower(b.getApellidos()[i])) return true;
    else if(tolower(a.getApellidos()[i])>tolower(b.getApellidos()[i])) return false;
  }
}
bool compare_apell_desc(Alumno a, Alumno b){
  for(int i=0;i<a.getApellidos().length()&&b.getApellidos().length();i++){
    if(tolower(a.getApellidos()[i])<tolower(b.getApellidos()[i])) return false;
    else if(tolower(a.getApellidos()[i])>tolower(b.getApellidos()[i])) return true;
  }
}
bool compare_curso_asc(Alumno a, Alumno b){
  return (a.getCurso()>b.getCurso());
}

bool compare_curso_desc(Alumno a, Alumno b){
  return (a.getCurso()<b.getCurso());
}
