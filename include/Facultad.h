#ifndef FACULTAD_H
#define FACULTAD_H

#include "Alumno.h"
#include <vector>
#include <string>

class Facultad {
private:
    std::string nombre;
    std::vector<Alumno> alumnos;

public:
    Facultad(std::string nombre);

    void generarAlumnosAleatorios();
    void mostrarDatos() const;

    float calcularPromedioFacultad() const;
    float obtenerNotaMasAlta() const;
    float obtenerNotaMasBaja() const;
    std::string obtenerAlumnoNotaAlta() const;
    std::string obtenerAlumnoNotaBaja() const;

    std::string getNombre() const;
};

#endif
