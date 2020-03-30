#include <iostream>
#include "Examen.h"
#include "Repo.h"
#include "UI.h"
#include "TestE.h"
#include "TestS.h"
#include "TestR.h"
using namespace std;

int main()
{
	UI u;
	test_e();
	test_r();
	//test_s();
	cout << endl; u.afisare_meniu(); cout << endl;
	
	int optiune; cin >> optiune;
	while (optiune >= 1 && optiune <= 4)
	{
		Repo r;

		if (optiune == 1)
		{
			Examen e = u.citire_examen();
			r.add_elem(e);

			cout << endl; u.afisare_meniu();
			cout << endl << "Noua optiune:"; cin >> optiune;
		}
		if (optiune == 2)
		{
			u.afisare(r);

			cout << endl; u.afisare_meniu();
			cout << endl << "Noua optiune:"; cin >> optiune;
		}
		if (optiune == 3)
		{
			u.afisare_exam(r);

			cout << endl; u.afisare_meniu();
			cout << endl << "Noua optiune:"; cin >> optiune;
		}
		if (optiune == 4)
		{
			u.modif_note(r);
			cout << endl; u.afisare_meniu();
			cout << endl << "Noua optiune:"; cin >> optiune;
		}
		else
		{
			//e.~Examen();
			r.~Repo();
		}
	}
	cout << "Aplicatie inchisa." << endl;
	return 0;
}