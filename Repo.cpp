#include "Repo.h"
#include <iostream>
#include <cstring>
using namespace std;

Repo::Repo()
{
	this->size = 0;
	this->Examene = new Examen[10];
}

Repo::~Repo()
{
	this->size = NULL;
	delete[] this->Examene;
	this->Examene = NULL;
}

Examen*Repo::get_all()
{
	return this->Examene;
}

int Repo::get_size()
{
	return this->size;
}

void Repo::add_elem(Examen e)
{
	this->Examene[size] = e;
	size++;
}

void Repo::elim_elem(Examen e)
{
	for (int i = 0; i < this->size - 1; i++) //suprascriere
		if (Examene[i].get_nota() == e.get_nota() && Examene[i].get_data() == e.get_data() && Examene[i].get_nume() == e.get_nume())
			for (int j = 0; j < this->size - 1; j++)
				Examene[i] = Examene[i + 1];
	size--;
}
