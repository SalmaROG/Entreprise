#pragma once
#include "Employ�.h"
class Agent : virtual public Employ�
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

