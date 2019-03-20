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
        while (! (numero>-10 && numero <50) ){
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

        // falta el rango



        //Limpio el buffer:
        scanf("%c",&continuar);

        printf("\nDesea ingresar otro numero? (s/n): ");
        scanf("%c",&continuar);
    }while(continuar=='s' || continuar=='S');



    return 0;
}
