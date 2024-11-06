#ifndef GROUPE_H
#define GROUPE_H
#include <iostream>
#include "GroupeModule.h"
#include "Etudiant.h"
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
class Groupe
{
        private:
        string IdGR;
        string Niveau;
        string Diplome;
        string Specialite ;
        int Num_G ;
        vector <GroupeModule> ListeModules ;
        vector <Etudiant> ListeEtudiants;

        public:
        Groupe(string id,string niveau,string diplome,string specialite,int num,vector<GroupeModule> listeGM,vector<Etudiant> listeEtd);
        Groupe();
        virtual ~Groupe();
        void setIdGrp(string id);
        void setNiveau(string niveau);
        void setDiplome(string diplome);
        void setSpecialite(string specialite);
        void setNumG(int num);
        void setLM(vector<GroupeModule> gm);
        void setLE(vector<Etudiant> etd);
        void Add_To_Tab_Etd(Etudiant etd);
        void Add_To_Tab_Mod(GroupeModule gp);
        //
        string getIdGR(){return this->IdGR;}
        string getNiveau(){return this->Niveau;}
        string getDiplome(){return this->Diplome;}
        string getSpecialite(){return this->Specialite;}
        int getNumG(){return this->Num_G;}
        vector <GroupeModule> getListeModule(){return this->ListeModules;}
        vector <Etudiant> getListeEtudiant(){return this->ListeEtudiants;}
        void display_Groupe();
        void read_attributes();
         friend ostream &operator<<( ostream &output, const Groupe &G ) {
         output <<setw(11)<<"Id"<<" |"<<setw(11)<<"Numero"<<" |"<<setw(11)<<"Niveau"<<" |"<<setw(11)<<"Diplome"<<" |"<<setw(11)<<"Specialite"<<endl;
         output <<setw(11)<<G.IdGR<<" |"<<setw(11)<<G.Num_G<<" |"<<setw(11)<<G.Niveau<<" |"<<setw(11)<<G.Diplome<<" |"<<setw(11)<<G.Specialite<<endl;
         output<<"les modules de ce groupes:"<<endl;
            int n=G.ListeModules.size();
         for(int i=0;i<n;i++) output<<G.ListeModules[i]<<endl;
         n=G.ListeEtudiants.size();
         for(int i=0;i<n;i++) output<<G.ListeEtudiants[i]<<endl;
         output<<endl;
         return output;
      }

};

#endif // GROUPE_H
