#pragma once
#include<iostream>
#include "Salarie.h"
class Employ� : public Salarie
{

	
public:

	Employ�(std::string , std::string , double , int);


	 void CalculerSalaire() override;
	
	~Employ�();

};

