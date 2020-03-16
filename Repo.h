#pragma once
#include "Examen.h"
class Repo
{
private:
	int size;
	Examen *Examene;

public:
	Repo();
	~Repo();

	Examen *get_all();
	int get_size();

	//adaugare
	void add_elem(Examen e);
	//eliminare
	void elim_elem(Examen e);
};

