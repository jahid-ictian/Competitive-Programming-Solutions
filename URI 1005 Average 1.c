#include<stdio.h>
int main()
{

    float a,b;
    float avg;
    scanf("%f%f",&a,&b);
    a=a*3.5;//a has 3.5 weight
    b=b*7.5;//b has 7.5 weight
    avg=(a+b)/(3.5+7.5);
    printf("MEDIA = %.5f\n",avg);
    return 0;
}
