#include "Facultad.h" //MEILYN JUELISY GARCIA LIMA 9959-23-17838 segundo examanen
#include <iostream>
#include <ctime>//meilyn

int main() {
    srand(time(0));

    float mejorPromedioGeneral = 0;
    std::string mejorFacultadGeneral;
    char opcion;
// use este ciclo
    do {
        Facultad facultades[3] = {
            Facultad("Ingeniería"),
            Facultad("Ciencias Económicas"),
            Facultad("Humanidades")
        };
// aqui inicia mi matriz como lo describi en el cuadernillo por medio del for
        for (int i = 0; i < 3; i++) {
            facultades[i].generarAlumnosAleatorios();
        }

        float mejorPromedio = 0;
        std::string mejorFacultad;

        for (int i = 0; i < 3; i++) {
            facultades[i].mostrarDatos();
            float promedio = facultades[i].calcularPromedioFacultad();
            if (promedio > mejorPromedio) {
                mejorPromedio = promedio;
                mejorFacultad = facultades[i].getNombre();
            }
        }

        std::cout << "\n=> Mejor facultad en esta iteración: " << mejorFacultad
                  << " con promedio de " << mejorPromedio << "\n";

        if (mejorPromedio > mejorPromedioGeneral) {
            mejorPromedioGeneral = mejorPromedio;
            mejorFacultadGeneral = mejorFacultad;
        }

        std::cout << "\n¿Desea realizar otra iteración? (s/n): ";
        std::cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    std::cout << "\n=== Mejor facultad de todas las iteraciones ===" << std::endl;
    std::cout << "Facultad: " << mejorFacultadGeneral
              << ", Promedio: " << mejorPromedioGeneral << std::endl;

    return 0;
}
