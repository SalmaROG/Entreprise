#include "Gestionnaire.h"

Gestionnaire::Gestionnaire(std::string nom, std::string prenom, double Taux, int nbr ,double hebd)
    :Employé(nom,prenom,Taux,nbr), SalaireHebdomadaire(hebd)
{
}

void Gestionnaire::afficher() const
{
    Salarie::afficher();
    std::cout << "SalaireHebdomadaire : " << this->SalaireHebdomadaire << std::endl;
}

void Gestionnaire::CalculerSalaire()
{
    this->Salaire = this->SalaireHebdomadaire*4;
}

double Gestionnaire::operator*() const
{
    return this->SalaireHebdomadaire*4;
}

Gestionnaire::~Gestionnaire()
{
}
