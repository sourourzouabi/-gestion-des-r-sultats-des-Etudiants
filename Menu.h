#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
#include "GestionClasses.h"
int Main_Menu(GestionClasses&);
int Interface_Etudiant(GestionClasses&);
int Interface_Enseignant_Modules(GestionClasses&);
void Affichage(GestionClasses&);
int Interface_Gestion_Etudiant(GestionClasses&);
int Interface_Gestion_Groupes(GestionClasses&);
int Interface_Gestion_Notes(GestionClasses&);
int Interface_Gestion_Enseignant(GestionClasses&);
int Interface_Gestion_GpM(GestionClasses&);
int Interface_Gestion_Matiere(GestionClasses&);
#endif // MENU_H_INCLUDED
