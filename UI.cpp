#include "UI.h"

Examen UI::citire_examen()
{
	int nota, data;
	char *nume = new char[10];

	cout << "Nume: "; cin >> nume;
	cout << "Nota: "; cin >> nota;

	while (nota < 1 || nota > 10)
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
	return e;
}

void UI::modif_note(Repo r)
{
	char *nume = new char[10];
	cout << "Nume: "; cin >> nume;
	for (int i = 0; i < r.get_size(); i++)
		if (r.get_elem(i).get_nume() == nume)
		{
			int n = r.get_elem(i).get_nota() + 1;
			r.get_elem(i).set_nota(n);
		}
}

void UI::afisare_meniu()
{
	cout << "Ce doriti sa efectuati?" << endl;
	cout << "1. Citire examen." << endl;
	cout << "2. Afisarea tuturor examenelor." << endl;
	cout << "3. Afisarea tuturor examenelor cu nota mai mare decat o nota data." << endl;
	cout << "4. Adaugarea unui bonus de 1 punct pentru examenele sustinute de un student dat." << endl;
	cout << "Introduceti nr. corespunzator operatiei sau un nr. care nu e in lista pt. iesire." << endl;
}

void UI::afisare(Repo r)
{
	for (int i = 0; i < r.get_size(); i++)
	{
		cout << "Nume: " << r.get_elem(i).get_nume() << endl;
		cout << "Nota: " << r.get_elem(i).get_nota() << endl;
		cout << "Data: " << r.get_elem(i).get_data() << endl;
		cout << endl;
	}
}
void UI::afisare_exam(Repo r)
{
	cout << "Se vor afisa toate examenele cu nota mai mare decat: ";
	int nota; cin >> nota;

	for (int i = 0; i < r.get_size(); i++)
		if (r.get_elem(i).get_nota() > nota)
		{
			cout << "Nume: " << r.get_elem(i).get_nume() << endl;
			cout << "Nota: " << r.get_elem(i).get_nota() << endl;
			cout << "Data: " << r.get_elem(i).get_data() << endl;
			cout << endl;
		}
}
