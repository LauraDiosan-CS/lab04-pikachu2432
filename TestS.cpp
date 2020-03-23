#include "Repo.h"
#include "Examen.h"
#include "Service.h"
#include <assert.h>
#include <iostream>
using namespace std;

void test_e()
{
	Service s = Service();

	Examen e1 = Examen(7, 30, "mara");
	Examen e2 = Examen(6, 15, "radu");
	Examen e3 = Examen(9, 24, "luca");

	s.add(e1);
	s.add(e2);

	assert(s.find(e2) == 1);
	assert(s.find(e3) == -1);

	s.upd(e1, e3);
	assert(s.find(e3) == 0);

	s.del(e2);

	s.add(e1);
	assert(s.get(0) == e3);
	assert(s.get(1) == e2);
	assert(s.get(2) == e1);

	cout << "Testele pt. service functioneaza." << endl;
}