#include<stdio.h>
#define pi 3.14159
int main()
{

    int r;
    double volume;
    scanf("%d",&r);
    volume=(4.0/3)*pi*r*r*r;
    /**(4.0/3 or 4/3.0 bcz some languages (including C++) **/
    /**assume that the result dividing two integer is another integer**/
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}

