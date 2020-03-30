#pragma once
#include <iostream>
#include "Examen.h"
#include "Repo.h"
using namespace std;

class UI
{
public:
	Examen citire_examen();
	void modif_note(Repo r);
	void afisare_meniu();
	void afisare(Repo r);
	void afisare_exam(Repo r);
};

