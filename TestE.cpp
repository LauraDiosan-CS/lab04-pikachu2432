#include "TestE.h"
#include <iostream>
#include <string>
#include <assert.h>
#include "Examen.h"
using namespace std;

void test_e()
{
	Examen e1 = Examen();
	assert(e1.get_nota() == 0);
	assert(e1.get_data() == 0);
	assert(e1.get_nume() == NULL);

	Examen e2 = Examen(10, 15, "ion");
	assert(e2.get_nota() == 10);
	assert(e2.get_data() == 15);

	char*e = e2.get_nume();//strcmp
	assert(strcmp(e, e2.get_nume()) == 0);

	Examen e3 = Examen(4, 5, "ana");
	e3.set_nota(7);
	e3.set_data(6);
	assert(e3.get_nota() == 7);
	assert(e3.get_data() == 6);

	cout << "Testele pentru clasa Examen functioneaza." << endl;
}