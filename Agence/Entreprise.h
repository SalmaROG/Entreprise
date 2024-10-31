#pragma once
#include<iostream>
#include<memory>
#include "Employ�.h"
#include <string>

class Entreprise
{
private:

	std::string Nom;
	std::string Adresse;
	shared_ptr<Employ�>* Employes;
	int capacity;
	int count;
	double SalaireTotal;

public:
	Entreprise(std::string nom, std::string ads);

	void Afficher() const;

	void CalculerSalaireTotal();

	void AddEmploy�(shared_ptr<Employ�> Emp);

	void resize();

	~Entreprise();


};

