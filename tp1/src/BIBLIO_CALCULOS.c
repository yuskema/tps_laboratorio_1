/*
 * BIBLIO_CALCULOS.c
 *
 *  Created on: 25 sept 2022
 *      Author: ema_9
 */
#include <stdio.h>
#include <stdlib.h>




/*
 * pido un dato y calculo el promedio
 * cantidad de confederacion y cantidad de jugadores ingresados
 */
float calcularPromedio(float nu1)
{
	float resultado;
	if(nu1 !=0)
	{
	resultado = nu1*100/22;
	}
	else
	{
		resultado = 0;
	}
	return resultado;

}





/*
 * sumo la cantidad de que me ingreso por mantenimiento el usuario
 */
int calcularMantenimiento(int nu1,int nu2,int nu3)
{
	int respuesta;
	respuesta= nu1+nu2+nu3;
	return respuesta;


}



/*
 * calculo el aumento que se le da al mantenimiento;
 */
int calcularAumento(int nu1,int nu2,int nu3,int nu4,int nu5, int nu6,int nu7,float* resp)
{
	int respuesta;
	if( nu2 > nu3 && nu2 > nu4 && nu2 > nu5 && nu2 > nu6 && nu2 > nu7)
	{
		*resp=nu1 * 35 /100;
		respuesta=1;
	}
	else
	{
		respuesta=2;


	}
	return respuesta;

}



/*
 * calculo el total del mantenimiento
 * sumo el mantenimineto mas el aumento que saque en la funcion de arriba
 */
int calcularMantenimientoFinal(int nu1, int nu2 )
{
	int respuesta;
	respuesta = nu1+nu2;
	return respuesta;
}
/*
 * muestro todos los resultados en pantalla
 */

void mostrarResultados(float nu1, float nu2, float nu3, float nu4, float nu5,float nu6)
{
	printf("\n********informar todos los resultados********\n"
			"Porcentaje Afc:            %.2f\n"
			"Porcentaje Cfa:            %.2f\n"
			"Porcentaje Concacaf:       %.2f\n"
			"Porcentaje Conmebol:       %.2f\n"
			"Porcentaje UEfa:           %.2f\n"
			"Porcentaje OFC:            %.2f\n",nu1,nu2,nu3,nu4,nu6,nu5);
}

void mostrarTotalMantenimiento(int nu1,int nu2,int nu3,int nu4)
{
	if(nu1 ==1)
	{
		printf(" \nEl costo de mantenimiento es:  %d",nu2);

	}else
	{
		printf("\nEl costo de mantenimiento era de $ %d  y recibio un aumento de $ %d, su nuevo valor es: $  %d",nu2,nu3,nu4);
	}
}






