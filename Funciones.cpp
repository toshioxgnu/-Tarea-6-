#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Cabecera.h"

using namespace std;

char Menu (){
    system ("cls");
    char op;
    cout<<"Menu del sistema"<<endl;
    cout<<"a) Inicializar Colegio"<<endl;
    cout<<"b) Recuperar"<<endl;
    cout<<"c) Grabar"<<endl;
    cout<<"d) Agregar"<<endl;
    cout<<"e) Eliminar"<<endl;
    cout<<"f) Buscar"<<endl;
    cout<<"g) Mostrar"<<endl;
    cout<<"h) Aprobados"<<endl;
    cout<<"i) Reprobados"<<endl;
    cout<<"j) Estadísticas"<<endl;
    cout<<"k) Salir"<<endl;
    cout<<">>>>>"<<endl;cin>>op;
    return op;

}

void Inicializar (Lista A[]){
    int n=26;
    Lista L;
    for (int i;i<n;i++){
        A[i]=L;
        L->sig=NULL;
    }
}


void Recuperar (Lista A[],int n){
    FILE *fp;
    fp=fopen("DatosColegio.txt","r");

}

void Grabar (Lista A[],int n){

}

void Agregar (Lista &L,alumno x){

}

void Elminar (Lista &L, alumno x){

}

bool buscar (Lista L,alumno x){

}

void Mostrar (Lista L){

}

void aprobados (Lista L){

}

void reprobados (Lista L){

}

void estadisticas (Lista L){

}

void Salir (){
    exit (1);
}
