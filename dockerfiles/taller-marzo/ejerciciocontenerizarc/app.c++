#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,Res,opc,div,Div;
	printf("\tCalculadora PAQUE\n\n");
	printf("1. suma.\t2. Resta.\n3. Divicion.\t4. Multiplicacion.");
	printf("\nSeleccione una opcion: ");
	scanf("%d",&opc);
	system("cls");
	if(opc==1)
	{
		printf("\tCalculadora PAQUE\n\n");
		printf("Introduzca el numero:");
		scanf("%d",&a);
		printf("Introduzca el numero:");
		scanf("%d",&b);
		printf("Introduzca el numero:");
		scanf("%d",&c);
		printf("Introduzca el nuero:");
		scanf("%d",&d);
		printf("Introduzca el numero:");
		scanf("%d",&e);
		printf("Introduzca el numero:");
		scanf("%d",&f);
		printf("Introduzca el numero:");
		scanf("%d",&g);
		printf("Introduzca el numero:");
		scanf("%d",&h);
		printf("Introduzca el numero:");
		scanf("%d",&i);
		printf("Introduzca el numero:");
		scanf("%d",&j);
		Res=a+b+c+d+e+f+g+h+i+j;
		printf("El resultado es: %d",Res);
    }
    else if (opc==2)
	{
		printf("\tCalculadora PAQUE\n\n");
		printf("Introduzca el numero:");
		scanf("%d",&a);
		printf("Introduzca el numero:");
		scanf("%d",&b);
		printf("Introduzca el numero:");
		scanf("%d",&c);
		printf("Introduzca el nuero:");
		scanf("%d",&d);
		printf("Introduzca el numero:");
		scanf("%d",&e);
		printf("Introduzca el numero:");
		scanf("%d",&f);
		printf("Introduzca el numero:");
		scanf("%d",&g);
		printf("Introduzca el numero:");
		scanf("%d",&h);
		printf("Introduzca el numero:");
		scanf("%d",&i);
		printf("Introduzca el numero:");
		scanf("%d",&j);
		Res=a-b-c-d-e-f-g-h-i-j;
		printf("El resultado es: %d",Res);
    }
	else if(opc==3)
	{
		printf("\tCalculadora PAQUE\n\n");
		printf("Introduzca el divisor:");
		scanf("%d",&div);
		printf("Introduzca el dividendo:");
		scanf("%d",&Div);
		Res=div/Div;
		printf("El resultado es: %d",Res);
		
    }
    else if(opc==4)
    {
    	printf("\tCalculadora PAQUE\n\n");
		printf("Introduzca el numero:");
		scanf("%d",&a);
		printf("Introduzca el numero:");
		scanf("%d",&b);
		printf("Introduzca el numero:");
		scanf("%d",&c);
		printf("Introduzca el nuero:");
		scanf("%d",&d);
		printf("Introduzca el numero:");
		scanf("%d",&e);
		printf("Introduzca el numero:");
		scanf("%d",&f);
		printf("Introduzca el numero:");
		scanf("%d",&g);
		printf("Introduzca el numero:");
		scanf("%d",&h);
		printf("Introduzca el numero:");
		scanf("%d",&i);
		printf("Introduzca el numero:");
		scanf("%d",&j);
		Res=a*b*c*d*e*f*g*h*i*j;
		printf("El resultado es: %d",Res);	
		}