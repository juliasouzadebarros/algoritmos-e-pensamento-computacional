/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14159

int main()
{
    
    float raio, circunferencia;
    printf("Qual é a medida do raio?: \n");
    scanf("%f", &raio);
    
    circunferencia = 2*PI*raio;
    
    printf("O perimetro da circunferência é %.2f\n.", circunferencia);
    
    return 0;
}
