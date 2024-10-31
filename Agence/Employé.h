#pragma once
#include<iostream>
#include "Salarie.h"
class Employé : public Salarie
{

	
public:

	Employé(std::string , std::string , double , int);


	 void CalculerSalaire() override;
	
	~Employé();

};

