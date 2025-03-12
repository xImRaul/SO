#include <stdio.h>

void fibonacci(int, int);
int iniciarFibonacci(int);

int main()
{
    // Si el número es positivo muestra cada iteración del bucles, si es negativo muestra solo la última iteración del bucle
    int n;

    do{
        scanf("%d", &n);
        iniciarFibonacci(n);
    }while (n != -1);
    
    
}

void fibonacci(int n, int nConvertido)
{
    int a = 0, b = 1, c;

    if(n > 0){
        nConvertido++;
    }

    for (int i = 1; i < nConvertido; i++)
    {
        if (n > 0)
        {
            printf("%d ", a);
        }
        c = a + b;
        a = b;
        b = c;
    }
    if (n < 0)
    {
        printf("%d", a);
    }
}

int iniciarFibonacci(int n)
{
    int nConvertido;

    if (n > 0)
    {
        nConvertido = n;
    }
    else
    {
        nConvertido = -n;
    }

    fibonacci(n, nConvertido);
}