#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

float x, y;

printf ("Insira o valor de x: ");
scanf ("%f", &x);
printf ("Insira o valor de y: ");
scanf ("%f", &y);

if (x>0 and y>0) {
    printf("Esse ponto eh do primeiro quadrante");
}
if (x<0 and y>0) {
    printf("Esse pontos eh do segundo quadrante");
}
if (x<0 and y<0) {
    printf("Esse ponto eh do terceiro quadrante");
}
if (x>0 and y<0) {
    printf("Esse ponto eh do quarto quadrante");
}
if (x==0 and y!=0) {
    printf("Esse ponto esta em cima do eixo x");
}
if (x!=0 and y==0) {
    printf("Esse ponto esta em cima do eixo y");
}
if (x==0 and y==0) {
    printf("Esse ponto eh a origem");
}


}
