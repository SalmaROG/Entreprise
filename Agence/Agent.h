#pragma once
#include "Employé.h"
class Agent : virtual public Employé
{
private:

	double commission;
	int TotalVente;
	double Indeminite;

public:

	Agent( std::string, std::string, double, int ,double, int);

	void afficher() const override;

	void CalculerIndeminite() ;

	double operator*() const override;

	void CalculerSalaire() override ;

	~Agent();


};

