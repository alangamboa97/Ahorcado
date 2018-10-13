
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seleccion;
	printf("Bienvenido al ahorcado\n");
	printf("Selecciona el modo de juego\n");
	printf("\n1.- Jugador vs Jugador");
	printf("\n2.- Jugador vs CPU\n");
	scanf("%d",&seleccion);
	switch(seleccion){
		
		case 1: 
		printf("Modo Jugador 	vs Jugador:\n");
		modo_pvp();
		
		break;
		
		case 2:
			
			break;
			
		
	}

	
	
}
void modo_pvp(){
	int vidas;
	char palabra[20];
	char palabra_ingresada[20];
	int longitud;
	
	printf("Turno jugador 2: Ingresa la cantidad de vidas");
	scanf("%d",&vidas);
	printf("Turno Jugador 1: Ingresa una palabra\n");
	scanf("%s",&palabra);
	
	longitud = strlen(palabra);
//	printf("\nLa longitud de la palabra es: %d\n",longitud);
	for(int i =0; i<longitud; i++){
		printf(" * ");
	}
	
	do{
		printf("Jugador 2: Ingresa una letra:");
		for(int i=0; i<longitud;i++){
			scanf("%s",&palabra_ingresada[i]);
		}
		
	}
	while(vidas==0);{
		printf("Perdiste");
	}
	

	
}
/*
int seleccionar_vidas(){

printf("Ingresa la cantidad de vidas");
scanf("%d",&vidas);
return vidas;
	
}
*/
