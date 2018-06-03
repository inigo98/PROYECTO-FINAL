#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "biblioteca.h"
#include "libro.h"
#include "revista.h"
#include "articulo.h"
using namespace std;
void revista::capturar(int a){
	biblioteca::capturar(0);
	int noPaginas2, codigo2;
	char titulo2[50], autor2[50], editorial2[50];
	cout<<"escriba el titulo de la revista"<<endl;
	fflush(stdin);
	fgets(titulo2,50,stdin);
	cout<<endl;
	cout<<"escriba el autor de la revista"<<endl;
	fflush(stdin);
	fgets(autor2,50,stdin);
	cout<<endl;
	cout<<"escriba la editorial de la revista"<<endl;
	fflush(stdin);
	fgets(editorial2,50,stdin);
	cout<<endl;
	cout<<"escriba el codigo de la revista"<<endl;
	cin>>codigo2;
	cout<<endl;
	cout<<"escriba el numero de paginas de la revista"<<endl;
	cin>>noPaginas2;
	cout<<endl;
	setTitulo(titulo2);
	setAutor(autor2);
	setEditorial(editorial2);
	setCodigo(codigo2);
	setnoPaginas(noPaginas2);
}
int revista::imprimir(int a){
	if(a==1){
		char nomb[50];
		cout<<"escriba el nombre de lo que desea buscar"<<endl;
		fflush(stdin);
		fgets(nomb,50,stdin);
		if(strcmp(nomb,getTitulo())==0){
			cout<<"revistas"<<endl;
			cout<<"el titulo de la revista es "<<getTitulo();
			cout<<"el autor de la revista es "<<getAutor();
			cout<<"la editorial de la revista es "<<getEditorial();
			cout<<"el numero de paginas de la revista es "<<getnoPaginas()<<endl;
			cout<<"el codigo de la revista es "<<getCodigo()<<endl;
			biblioteca::imprimir(0);
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			system("pause");
			return 1;
		}
	}
	else{
		cout<<"revistas"<<endl;
		cout<<"el titulo de la revista es "<<getTitulo();
		cout<<"el autor de la revista es "<<getAutor();
		cout<<"la editorial de la revista es "<<getEditorial();
		cout<<"el numero de paginas de la revista es "<<getnoPaginas()<<endl;
		cout<<"el codigo de la revista es "<<getCodigo()<<endl;
		biblioteca::imprimir(0);
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
		return 0;	
	}
}
void revista::setTitulo(char* a){
	strcpy(titulo,a);
}
void revista::setAutor(char* a){
	strcpy(autor,a);
}
void revista::setEditorial(char* a){
	strcpy(editorial,a);
}
void revista::setnoPaginas(int a){
	noPaginas=a;
}
void revista::setCodigo(int a){
	codigo=a;
}
char* revista::getTitulo(){
	return titulo;
}
char* revista::getAutor(){
	return autor;
}
char* revista::getEditorial(){
	return editorial;
}
int revista::getnoPaginas(){
	return noPaginas;
}
int revista::getCodigo(){
	return codigo;
}
revista::revista(){
}
revista::~revista(){
}
