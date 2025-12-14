
#include <stdlib.h>
int main()
{
    int cont;
    float salario,media,soma,maior;
    maior=0; soma=0;
    for (cont=1;cont<=15;cont++)
    {
        printf ("Digite o sal�rio do funcion�rio: \n");
        scanf("%f",&salario);
        soma=soma+salario;
        if (salario > maior)
        {
            maior=salario;
        }
    }
    media=soma/10;
    printf ("O maior sal�rio da empresa e = %.2f \n",maior);
    printf ("A m�dia salarial da empresa e = %.2f \n",media);
    return 0;
}
