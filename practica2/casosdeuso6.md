## Ordenar alfabéticamente los alumnos  
**ID**: 006  
**Breve descripción**: El usuario podrá ordenar los alumnos en el sistema  

  **Actores principales**: Usuario  
**Actores secundario**: Alumno  

  **Precondiciones**:  
  1. Deben existir al menos dos alumnos.  


  **Flujo principal**:  
  1. El caso de uso empieza cuando el usuario desea ordenar los alumnos.  
  2. El sistema ordena los alumnos a partir del nombre, apellido, DNI o curso mas alto.  
  3. El usuario especifica el tipo de ordenación (ascendente, descendente).  


  **Postcondiciones**:  
  * El sistema ordena los alumnos alfabéticamente.  


  **Flujo secundario**:  
  1. a: Si no existen al menos dos alumnos se muestra mensaje de error.
