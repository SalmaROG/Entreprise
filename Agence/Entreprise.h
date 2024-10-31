#pragma once
#include<iostream>
#include<memory>
#include "Employé.h"
#include <string>

class Entreprise
{
private:

	std::string Nom;
	std::string Adresse;
	shared_ptr<Employé>* Employes;
	int capacity;
	int count;
	double SalaireTotal;

public:
	Entreprise(std::string nom, std::string ads);

	void Afficher() const;

	void CalculerSalaireTotal();

	void AddEmployé(shared_ptr<Employé> Emp);

	void resize();

	~Entreprise();


};

