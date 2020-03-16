#include "Examen.h"
#include <iostream>
using namespace std;

Examen::Examen()
{
	this->nota = 0;
	this->data = 0;
	this->nume = NULL;
}
Examen::~Examen()
{
	delete[] this->nume;
	this->nume = NULL;
}
Examen::Examen(int no, int d, const char *n)
{
	this->nota = no;
	this->data = d;
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}
Examen::Examen(const Examen &e)
{
	this->nota = e.nota;
	this->data = e.data;
	this->nume = new char[strlen(e.nume) + 1];
	strcpy_s(this->nume, strlen(e.nume) + 1, e.nume);
}

int Examen::get_nota()
{
	return this->nota;
}
int Examen::get_data()
{
	return this->data;
}
char *Examen::get_nume()
{
	return this->nume;
}

void Examen::set_nota(int n)
{
	this->nota = n;
}
void Examen::set_data(int d)
{
	this->data = d;
}
void Examen::set_nume(char *n)
{
	this->nume = n;//
}

Examen& Examen::operator=(const Examen& e)
{
	this->set_nota(e.nota);
	this->set_data(e.data);
	this->nume = new char[strlen(e.nume) + 1];
	strcpy_s(this->nume, strlen(e.nume) + 1, e.nume);//
	return *this;
}