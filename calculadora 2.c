#include<stdio.h>

main()
{

    float num1;
    float num2;
    float resultado;
     int opcion;

    do
    {
        system("cls");

        printf("***Ximena Torres Padilla***");
        printf("\t\tMENU DE OPCIONES\n");
        printf("1.-suma\n");
        printf("2.-Resta\n");
        printf("3.-Multiplicacion\n");
        printf("4.-Division\n");
        printf("5.-Salir del programa\n");
        printf("selecciona una opcion: \n");


        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingresa el Primer numero:\n");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:\n");
            scanf("%f",&num2);
            resultado=num1+num2;
            printf("El resultado de la suma es: %f",resultado);

            break;

        case 2:
            printf("Ingresa el Primer numero:\n");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:\n");
            scanf("%f",&num2);
            resultado=num1-num2;
            printf("El resultado de la resta es: %f",resultado);

            break;

        case 3:
            printf("Ingresa el Primer numero:\n");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:\n");
            scanf("%f",&num2);
            resultado=num1*num2;
            printf("El resultado de la multiplicacion es: %f",resultado);
            break;

        case 4:
            printf("Ingresa el Primer numero:\n");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:\n");
            scanf("%f",&num2);
            resultado=num1/num2;
            printf("El resultado de la division es:%f",resultado);
            break;

        case 5:
            printf("Gracias por utilizar mi programa\n");
            break;

        default:
            printf("\nopcion no valida");
            break;
        }

        system("pause");

    }while(opcion !=5);


}
