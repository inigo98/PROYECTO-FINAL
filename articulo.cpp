#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "biblioteca.h"
#include "libro.h"
#include "revista.h"
#include "articulo.h"
using namespace std;
void articulo::capturar(int a){
	biblioteca::capturar(0);
	int cod;
	char nom[50], des[50];
	cout<<"escriba el nombre del articulo"<<endl;
	fflush(stdin);
	fgets(nom,50,stdin);
	cout<<endl;
	cout<<"escriba el codigo del articulo"<<endl;
	cin>>cod;
	cout<<endl;
	cout<<"escriba la descripcion del articulo"<<endl;
	fflush(stdin);
	fgets(des,50,stdin);
	cout<<endl;
	setCodigo(cod);
	setNombre(nom);
	setDescripcion(des);
}
int articulo::imprimir(int a){
	if(a==1){
		char nomb[50];
		cout<<"el nombre del articulo es "<<getNombre();
		cout<<"escriba el nombre de lo que desea buscar"<<endl;
		fflush(stdin);
		fgets(nomb,50,stdin);
		if(strcmp(nomb,getNombre())==0){
			cout<<"articulos"<<endl;
			cout<<"el nombre del articulo es "<<getNombre();
			cout<<"el codigo del articulo es "<<getCodigo()<<endl;
			cout<<"la descripcion del articulo es "<<getDescripcion();
			biblioteca::imprimir(0);
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			system("pause");
			return 1;
		}
	}
	else{
		cout<<"articulos"<<endl;
		cout<<"el nombre del articulo es "<<getNombre();
		cout<<"el codigo del articulo es "<<getCodigo()<<endl;
		cout<<"la descripcion del articulo es "<<getDescripcion();
		biblioteca::imprimir(0);
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
		return 0;	
	}
}
void articulo::setCodigo(int a){
	codigo=a;
}
void articulo::setNombre(char* a){
	strcpy(nombre,a);
}
void articulo::setDescripcion(char* a){
	strcpy(descripcion,a);
}
int articulo::getCodigo(){
	return codigo;
}
char* articulo::getDescripcion(){
	return descripcion;
}
char* articulo::getNombre(){
	return nombre;
}
articulo::articulo(){
}
articulo::~articulo(){
}
