#ifndef biblioteca_h_
#define biblioteca_h_
class biblioteca{
	private:
		char nombre[50], descripcion[50];
	public:
		biblioteca();
		~biblioteca();
		virtual void capturar(int);
		virtual int imprimir(int);
		void setNombre(char*);
		void setDescripcion(char*);
		char* getNombre();
		char* getDescripcion();
};
#endif
