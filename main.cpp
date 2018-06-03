#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "biblioteca.h"
#include "libro.h"
#include "revista.h"
#include "articulo.h"
/*
IÑIGO NAVARRETE MERCADO
17310214
ANDREA LIZBETH PALMA ABUNDIS
17310232
2°P2
PROYECTO FINAL
ESTE PROYECTO SIMULARA UNA BASE DE DATOS DE UNA BIBLIOTECA
DONDE SE PODRAN REGISTRAR LIBROS, REVISTAS Y ARTICULOS
SE PODRAN BUSCAR Y VER EL LISTADO DE LOS PRODUCTOS
LOS TEMAS UTILIZADOS EN LA CREACION DE DICHO PROYECTO SON:
-CLASES
-HERENCIA
-POLIMORFISMO
-LISTAS ENLAZADAS
-ARCHIVOS

*/
using namespace std;
int main(){
	int opc, opc1, aux, cont=0;
	do{
		system("cls");
		cout<<"Proyecto final"<<endl;
		cout<<"elija una opcion"<<endl;
		cout<<"1. alta de objeto"<<endl;
		cout<<"2. ver listado de objetos"<<endl;
		cout<<"3. buscar objeto"<<endl;
		cout<<"4. salir"<<endl;
		biblioteca *biblioteca1[10];
		cin>>opc;
		switch(opc){
			case 1:
				if(cont<10){
					cout<<"alta de objeto"<<endl;
					cout<<"elija una opcion"<<endl;
					cout<<"1. libro"<<endl;
					cout<<"2. revista"<<endl;
					cout<<"3. articulo"<<endl;
					cin>>opc1;
					switch(opc1){
						case 1:
							cout<<"1. libro"<<endl;
							biblioteca1[cont]= new libro;
							biblioteca1[cont]->capturar(1);
							break;
						case 2:
							cout<<"2. revista"<<endl;
							biblioteca1[cont]= new revista;
							biblioteca1[cont]->capturar(1);
							break;
						case 3:
							cout<<"3. articulo"<<endl;
							biblioteca1[cont]= new articulo;
							biblioteca1[cont]->capturar(1);
							break;
						default:
							aux=1;
							break;
					}
					cont++;
					cout<<"LE QUEDAN "<<10-cont<<" REGISTROS"<<endl;
					system("pause");
				}
				else{
					cout<<"YA ACABO SUS REGISTROS"<<endl;
					system("pause");
				}
				aux=1;
				break;
			case 2:
				cout<<"2. ver listado de objetos"<<endl;
				for(int x=0; x<cont; x++){
					biblioteca1[x]->imprimir(0);
				}
				system("pause");
				aux=1;
				break;
			case 3:	
				cout<<"3. buscar objeto"<<endl;
				int q;
				for(int x=0; x<cont; x++){
					q=biblioteca1[x]->imprimir(1);
					if(q==1){
						x=cont;
					}
				}
				if(q!=1){
					cout<<"No se encontro el objeto"<<endl;
				}
				aux=1;
				break;
			case 4:
				aux=0;
				break;
			default:
				aux=1;
				break;
		}
	}while(aux==1);
	system("pause");
}
