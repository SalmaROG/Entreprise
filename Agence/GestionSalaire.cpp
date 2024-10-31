#include <iostream>
#include "Entreprise.h"
#include "Employé.h"
#include "Agent.h"
#include "Gestionnaire.h"
#include "Salarie.h"
#include "Ges_Com.h"


int main()
{
	Entreprise* E = new Entreprise("ILISI","ads");

	shared_ptr<Employé> E1 = make_shared<Employé>("nom1", "prenom1", 300, 26);
	shared_ptr<Employé> E2 = make_shared<Agent>("nom2", "prenom2", 300, 26,20,200);
	shared_ptr<Employé> E3 = make_shared<Gestionnaire>("nom3", "prenom3", 0,0,2000);
	shared_ptr<Employé> E4 = make_shared<Ges_Com>("nom3", "prenom3", 200, 26,20,20, 2000);


    
	E1->CalculerSalaire();
	E2->CalculerSalaire();
	E3->CalculerSalaire();
	E4->CalculerSalaire();

	E->AddEmployé(E1);
	E->AddEmployé(E2);
	E->AddEmployé(E3);
	E->AddEmployé(E4);

	E->CalculerSalaireTotal();
	E->Afficher();

	

}