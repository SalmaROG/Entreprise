#include "Salarie.h"

int Salarie::count = 0;

Salarie::Salarie(std::string nom, std::string prenom, double Taux, int nbr)
	:id(++count), Nom(nom), Prenom(prenom), TauxHoraire(Taux), NbrHeure(nbr), Salaire (0)
{

}

void Salarie::afficher() const
{
	std::cout << "ID : " << this->id << std::endl;
	std::cout << "Nom : " << this->Nom << std::endl;
	std::cout << "Prenom : " << this->Prenom << std::endl;
	std::cout << "TauxHoraire : " << this->TauxHoraire << std::endl;
	std::cout << "NbrHeure : " << this->NbrHeure << std::endl;
	std::cout << "Salaire : " << this->Salaire << std::endl;
	

}

double Salarie::operator+(const shared_ptr<Salarie> S) const
{
	return this->Salaire+S->Salaire;
}

double Salarie::operator*() const
{   
	return (this->NbrHeure*this->TauxHoraire);
}

Salarie::~Salarie()
{

}
