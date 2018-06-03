#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "biblioteca.h"
#include "libro.h"
#include "revista.h"
#include "articulo.h"
using namespace std;
void biblioteca::capturar(int a){
	char nom[50], des[50];
	cout<<"escriba el nombre de la biblioteca"<<endl;
	fflush(stdin);
	fgets(nom,50,stdin);
	cout<<endl;
	cout<<"escriba una descripcion de la biblioteca"<<endl;
	fflush(stdin);
	fgets(des,50,stdin);
	cout<<endl;
	setNombre(nom);
	setDescripcion(des);
}
int biblioteca::imprimir(int a){
		cout<<"el nombre de la biblioteca es "<<getNombre();
		cout<<"la descripcion de la biblioteca es "<<getDescripcion();
		return 0;
}
void biblioteca::setNombre(char* a){
	strcpy(nombre,a);
}
void biblioteca::setDescripcion(char* a){
	strcpy(descripcion, a);
}
char* biblioteca::getNombre(){
	return nombre;
}
char* biblioteca::getDescripcion(){
	return descripcion;
}
biblioteca::biblioteca(){
}
biblioteca::~biblioteca(){
}
