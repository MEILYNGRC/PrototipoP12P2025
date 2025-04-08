#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

class Alumno {
private:
    std::string nombre;
    float primerParcial;
    float segundoParcial;
    float examenFinal;
    float actividades;

public:
    Alumno();
    Alumno(std::string nombre);

    float calcularPromedio() const;

    void setNotas(float p1, float p2, float final, float act);
    std::string getNombre() const;
    float getNotaFinal() const;
};

#endif
