#include<stdio.h>
#define pi 3.14159
int main()
{
    float a,b,c;
    float area;
    scanf("%f%f%f",&a,&b,&c);
    area=(a*c)/2;
    printf("TRIANGULO: %.3f\n",area);
    area=pi*c*c;
    printf("CIRCULO: %.3f\n",area);
    area=(a+b)*c/2;
    printf("TRAPEZIO: %.3f\n",area);
    area=b*b;
    printf("QUADRADO: %.3f\n",area);
    area=a*b;
    printf("RETANGULO: %.3f\n",area);
    return 0;
}


