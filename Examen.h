#pragma once
class Examen
{
private:
	int nota;
	int data;
	char *nume;

public:
	Examen();
	~Examen();
	Examen(int no, int d, const char *n);
	Examen(const Examen &e);

	int get_nota();
	int get_data();
	char *get_nume();

	void set_nota(int n);
	void set_data(int d);
	void set_nume(char *n);

	Examen& operator=(const Examen& e);
};

