#include <iostream>
#include <string>
using namespace std;
#include "Menu.h"
#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"
#include "Matiere.h"
#include "GroupeModule.h"
#include "Groupe.h"
#include "Note.h"
#include "GestionClasses.h"
int main()
{

     GestionClasses g;
     g.connect_db();
     int choix;
     int choice=Main_Menu(g);
     std::cout<<"Saving data !!!"<<endl;
     g.update_db();
     return 0;
}
