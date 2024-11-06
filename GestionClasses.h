#ifndef GESTIONCLASSES_H
#define GESTIONCLASSES_H
#include<fstream>
#include<vector>
#include<string>
#include<string.h>
#include<iomanip>
using namespace std;
#include "Enseignant.h"
#include "Etudiant.h"
#include "Groupe.h"
#include "GroupeModule.h"
#include "Matiere.h"
#include "Note.h"
#include "Utilities.h"

class GestionClasses
{
private:
        vector<Enseignant> Enseignants;
        vector<Etudiant> Etudiants;
        vector<Groupe> Groupes;
        vector<GroupeModule> GroupeModules;
        vector<Matiere> Matieres;
        vector<Note> Notes;
public:
        void AddEnseignant(Enseignant);
        void DeleteEnseignant(int);
        void UpdateEnseignant(int,Enseignant);
        void Display_Ens();
        void AddEtudiant(Etudiant);
        void DeleteEtudiant(int);
        void UpdateEtudiant(int,Etudiant);
        void Display_Etd();
        void AddGroupe(Groupe);
        void DeleteGroupe(string);
        void UpdateGroupe(string,Groupe);
        void Display_Grp();
        void Display_GrpID();
        void AddGroupeModule(GroupeModule);
        void DeleteGroupeModule(string);
        void UpdateGroupeModule(string,GroupeModule);
        void Display_GrpM();
        void AddMatiere(Matiere);
        void DeleteMatiere(string);
        void UpdateMatiere(string,Matiere);
        void Display_Mat();
        void AddNote(Note);
        void DeleteNote(Matiere,Etudiant,string);
        void UpdateNote(Matiere,Etudiant,string,Note);
        void Display_Note();
        double moyMat(Matiere,Etudiant);
        double moyGM(Etudiant,string);
        double moyenne(Etudiant);
        string    resultat(Etudiant);
        string    mention(Etudiant);
        void   Afficher_PV(string);
        vector<Etudiant> getEtuds(){return this->Etudiants;}
        vector<Enseignant> getEns(){return this->Enseignants;}
        vector<Groupe> getGrps(){return this->Groupes;}
        vector<GroupeModule> getGrpMs(){return this->GroupeModules;}
        vector<Matiere> getMats(){return this->Matieres;}
        vector<Note> getNotes(){return this->Notes;}

        GestionClasses();
        virtual ~GestionClasses();

        void connect_db();
        void update_db();

        void read_Etudiants();
        void read_Enseignants();
        void read_Groupes();
        void read_Groupes_Module();
        void read_Matieres();
        void read_notes();

        void write_Etudiants();
        void write_Enseignants();
        void write_Groupes();
        void write_Groupes_Module();
        void write_Matieres();
        void write_notes();


};

#endif // GESTIONCLASSES_H
