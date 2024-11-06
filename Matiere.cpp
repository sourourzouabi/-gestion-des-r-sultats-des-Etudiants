#include "Matiere.h"

void Matiere::setId(string id){
Matiere::IdMat=id;
}
void Matiere::setNom(string nom){
Matiere::NomMat=nom;
}
void Matiere::setCoef(double coef){
Matiere::Coef=coef;
}
void Matiere::setEns(Enseignant ens){
Matiere::Ens=ens;
}
Matiere::Matiere(){
    Enseignant ens;
   setId("000");
   setNom(" ");
   setCoef(0);
   setEns(ens);

}
Matiere::Matiere(string id,string nom,double coef,Enseignant ens){
   setId(id);
   setNom(nom);
   setCoef(coef);
   setEns(ens);

}
Matiere::~Matiere(){
}
void Matiere::display_matiere(){
cout<<"Id matiere  "<<this->IdMat<<" |Nom matiere "<<this->NomMat<<" |Coeficient  "<<this->Coef<<endl;
this->Ens.display_cnss();
}
void Matiere::read_attributes(){
string nom;
double coef;
cin.ignore();
cout<<"Donner le nom "<<endl;
do{
getline(cin,nom);
}while(nom.length()>10);
cout<<"Donner la coeficient "<<endl;
cin>>coef;
    setNom(nom);
    setCoef(coef);
}
