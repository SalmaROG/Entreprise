#include "Employ�.h"


Employ�::Employ�(std::string nom, std::string prenom , double Taux ,int nbr)
	     :Salarie(nom,prenom,Taux,nbr)
{
}



void Employ�::CalculerSalaire() 
{
	this->Salaire = this->operator*();
}

Employ�::~Employ�()
{
}
