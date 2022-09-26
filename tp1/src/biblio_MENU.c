/*
 * biblio_MENU.c
 *
 *  Created on: 25 sept 2022
 *      Author: ema_9
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * mostre en pantalla 7 datos
 *
 */
int menu(int hosp,int com,int trans, int arq, int def,int medio,int del )
{
	int opcion;
	printf("\n----------Menu Principal----------\n"
			"1) Ingreso de los costos de mantenimiento\n"
			"  Costo de hospedaje =>  $%d\n"
			"  Costo de comida    =>  $%d\n"
			"  Costo de trasporte =>  $%d\n"
			"2) Carga de jugadores\n"
			"  Arqueros        =>   %d\n"
			"  Defensores      =>   %d\n"
			"  Mediocampistas  =>   %d\n"
			"  Delanteros      =>   %d\n"
			"3) Realizar todos los calculos\n"
			"4) Informar todos los resultado\n"
			"5) Salir\n",hosp,com,trans,arq,def,medio,del);
			printf("Ingrese una opcion:   ");
			scanf("%d",&opcion);
			if( opcion>5 || opcion<1)
			{
				printf("ERROR, ingrese una opcion valida");
				printf("\n----------Menu Principal----------\n"
					   "1) Ingreso de los costos de mantenimiento\n"
						"  Costo de hospedaje =>  $%d\n"
						"  Costo de comida    =>  $%d\n"
						"  Costo de trasporte =>  $%d\n"
						"2) Carga de jugadores\n"
						"  Arqueros        =>   %d\n"
						"  Defensores      =>   %d\n"
						"  Mediocampistas  =>   %d\n"
						"  Delanteros      =>   %d\n"
						"3) Realizar todos los calculos\n"
						"4) Informar todos los resultado\n"
						"5) Salir\n",hosp,com,trans,arq,def,medio,del);
				printf("Ingrese una opcion:   ");
				scanf("%d",&opcion);
			}
			return opcion;

}
/*
 * pedi ingresar los datos de mantenimiento
 * hospedaje
 * comida
 * y trasporte
 */
int ingresarHospedaje(int nu1,int* nu2)
{

	printf("\nIngresar monto de hospedaje:  $$");
	scanf("%d",&nu1);
	*nu2 +=nu1;

	return nu1;

}
int ingresarComida(int nu1,int* nu2)
{
	printf("\nIngresar monto de comida:  $$");
	scanf("%d",&nu1);
	*nu2 +=nu1;

	return nu1;
}
int ingresarTransporte(int nu1, int* nu2)
{
	printf("\nIngresar monto de transporte:  $$");
	scanf("%d",&nu1);
	*nu2 +=nu1;

	return nu1;
}
/*
 * segundo menu
 * da opciones de la confederacion
 *
 */
int ingresarSubmenu(int nu1)
{printf("\nIngrese la confederacin del jugador\n"
		"1) AFC\n"
		"2) CAF\n"
		"3) CONCACAF\n"
		"4) CONMEBOL\n"
		"5) UEFA\n"
		"6) OFC\n");
  scanf("%d",&nu1);

	return nu1;
}
void opcionesSubmenu(int nu1,int nu22 ,int nu33,int nu44, int nu55, int nu66, int nu77, int* nu2,int* nu3,int* nu4,int* nu5,int* nu6,int* nu7)
{
	do
	{
		switch (nu1)
		{
		case 1:
			*nu2+=nu22;
			break;
		case 2:
			*nu3+=nu33;
			break;
		case 3:
			*nu4+=nu44;
			break;
		case 4:
			*nu5+=nu55;
			break;
		case 5:
			*nu6+=nu66;
			break;
		case 6:
			*nu7+=nu77;
			break;
		default:
			printf("ERROR, ingrese una opcion valida");
			break;

		}
	}while(nu1>=6);

}
/*
 * pido un dato
 * lo guardo en numero de camisetas
 */
void pedirNumeroCamisetas()
{
	int numeroCamiseta;
	printf("\nIngrese el numero de camisetas 01 a 99");
	scanf("%d",&numeroCamiseta);
	while(numeroCamiseta <0 || numeroCamiseta >100)
	{
		printf("\nERROR, vuelva a ingresar el numero:    ");
		scanf("%d",&numeroCamiseta);
	}
}
/*
 * segundo sub menu
 * pido al usuario que me elija la pocion de los jugadores
 */
int ingresarSubmenuDos(int nu1)
{


	printf("\nIngrese posicion del jugador\n"
				"1) Arquero\n"
				"2) Defensor\n"
				"3) Mediocampistas\n"
				"4) Delantero\n");
	scanf("%d",&nu1);
	while(nu1>4 || nu1<1)
	{
		printf("ERROR, Ingrese una opcion valida (1 a 5)");
		scanf("%d",&nu1);
	}
	return nu1;

}

void opcionesSubmenuDos(int nu1,int nu22,int nu33, int nu44, int nu55,int* nu2,int* nu3,int* nu4,int* nu5)
{

	switch(nu1)
	{
	case 1:
		nu22=1;
		if(*nu2<2)
		{

			*nu2+=nu22;
		}
		else
		{
			printf("\nNo se pude poner mas de 2 arqueros;");
		}


		break;
	case 2:
		nu33=1;
		if(*nu3<8)
		{

			*nu3+=nu33;
		}
		else
		{
			printf("\nNo se pude poner mas de 8 defensores;");
		}

		break;
	case 3:
		nu44=1;
		if(*nu4<8)
		{
			*nu4+=nu44;
		}
		else
		{
			printf("\nNo se pude poner mas de 8 mediocampista;");
		}
		break;
	case 4:
		nu55=1;
		if(*nu5<4)
		{
			*nu5+=nu55;
		}
		else
		{
			printf("\nNo se pude poner mas de 4 delanteros;");
		}
		break;
	default:
		printf("ERROR, indique una opcion valida");

		break;
	}


}



