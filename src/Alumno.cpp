#include "Alumno.h"

Alumno::Alumno() : nombre(""), primerParcial(0), segundoParcial(0), examenFinal(0), actividades(0) {}

Alumno::Alumno(std::string nombre) : nombre(nombre), primerParcial(0), segundoParcial(0), examenFinal(0), actividades(0) {}

void Alumno::setNotas(float p1, float p2, float final, float act) {
    primerParcial = p1;
    segundoParcial = p2;
    examenFinal = final;
    actividades = act;
}

float Alumno::calcularPromedio() const {
    return primerParcial + segundoParcial + examenFinal + actividades;
}

std::string Alumno::getNombre() const {
    return nombre;
}

float Alumno::getNotaFinal() const {
    return calcularPromedio();
}
