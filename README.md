
## Segunda Parte

1. Crear un repositorio personal realizando un *fork* del repositorio de la catedra, clonar el repositorio personal en su computadora y desplegar la rama *master*.

2. Editar la definicion de la constante ALUMNOS siguiendo el siguiente ejemplo

    ```c
    static const struct alumno_s ESTEBAN_VOLENTINI = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };

    const alumno_t ALUMNOS[] = {
        &ESTEBAN_VOLENTINI,
    };
    ```

3. Compilar el programa, ejecutarlo y revisar que el mismo funcione correctamente.

4. Confirmar los cambios, subirlos al servidor y pedir un *pull request* poniendo con el texto **"Se agregan los datos del alumno APELLIDO, Nombre"** en la descipción del mismo.

5. Revisar que el pull request esté en condiciones de ser mezclado y corregir los conflictos si fuera necesario.

## Tercera Parte

1. Crear una rama *develop* en su repositorio personal y desplegarla.

2. Documentar los archivos `alumnos.h` y `alumnos.c` siguiendo los criterios proporcionados en la clase practica.

3. Modificar el archivo `makefile` para agregar una regla que genere la documentacion con el comando `make doc`

4. Modificar la lista de archivos ignorados para omitir toda la documentacion generada por Doxygen

5. Confirmar los cambios y subirlos al servidor.
