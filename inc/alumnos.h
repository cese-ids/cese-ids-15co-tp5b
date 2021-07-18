/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura de datos con la informacion de un alumno
typedef struct alumno_s {
    char apellidos[30];     //!< Apellido del alumno
    char nombres[30];       //!< Nombre del alumno
    char documento[11];     //!< Numero del documento
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief   Serializar los datos de un alumno en formato JSON
 * 
 * Esta funcion recibe un puntero a una estructura con los datos de un 
 * alumno y devuelve los datos de esa estructura en una cadena JSON
 * 
 * @param[out] cadena   Cadena de caracteres para serializar los datos
 * @param[in] espacio   Tamano de la cadena de caracteres de resultado
 * @param[in] alumno    Estructura con los datos del alumno a serializar
 * @return  true La serializacion de los datos se realizo correctamente
 * @return  false No se pudo serializar los datos del alumno
 */
bool SerializarAlumno(
    char * cadena,  //!< Cadena de caracteres para serializar los datos
    size_t espacio, //!< Cadena de caracteres para serializar los datos
    const alumno_t alumno   //!< Cadena de caracteres para serializar los datos
    );

bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
