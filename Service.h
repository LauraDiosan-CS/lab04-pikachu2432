#pragma once
#include "Repo.h"
class Service
{
private:
	Repo r;
public:
	Service();
	~Service() {};

	void add(Examen e);
	void upd(Examen e1, Examen e2);
	void del(Examen e);
	int find(Examen e);
	Examen get(int i);
};

