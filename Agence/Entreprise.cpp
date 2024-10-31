#include "Entreprise.h"

Entreprise::Entreprise(std::string nom, std::string ads)
	:Nom(nom),capacity(20),count(0),SalaireTotal(0)
{
	this->Employes = new shared_ptr<Employé> [this->capacity];
	for (int i = 0; i < this->capacity; i++) {
		this->Employes[i] = nullptr;
	}
}


void Entreprise::Afficher() const
{
	std::cout << "Le Nom est : " << this->Nom << std::endl;
	std::cout << "Adresse est : " << this->Adresse << std::endl;
	std::cout << "*********Les enmployes de l'entreprise " << this->Nom <<"*********" << std::endl;
	for (int i = 0; i < this->count; i++)
	{
		this->Employes[i]->afficher();
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << "Le salaire total est : " << this->SalaireTotal << std::endl;
}

void Entreprise::CalculerSalaireTotal() 
{
	for (int i = 0; i < (this->count-1); i+=2)
	{
		this->SalaireTotal += this->Employes[i] ->operator+(this->Employes[i + 1]);

	}
}


void Entreprise::resize()
{
	this->capacity *=2;

	shared_ptr<Employé> * newtable = new shared_ptr<Employé> [this->capacity];
	for (int i = 0; i < this->count; i++) {
		newtable[i] = this->Employes[i];
	}
	for (int i = this->count; i < this->capacity; i++) {
		newtable[i] = nullptr;
	}

	delete[] this->Employes;
	this->Employes = newtable;

}


void Entreprise::AddEmployé(shared_ptr<Employé> Emp)
{
	if (this->count == this->capacity) {
		this->resize();
	}
	this->Employes[this->count++] = Emp;

}




Entreprise::~Entreprise()
{
	delete[] this->Employes;
	this->Employes = nullptr;

}


