#include "Facultad.h"
#include <iostream>
#include <cstdlib>
// coloque es constructor
Facultad::Facultad(std::string nombre) : nombre(nombre) {}

void Facultad::generarAlumnosAleatorios() {
    alumnos.clear();
    for (int i = 0; i < 5; i++) {
        Alumno alumno("Alumno " + std::to_string(i + 1));
        float p1 = rand() % 21;
        float p2 = rand() % 26;
        float final = rand() % 36;
        float act = rand() % 21;
        alumno.setNotas(p1, p2, final, act);
        alumnos.push_back(alumno);
    }
}

void Facultad::mostrarDatos() const {
    std::cout << "\nFacultad: " << nombre << std::endl;
    for (const auto& alumno : alumnos) {
        std::cout << "Nombre: " << alumno.getNombre()
                  << ", Nota Final: " << alumno.getNotaFinal() << std::endl;
    }

    std::cout << "Promedio Facultad: " << calcularPromedioFacultad() << std::endl;
    std::cout << "Nota más alta: " << obtenerNotaMasAlta()
              << " (" << obtenerAlumnoNotaAlta() << ")" << std::endl;
    std::cout << "Nota más baja: " << obtenerNotaMasBaja()
              << " (" << obtenerAlumnoNotaBaja() << ")" << std::endl;
}

float Facultad::calcularPromedioFacultad() const {
    float total = 0;
    for (const auto& alumno : alumnos) {
        total += alumno.getNotaFinal();
    }
    return total / alumnos.size();
}

float Facultad::obtenerNotaMasAlta() const {
    float max = 0;
    for (const auto& alumno : alumnos) {
        if (alumno.getNotaFinal() > max) {
            max = alumno.getNotaFinal();
        }
    }
    return max;
}

float Facultad::obtenerNotaMasBaja() const {
    float min = 1000;
    for (const auto& alumno : alumnos) {
        if (alumno.getNotaFinal() < min) {
            min = alumno.getNotaFinal();
        }
    }
    return min;
}

std::string Facultad::obtenerAlumnoNotaAlta() const {
    float max = 0;
    std::string nombreAlumno;
    for (const auto& alumno : alumnos) {
        if (alumno.getNotaFinal() > max) {
            max = alumno.getNotaFinal();
            nombreAlumno = alumno.getNombre();
        }
    }
    return nombreAlumno;
}

std::string Facultad::obtenerAlumnoNotaBaja() const {
    float min = 1000;
    std::string nombreAlumno;
    for (const auto& alumno : alumnos) {
        if (alumno.getNotaFinal() < min) {
            min = alumno.getNotaFinal();
            nombreAlumno = alumno.getNombre();
        }
    }
    return nombreAlumno;
}

std::string Facultad::getNombre() const {
    return nombre;
}

