#include "Employé.h"


Employé::Employé(std::string nom, std::string prenom , double Taux ,int nbr)
	     :Salarie(nom,prenom,Taux,nbr)
{
}



void Employé::CalculerSalaire() 
{
	this->Salaire = this->operator*();
}

Employé::~Employé()
{
}
