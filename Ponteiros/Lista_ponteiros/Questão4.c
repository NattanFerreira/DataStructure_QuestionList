#include <stdio.h>
#include <math.h>
void calcula_hexagono(float l, float *area, float *perimetro){
    *perimetro = 6*l;
    *area = (3*pow(l,2)*sqrt(3))/2;
}

int main(void){
    float lado, area, perimetro;

    printf("Digite o lado:\n");
    scanf("%f", &lado);

    calcula_hexagono(lado, &area, &perimetro);

    printf("A área é igual a: %f\n O perimetro é igual a: %f", area, perimetro);
    return 0;
}