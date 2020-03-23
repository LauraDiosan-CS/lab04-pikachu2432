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
	void set_size(int s);

	//adaugare
	void add_elem(Examen e);
	//modificare
	void upd_elem(Examen e1, Examen e2);
	//eliminare
	void elim_elem(Examen e);
	//cautare
	int find_elem(Examen e);
	//cautare
	Examen get_elem(int i);
};

