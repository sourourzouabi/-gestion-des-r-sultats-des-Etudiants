#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <iostream>
#include<vector>
#include "Personne.h"
#include<string>
#include<regex>
#include<iomanip>
using namespace std;

class Etudiant : public Personne
{
        private:
        int Num_insc;
        public:
        Etudiant();
        Etudiant(int,int,string,string,string);
        virtual ~Etudiant();
        void setNum(int num);
        int getNum()const{return Num_insc;}
        void display_insc();
        void read_Attributes();
        friend ostream &operator<<( ostream &output, const Etudiant &E ) {
         output <<setw(11)<<"Num_insc"<<" |"<<setw(11)<<"Nom"<<" |"<<setw(11)<<"Prenom"<<endl;
         output <<setw(11)<<E.Num_insc<<" |"<<setw(11)<<E.Nom<<" |"<<setw(11)<<E.Prenom;
         output<<endl;
         return output;
      }

};

#endif // ETUDIANT_H
