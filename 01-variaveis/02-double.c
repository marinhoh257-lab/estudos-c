#include <stdio.h>

int main() {
    double pi = 3.141592653589793;
    double raio = 5.5;
    double area = pi * (raio * raio);

    printf("Área do círculo: %.15lf\n", area);

    return 0;
}
