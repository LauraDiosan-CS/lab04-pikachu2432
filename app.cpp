#include <iostream>
#include "Examen.h"
#include "Repo.h"
#include "TestS.h"
#include "TestR.h"
using namespace std;
//ceva

void afisare_meniu()
{
	cout << "Ce doriti sa efectuati?" << endl;
	cout << "1. Citire examen." << endl;
	cout << "2. Afisarea tuturor examenelor." << endl;
	cout << "Introduceti nr. corespunzator operatiei sau un nr. care nu e in lista pt. iesire." << endl;
}

int main()
{
	test_e();
	test_r();
	cout << endl;
	afisare_meniu();
	
	int optiune;
	cin >> optiune;
	while (optiune >= 1 && optiune <= 2)
	{
		int nota, data;
		char *nume;
		nume = new char[10];
		Examen e;
		Repo r;

		if (optiune == 1)
		{
			cout << "Nume:" << endl;
			cin >> nume;
			cout << "Nota:" << endl;
			cin >> nota;
			cout << "data:" << endl;
			cin >> data;

			e = Examen(nota, data, nume);
			
			cout << endl << "Noua optiune:";
			cin >> optiune;
		}
		if (optiune == 2)
		{
			r.add_elem(e);
			for (int i = 0; i < r.get_size(); i++)
			{
				cout << "nume: " << r.get_all()->get_nume() << endl;
				cout << "nota: " << r.get_all()->get_nota() << endl;
				cout << "data: " << r.get_all()->get_data() << endl;
			}
			cout << endl << "Noua optiune:";
			cin >> optiune;
		}
		else
		{
			e.~Examen();
			r.~Repo();
		}
	}
	cout << "Aplicatie inchisa." << endl;
	return 0;
}