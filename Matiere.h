#ifndef MATIERE_H
#define MATIERE_H
#include <iostream>
#include<string>
#include<vector>
#include<iomanip>
#include "Enseignant.h"
using namespace std;
class Matiere
{
        private:
        string IdMat;
        string NomMat;
        double Coef;
        Enseignant Ens;

        public:
        Matiere();
        Matiere(string id,string nom,double coef,Enseignant ens);
        virtual ~Matiere();
        void setId(string id);
        void setNom(string nom);
        void setCoef(double Coef);
        void setEns(Enseignant ens);
        string getIdMat(){return this->IdMat;}
        string getNomMat()const{return this->NomMat;}
        double getCoef(){return this->Coef;}
        Enseignant getEnseignant(){return this->Ens;}
        void display_matiere();
        void read_attributes();
         friend ostream &operator<<( ostream &output, const Matiere &M ) {
         output <<setw(11)<<"Nom de la Matiere"<<" |"<<setw(11)<<"Coefficient "<<endl;
         output <<setw(11)<<M.NomMat<<" |"<<setw(11)<<M.Coef<<endl;
         output<< "l'enseignant de cette matiere est"<<endl;
         output<<M.Ens;
         output<<endl;
         return output;
      }

};

#endif // MATIERE_H
