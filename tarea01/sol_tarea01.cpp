#include <iostream>
#include <cmath>

int main(void)
{
  // Configuración de la notación científica y cantidad de cifras decimales 
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  int b = 1;
  for (int n = 0; n <= 10; ++n) {
    double c = std::pow(10,-n);

    // Como  a = 1.0  entonces es omitible en las multiplicaciones de las fórmulas
    // También, como  b = 1.0  entonces b^2 = b

    // Cálculo del primer método
    double x1 = (-b+std::sqrt(b-4*c))/2;
    double x2 = (-b-std::sqrt(b-4*c))/2;

    // Cálculo del segundo método
    double y1 = -2*c/(b+std::sqrt(b-4*c));
    double y2 = -2*c/(b-std::sqrt(b-4*c));

    // Impresión de resultados
    std::cout << c
              << "\t" << x1 
              << "\t" << x2
              << "\t\t" << y1
              << "\t" << y2
              << std::endl;
  }
  return 0;
}