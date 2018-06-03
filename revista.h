#ifndef revista_h_
#define revista_h_
class revista: public biblioteca{
	private:
		int noPaginas, codigo;
		char titulo[50], autor[50], editorial[50];
	public:
		revista();
		~revista();
		void capturar(int);
		int imprimir(int);
		void setnoPaginas(int);
		void setCodigo(int);
		void setTitulo(char*);
		void setAutor(char*);
		void setEditorial(char*);
		int getnoPaginas();
		int getCodigo();
		char* getTitulo();
		char* getAutor();
		char* getEditorial();
};
#endif
