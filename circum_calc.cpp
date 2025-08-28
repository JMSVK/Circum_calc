#include <iostream>
#include <string>
int main() {
        const double pi  = 3.1416;
        std::string respuesta;
        std::cout<<"Incerta el radio"<<'\n';
        std::cin >> respuesta;
        double reans = std::stod(respuesta);
        double cir;
        cir = pi * reans * 2;
        respuesta = std::to_string(cir);
        std::cout<<"La circunferencia es "<<respuesta<<'\n';
        return 0;
}
