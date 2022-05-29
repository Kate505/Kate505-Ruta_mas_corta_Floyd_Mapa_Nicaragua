#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct nodo{
	int num;
	struct nodo *sig;
};

typedef struct nodo *Pila;

void push(Pila &pila, int n){
	Pila xnodo;
	xnodo = new(struct nodo);
	xnodo->num = n;
	
	if(pila == NULL){		
		xnodo->sig = NULL;
	}else{
		xnodo->sig = pila;
	}
	pila = xnodo;
}

int pop(Pila &pila){
	int nume;
	Pila temp;
	temp = pila;
	nume = temp->num;
	
	pila = temp->sig;
	free(temp);
	return nume;
} 

void mostrar_pila(Pila pila){
	int i=1;
    Pila xnodo;
    xnodo = pila;
    
    while(xnodo != NULL){
    	cout<<"\t\t"<<i<<") "<<xnodo->num <<"\n";
        xnodo = xnodo->sig;
        i++;
	}
}

void opciones(){
	cout<<"\n\n\tElija una opcion para la Pila:\n";
	cout<<"\n\t1. PusH\n";
	cout<<"\t2. PoP\n";
	cout<<"\t3. Mostrar la pila\n";
	cout<<"\t4. Salir\n";
}
