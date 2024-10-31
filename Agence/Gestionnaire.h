#pragma once
#include "Employ�.h"

class Gestionnaire :virtual public Employ�
{
private:

	double SalaireHebdomadaire;


public:
	Gestionnaire(std::string nom, std::string prenom, double Taux, int nbr,double hebd);

	void afficher() const override;

	void CalculerSalaire() override;

	double operator*() const override;

	~Gestionnaire();

};

