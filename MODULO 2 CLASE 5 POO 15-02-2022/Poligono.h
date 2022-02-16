#include <cmath>
class Poligono{
private:
    int n_lados;
    double m_lado;
    double perimetro;
    double apotema;
    double m_angulo;
public:
    void set_n_lados(int);
    void set_m_lado(double);
    void calcular_perimetro();
    void calcular_apotema();
    void calcular_area();
    double get_area();
};