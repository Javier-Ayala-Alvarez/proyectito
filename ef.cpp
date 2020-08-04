#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

int main()
    {
        int val=0,n=0,aux=0,deprec=0,anual=0,eleccion;
    
       do{
            printf("ingresa la opccion <1>,<2>,<3>");
            scanf("%d",&eleccion);
                switch (eleccion)
                {
                case 1:
                    printf("valor del objeto");
                    scanf("%d",&val);
                    printf("año de deprezacion");
                    scanf("%d",&n);
                    printf("\nsu valor por deprezacion anuales es de %d\n",val/n);
                    break;
                    case 2:
                    printf("valor del objeto");
                    scanf("%d",&val);
                    printf("año de deprezacion");
                    scanf("%d",&n);
                    printf("\nsu valor por deprezacion anual es de %d\n",(2/n)*val);
                    break;
                    case 3:
                    printf("valor del objeto");
                    scanf("%d",&val);
                    printf("año de deprezacion");
                    scanf("%d",&n);
                    printf("\nsu valor por deprezacion anual es de %d\n",(n-val)/55);
                    break;
                    case 4:
                    printf("<<HASTA LUEGO>>");
                    break;
                default:
                printf("opccion incorrecta");
                
                break;
                }
        }while(eleccion>=1 and eleccion<4);
        system("pause=>null");
        return 0;
    }