#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

typedef struct alumno{
    char nombre[50];
    int edad;
    bool genero;
    char curso[5];
    float prom;
}alumno;

typedef struct Nodo{
    alumno info;
    struct Nodo *sig;
}Nodo;

typedef struct Nodo *Lista;

char Menu ();
void Inicializar (Lista []);
void Recuperar (Lista [],int );
void Grabar (Lista [],int );
void Agregar (Lista &,alumno );
void Elminar (Lista &, alumno );
bool buscar (Lista ,alumno );
void Mostrar (Lista );
void aprobados (Lista );
void reprobados (Lista );
void estadisticas (Lista );
void Salir ();

#endif // CABECERA_H_INCLUDED

