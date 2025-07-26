#include <iostream>
#include <string>

int main()
{
    std::string nombre;
    int edad;
    std::cout << "Hola, Ingresa tu nombre: ";
    std::cin >> nombre;
    std::cout << "Ahora, ingresa tu edad: ";
    std::cin >> edad;
    std::cout << "Hola " << nombre << ". Un gusto saludarte" << std::endl;
    std::cout << "tienes " << edad << " anios";
    return 0;
}
