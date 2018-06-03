#ifndef libro_h_
#define libro_h_
class libro: public biblioteca{
	private:
		int noPaginas, codigo;
		char titulo[50], autor[50], editorial[50];
	public:
		libro();
		~libro();
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
