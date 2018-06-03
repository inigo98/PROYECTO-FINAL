#ifndef articulo_h_
#define articulo_h_
class articulo:public biblioteca{
	private:
		int codigo;
		char nombre[50], descripcion[50];
	public:
		articulo();
		~articulo();
		void capturar(int);
		int imprimir(int);
		void setCodigo(int);
		void setNombre(char*);
		void setDescripcion(char*);
		int getCodigo();
		char* getNombre();
		char* getDescripcion();
		
};
#endif
