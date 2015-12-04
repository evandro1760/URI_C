#include<stdio.h>
#include<math.h>
void main()
{
    double pi=3.14159, area, raio;
    scanf("%lf", &raio);
    area = pi * pow(raio,2);
    printf("A=%.4lf\n",area);
}
