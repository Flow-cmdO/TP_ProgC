#include <stdio.h>
#define PI 3.141592653589793

int main() {
    double rayon, aire, perimetre;

    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    aire = PI * rayon * rayon;
    perimetre = 2 * PI * rayon;

    printf("Aire du cercle : %.2lf\n", aire);
    printf("Perimetre du cercle : %.2lf\n", perimetre);

    return 0;
}
