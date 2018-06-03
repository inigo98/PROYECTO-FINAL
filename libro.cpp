#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "biblioteca.h"
#include "libro.h"
#include "revista.h"
#include "articulo.h"
using namespace std;
void libro::capturar(int a){
	biblioteca::capturar(0);
	int noPaginas1, codigo1;
	char titulo1[50], autor1[50], editorial1[50];
	cout<<"escriba el titulo del libro"<<endl;
	fflush(stdin);
	fgets(titulo1,50,stdin);
	cout<<endl;
	cout<<"escriba el autor del libro"<<endl;
	fflush(stdin);
	fgets(autor1,50,stdin);
	cout<<endl;
	cout<<"escriba la editorial del libro"<<endl;
	fflush(stdin);
	fgets(editorial1,50,stdin);
	cout<<endl;
	cout<<"escriba el codigo del libro"<<endl;
	cin>>codigo1;
	cout<<endl;
	cout<<"escriba el numero de paginas del libro"<<endl;
	cin>>noPaginas1;
	cout<<endl;
	setTitulo(titulo1);
	setAutor(autor1);
	setEditorial(editorial1);
	setCodigo(codigo1);
	setnoPaginas(noPaginas1);
}
int libro::imprimir(int a){
	if(a==1){
		char nomb[50];
		cout<<"escriba el nombre de lo que desea buscar"<<endl;
		fflush(stdin);
		fgets(nomb,50,stdin);
		if(strcmp(nomb,getTitulo())==0){
			cout<<"libros"<<endl;
			cout<<"el titulo del libro es "<<getTitulo();
			cout<<"el autor del libro es "<<getAutor();
			cout<<"la editorial del libro es "<<getEditorial();
			cout<<"el numero de paginas del libro es "<<getnoPaginas()<<endl;
			cout<<"el codigo del libro es "<<getCodigo()<<endl;
			biblioteca::imprimir(0);
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			system("pause");
			return 1;
		}
	}
	else{
		cout<<"libros"<<endl;
		cout<<"el titulo del libro es "<<getTitulo();
		cout<<"el autor del libro es "<<getAutor();
		cout<<"la editorial del libro es "<<getEditorial();
		cout<<"el numero de paginas del libro es "<<getnoPaginas()<<endl;
		cout<<"el codigo del libro es "<<getCodigo()<<endl;
		biblioteca::imprimir(0);
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
		return 0;
	}
}
void libro::setTitulo(char* a){
	strcpy(titulo,a);
}
void libro::setAutor(char* a){
	strcpy(autor,a);
}
void libro::setEditorial(char* a){
	strcpy(editorial,a);
}
void libro::setnoPaginas(int a){
	noPaginas=a;
}
void libro::setCodigo(int a){
	codigo=a;
}
char* libro::getTitulo(){
	return titulo;
}
char* libro::getAutor(){
	return autor;
}
char* libro::getEditorial(){
	return editorial;
}
int libro::getnoPaginas(){
	return noPaginas;
}
int libro::getCodigo(){
	return codigo;
}
libro::libro(){
}
libro::~libro(){
}
