#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include <iostream>
#include "Personne.h"
#include<string>
#include<regex>
#include<iomanip>
using namespace std;

class Enseignant : public Personne
{
        private:
        int Cnss;
        public:
        Enseignant();
        Enseignant(int,int,string,string,string);
        virtual ~Enseignant();
        void setCnss(int cnss);
        int getCnss(){return Cnss;}
        void display_cnss();
        void read_Attributes();
        friend ostream &operator<<( ostream &output, const Enseignant &E ) {
         output <<setw(11)<<"Cnss"<<" |"<<setw(11)<<"Nom"<<" |"<<setw(11)<<"Prenom"<<endl;
         output <<setw(11)<<E.Cnss<<" |"<<setw(11)<<E.Nom<<" |"<<setw(11)<<E.Prenom;
         output<<endl;
         return output;
      }
};

#endif // ENSEIGNANT_H
