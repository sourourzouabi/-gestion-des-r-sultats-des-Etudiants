#include "Personne.h"


void Personne::setID(int id){
this->Id=id;
}
void Personne::setNom(string nom){
this->Nom=nom;
}
void Personne::setPrenom(string prenom){
this->Prenom=prenom;
}
void Personne::setEmail(string email){
this->Email=email;
}
Personne::Personne()
{
setID(-1);
setNom(" ");
setPrenom(" ");
setEmail(" ");
}
void Personne::display(){
cout<<"Nom "<<this->Nom<<" / Prenom "<<this->Prenom<<" / Email "<<this->Email<<endl;
}
Personne::Personne(int id,string nom,string prenom,string email)
{
setID(id);
setNom(nom);
setPrenom(prenom);
setEmail(email);
}
Personne::~Personne()
{

}

