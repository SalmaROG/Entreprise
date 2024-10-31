#pragma once
#include<iostream>
#include<memory>
#include <string>
using namespace std;
class Salarie
{   
private:
	static int count;
	int id;
	std::string Nom;
	std::string Prenom;
    double TauxHoraire;
	int NbrHeure;

protected:
	double Salaire;

public:
	Salarie(std::string, std::string, double, int);

	virtual void afficher() const;

	virtual void CalculerSalaire()=0;

	double operator+(const shared_ptr<Salarie> S) const;

    virtual double operator*() const;

	~Salarie();
};

