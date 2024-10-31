#pragma once
#include "Agent.h"
#include "Gestionnaire.h"

class Ges_Com : public Agent , public Gestionnaire
{

public:
	Ges_Com(std::string nom, std::string prenom, double taux, int nbr, double comm, int total, double SH);

	void afficher() const;

	void CalculerSalaire() override;

	double operator*() const override;

	~Ges_Com();
};

