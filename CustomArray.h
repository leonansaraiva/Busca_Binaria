#include<iostream>
using namespace std;

class CustomArray  {

public:

int bucar_b(int chave, int arquivo[], int tam){
	int pos=-1;
	if(tam==0){
		return pos;
	}else{
		int ini = 0; int fim = tam-1;
		do{
			pos = (ini+fim)/2;
			if(chave < arquivo[pos]){
				fim = pos -1;
			}else{
				ini = pos+1;
			}
		}while(chave!=arquivo[pos] && ini <= fim);
	}
	if(chave==arquivo[pos]){
		return pos;
	}else{
		return pos++;
	}
}

int buscar(int chave, int arquivo[], int tam) {
    int pos = bucar_b(chave, arquivo,tam);

    if(pos < 0) 
        throw -1;

    return arquivo[pos];
    
}

void ordenar(int itens[], int tam) {
	for(int i =0; i<tam-1; i++){
		int min = i;
		for(int j=i+1; j<tam; j++){
			if(itens[j]<itens[min])
				min=j;
		}
		int aux = itens[min];
		itens[min]=itens[i];
		itens[i] = aux;
	}
}


void imprimir(int arg[], int tam){
	for(int n=0; n<tam; n++){
		cout<< arg[n];
		if(n < tam-1)
			cout<< ", ";
	}
}

};