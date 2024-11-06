#ifndef NOTE_H
#define NOTE_H
#include <iostream>
#include<vector>
#include "Matiere.h"
#include "Etudiant.h"
#include<string>
#include<iomanip>
using namespace std;
class Note
{
        private:
        Matiere Mat ;
        Etudiant Etu ;
        double _Note ;
        string Type ;

        public:
        Note();
        Note(Matiere mat,Etudiant etd,double note,string type);
        virtual ~Note();
        void setMatiere(Matiere mat);
        void setEtudiant(Etudiant etd);
        void setNote(double note);
        void setType(string type);
        Matiere getMat(){return this->Mat;}
        Etudiant getEtu(){return this->Etu;}
        double getNote(){return this->_Note;}
        string getType(){return this->Type;}
        void display_Note();
        void read_attributes();
        friend ostream &operator<<( ostream &output, const Note &N ) {
            int num=N.Etu.getNum();
            string nom=N.Mat.getNomMat();
        output <<setw(11)<<"Num Etudient"<<" /"<<setw(11)<<"Nom Matiere"<<" /"<<setw(11)<<"Type"<<" /"<<setw(11)<<"Note"<<endl;
        output <<setw(11)<<num<<" /"<<setw(11)<<nom<<" /"<<setw(11)<<N.Type<<" /"<<setw(11)<<N._Note<<endl;
        output<<endl;
         return output;
      }

};
#endif // NOTE_H
