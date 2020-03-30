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

void Repo::set_size(int s)
{
	this->size = s;
}

void Repo::add_elem(Examen e)
{
	this->Examene[this->size] = e;
	this->size++;
}

void Repo::upd_elem(Examen e1, Examen e2)
{
	for (int i = 0; i < this->size; i++)
		if (Examene[i] == e1)
			Examene[i] = e2;
}

void Repo::elim_elem(Examen e)
{
	for (int i = 0; i < this->size - 1; i++) 
		if (Examene[i] == e)
		{
			for (int j = i; j < this->size - 1; j++)
				Examene[j] = Examene[j + 1];
			this->size--;
		}
	if (Examene[this->size - 1] == e)
		this->size--;
}

int Repo::find_elem(Examen e)
{
	for (int i = 0; i < this->size; i++) 
		if (Examene[i] == e)
			return i;
	return -1;
}

Examen Repo::get_elem(int i)
{
	return Examene[i];
}