#include "Ges_Com.h"

Ges_Com::Ges_Com(std::string nom, std::string prenom, double taux, int nbr, double comm, int total, double SH)
	:Employé( nom,prenom ,taux ,nbr),Agent(nom, prenom, taux, nbr,comm,total) ,Gestionnaire(nom, prenom, taux, nbr, SH)
{

}

void Ges_Com::afficher() const
{
	Agent::afficher();
}

void Ges_Com::CalculerSalaire()
{   
	this->CalculerIndeminite();//pour stocker la valeur d'indimnité
	this->Salaire = Salarie::operator*() + Agent::operator*() + Gestionnaire::operator*();
}

double Ges_Com::operator*() const
{
	return Agent::operator*();
}



Ges_Com::~Ges_Com()
{
}
