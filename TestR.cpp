#include "Repo.h"
#include "Examen.h"
#include <assert.h>
#include <iostream>
using namespace std;

void test_r()
{
	Examen e1 = Examen(7, 30, "mara");
	Examen e2 = Examen(6, 15, "radu");
	Examen e3 = Examen(9, 24, "luca");

	Repo r = Repo();
	assert(r.get_size() == 0);

	r.add_elem(e1);

	cout << "Testele pt. repo functioneaza." << endl;
}
