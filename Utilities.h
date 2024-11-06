#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED
#include<vector>
#include<string>
#include<string.h>
using namespace std;
#include "Enseignant.h"
#include "Etudiant.h"
#include "Groupe.h"
#include "GroupeModule.h"
#include "Matiere.h"
#include "Note.h"

int Verifier_Exist_Etudiant(vector<Etudiant> etd,int cnss);
int Verifier_Exist_Enseignant(vector<Enseignant> ens,int cnss);
int Verifier_Exist_Groupe(vector<Groupe> grp,string id);
int Verifier_Exist_GroupeModule(vector<GroupeModule> grpM,string idgrpm);
int Verifier_Exist_Matiere(vector<Matiere> mat,string id);
int Verifier_Exist_Note(vector<Note> note,Matiere mat,Etudiant etd,string type);
#endif // UTILITIES_H_INCLUDED
