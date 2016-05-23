#include <stdio.h>

float soma(float a, int b) // basta separar os parâmetros por vírgulas
{
    float result; //a declaração de variáveis é igual ao que se faz na função main
    result = a+b;
    return result;
}
    int main()
    {
        int a;
        float b, resp;
        a = 10;
        b = 12.3;
        resp = soma(b,a); //Chamada da função soma(12.3,10);
        
        printf("A soma de %d com %6.3f é %6.3f\n", a,b,resp);
        
        return 0;
    }