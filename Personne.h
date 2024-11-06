#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Personne
{
     protected:
     int Id;
     string Nom;
     string Prenom;
     string Email;

    public:
        Personne();
        Personne(int id,string nom,string prenom,string email);
        virtual ~Personne();
        void setID(int id);
        void setNom(string nom);
        void setPrenom(string prenom);
        void setEmail(string email);
        int getId(){return Id;}
        string getNom(){return Nom;}
        string getPrenom(){return Prenom;}
        string getEmail(){return Email;}

        void display();

};

#endif // PERSONNE_H
