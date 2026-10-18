#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, t, b;
    printf("Введіть x: ");
    scanf("%lf", &x);
    printf("Введіть t: ");
    scanf("%lf", &t);
    double rad35 = 35.0 * M_PI / 180.0;
    b = x * sin(x * t * t) * cos(2.0 * t) - 1.0 + cos(rad35);
    printf("\nРезультат:\n");
    printf("b = %.6f\n\n", b);
    return 0;
}
