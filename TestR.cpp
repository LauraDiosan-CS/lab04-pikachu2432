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
	r.add_elem(e2);
	assert(r.get_size() == 2);

	assert(r.find_elem(e2) == 1);
	assert(r.find_elem(e3) == -1);

	r.upd_elem(e1, e3);
	assert(r.find_elem(e3) == 0);

	r.elim_elem(e2);
	assert(r.get_size() == 1);

	r.add_elem(e1);
	assert(r.get_elem(0) == e3);
	assert(r.get_elem(1) == e2);
	assert(r.get_elem(2) == e1);

	cout << "Testele pt. repo functioneaza." << endl;
}
