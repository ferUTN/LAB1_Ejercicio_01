#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int cantNumeros= 0;
    int sumaNumeros= 0;
    int cantPares= 0;
    int sumaPos= 0;
    int cantNeg= 0;
    int cantPos= 0;
    int sumaNeg= 0;
    int maximo;
    int minimo;
    int minimoPos;
    int maximoNeg;
    int cantRango= 0;

    char continuar;

    do{
        printf("Ingrese un numero entero: ");
        scanf("%d",&numero);
        while (numero==0){
            printf("Error. Ingrese un numero entero: ");
            scanf("%d",&numero);
        }
        //printf("\nUsted ingreso el: %d", numero);
        cantNumeros++;
        sumaNumeros+= sumaNumeros;

        if(cantNumeros==1 || numero>maximo){
            maximo= numero;
        }
        if(cantNumeros==1 || numero<minimo){
            minimo= numero;
        }

        if (numero>0){
            cantPos++;
            sumaPos+= sumaPos;
            if(cantPos==1 || numero<minimoPos ){
                minimoPos= numero;
            }
        }else if(numero<0){
            cantNeg++;
            sumaNeg+= sumaNeg;
            if(cantNeg==1 || numero>maximoNeg){
                maximoNeg= numero;
            }
        }

        if(numero%2==0){
            cantPares++;
        }

        if(numero >= -10 || numero <=50){
            cantRango++;
        }

        //Limpio el buffer:
        scanf("%c",&continuar);

        printf("\nDesea ingresar otro numero? (s/n): ");
        scanf("%c",&continuar);
    }while(continuar=='s' || continuar=='S');

    printf("\n");
    printf("\nCant. nros. ingresados: %d", cantNumeros);
    printf("\nCant. pares: %d", cantPares);
    printf("\nSuma de los positivos: %d", sumaPos);
    if(cantNeg>0){
        printf("\nProm. de los negativos: %.2f", (float)sumaNeg/cantNeg);
    }
    printf("\nNumero mayor: %d", maximo);
    printf("\nNumero menor: %d", minimo);
    printf("\nMenor de los positivos: %d", minimoPos);
    printf("\nMayor de los negativos: %d", maximoNeg);
    printf("\nCantidad de -10 a 50: %d", cantRango);
    printf("\nPromedio total: %.2f", (float)sumaNumeros/cantNumeros);

    return 0;
}
