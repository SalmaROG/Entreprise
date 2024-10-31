#include "Agent.h"

Agent::Agent(std::string nom, std::string prenom, double taux, int nbr, double comm, int total)
	:Employé(nom,prenom,taux,nbr),commission(comm),TotalVente(total),Indeminite(0)
{

}

void Agent::afficher() const
{
	Salarie::afficher();
	std::cout << "Comission : " << this->commission << std::endl;
	std::cout << "TotalVente : " << this->TotalVente << std::endl;
	std::cout << "Indemnite : " << this->Indeminite << std::endl;
}

void Agent::CalculerIndeminite() 
{
	this->Indeminite= this->commission * this->TotalVente;
}

double Agent::operator*() const
{
	return this->commission*this->TotalVente;
}

void Agent::CalculerSalaire() 
{
	this->CalculerIndeminite();
	this->Salaire = Salarie::operator*() + this->Indeminite;
}

Agent::~Agent()
{
}
