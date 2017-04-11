/*
 * file: testCShape3d.cpp
 *
 * Descricao: Programa de teste para a Classe.
 *
 * Saida do programa:
 *
 * Volume do paralelograma: 730.17
 * Volume do cone: 5.12707
 * Volume do cilindro: 20.3575
 *
 *
 * Autor: Rob McGregor
 * Data: ??/??/??
 *
 * Ultima Alteracao: Eduardo Augusto Bezerra
 * Data da ultima alteracao: 29/05/2003
 *
 */

#include "CShape3d.h"
#include "CBox.h"
#include "CCone.h"
#include "CCylinder.h"
#include <iostream>
using namespace std;

int main(){

    CShape3d<float>* shapecbox;

	// Um ponteiro para CShape3d assume a forma de um CBox
	//
	shapecbox = new Cbox<float>(10.6, 12, 5);
	cout << "Volume do paralelogramo: " << shapecbox->volume() << endl;
	delete shapecbox;


	// Um ponteiro para CShape3d assume a forma de um CCone
	//
	shapecbox = new CCone<float>(1.2f, 3.4f);
	cout << "Volume do cone: " << shapecbox->volume() << endl;
	delete shapecbox;

	// Um ponteiro para CShape3d assume a forma de um CCylinder
	//
	shapecbox = new CCylinder<float>(1.2f, 4.5f);
	cout << "Volume do cilindro: " << shapecbox->volume() << endl;
	delete shapecbox;



	return 0;
}
