#include <iostream>
#include "Examen.h"
#include "Repo.h"
#include "TestE.h"
#include "TestS.h"
#include "TestR.h"
using namespace std;

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
	test_s();
	cout << endl; afisare_meniu(); cout << endl;
	
	int optiune; cin >> optiune;
	while (optiune >= 1 && optiune <= 2)
	{
		int nota, data;
		char *nume = new char[10];
		Repo r;

		if (optiune == 1)
		{
			cout << "Nume: "; cin >> nume;
			cout << "Nota: "; cin >> nota;
			while (nota < 1 || nota > 10 )
			{
				cout << "Nota trebuie sa fie cuprinsa intre 1 si 10!" << endl << "Nota:";
				cin >> nota;
			}
			cout << "Data: "; cin >> data;
			while (data < 1 || data > 31)
			{
				cout << "Data trebuie sa fie cuprinsa intre 1 si 31!" << endl << "Data:";
				cin >> data;
			}

			Examen e = Examen(nota, data, nume);
			r.add_elem(e);

			cout << endl; afisare_meniu();
			cout << endl << "Noua optiune:"; cin >> optiune;
		}
		if (optiune == 2)
		{
			for (int i = 0; i < r.get_size(); i++)
			{
				cout << "Nume: " << r.get_elem(i).get_nume() << endl;
				cout << "Nota: " << r.get_elem(i).get_nota() << endl;
				cout << "Data: " << r.get_elem(i).get_data() << endl;
				cout << endl;
			}

			cout << endl; afisare_meniu();
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