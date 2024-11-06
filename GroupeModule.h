#ifndef GROUPEMODULE_H
#define GROUPEMODULE_H
#include <iostream>
#include<string>
#include "Matiere.h"
#include<vector>
#include<iomanip>
using namespace std;
class GroupeModule
{
        private:
        string IdGM ;
        string NomGM ;
        double CoefGM ;
        vector <Matiere> ListeMat ;

        public:
        GroupeModule();
        GroupeModule(string id,string nom,double coef,vector<Matiere>tabMat);
        virtual ~GroupeModule();
        void setIdGM(string id);
        void setNomGm(string nom);
        void setCoef(double coef);
        void setLMat(vector<Matiere> mat);
        void add_To_Table_Mat(Matiere mat);
        vector<Matiere> getListeMatiere(){return this->ListeMat;}
        string getIdGm(){return this->IdGM;}
        string getNomGm(){return this->NomGM;}
        double getCoef(){return this->CoefGM;}
        void display_Gm();
        void read_attributes();
        friend ostream &operator<<( ostream &output, const GroupeModule &G ) {
         output <<setw(11)<<"ID"<<" |"<<setw(11)<<"NomGM"<<" |"<<setw(11)<<"Coef"<<endl;
         output <<setw(11)<<G.IdGM<<" |"<<setw(11)<<G.NomGM<<" |"<<setw(11)<<G.CoefGM<<endl;
         output <<"les Matieres de ce groupe module sont:"<<endl;
         int n=G.ListeMat.size();
         for(int i=0;i<n;i++) output<<G.ListeMat[i]<<endl;
         output<<endl;
         return output;
      }

};

#endif // GROUPEMODULE_H
