#include <stdio.h>

int main ()
{
    int num1, num2;
    
    int soma;
    int sub;
    int mult;
    int divi;
    
    printf ("\n Entre com num1:");
    scanf ("%d", &num1);
    
    printf ("\n Entre com num2:");
    scanf ("%d", &num2);
    
    soma = num1 + num2;
    printf ("\nA Soma eh %d\n",soma);
    
    sub = num1 - num2;
    printf ("\nA Subtracao eh %d\n",sub);
    
    mult = num1 * num2;
    printf ("\nA Multipicacao eh %d\n",mult);
    
    divi = num1 / num2;
    printf ("\nA Divisao eh %d\n",divi);
    
    return 0;
    
}