/*
 *  Created on: 30/09/2018
 *      Author: Leonan da silva saraiva
 */
#include<iostream>
#include "CustomArray.h"
#include <assert.h>

using namespace std;

void teste () {

	int tamanho = 16;
	int array[tamanho]= {9, 8, 7, 19, 5, 4, 56, 12, 1, 78, 6, 23, 45, 98, 46, 33};

	CustomArray *c_array = new CustomArray();
	//ordenando array
	c_array->ordenar(array,tamanho);
	cout <<"Lista ordenada: [";
	c_array->imprimir(array,tamanho);
	cout <<"]" << endl;
	int item = c_array->buscar(12,array,tamanho);
	assert(12 == item);//item existe na lista

	int item2 = c_array->buscar(15,array,tamanho);
	assert(19 == item2);//item não existe na lista, retorna o próximo mais maior

}

int main() {

	// teste ();
	
	int tamanho = 1000;
	int array[tamanho];
	for (int i=0; i < tamanho; i++)
	{
		array[i] = rand() % 10000;
	}

	CustomArray *c_array = new CustomArray();
	//ordenando array
	c_array->ordenar(array,tamanho);
	cout <<"Lista ordenada: [";
	c_array->imprimir(array,tamanho);
	cout <<"]";
	cout <<"\n Buscando item 12, retornado valor "<< c_array->buscar(12,array,tamanho) << endl;
	
}





