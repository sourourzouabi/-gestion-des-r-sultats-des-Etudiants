#include "GroupeModule.h"
void GroupeModule::setIdGM(string id){
this->IdGM=id;
}
void GroupeModule::setNomGm(string nom){
this->NomGM=nom;
}
void GroupeModule::setCoef(double coef){
this->CoefGM=coef;
}
void GroupeModule::setLMat(vector<Matiere> mat){
this->ListeMat=mat;
}
void GroupeModule::add_To_Table_Mat(Matiere mat){
this->ListeMat.push_back(mat);
}
GroupeModule::GroupeModule(){
    setIdGM(" ");
    setNomGm(" ");
    setCoef(0);
}
GroupeModule::GroupeModule(string id,string nom,double coef,vector<Matiere> tabMat){
    setIdGM(id);
    setNomGm(nom);
    setCoef(coef);
    this->ListeMat=tabMat;
}
GroupeModule::~GroupeModule(){
}
void GroupeModule::display_Gm(){
cout<<"idGm: "<<this->IdGM<<" |NomGM: "<<this->NomGM <<" |Coef: "<<this->CoefGM<<endl;
this->ListeMat[0].display_matiere();
}
void GroupeModule::read_attributes(){
string nom;
double coef;
cin.ignore();
cout<<"Donner le nom"<<endl;
do{
getline(cin,nom);
}while(nom.length()>10);
cout<<"Donner la coeficient"<<endl;
cin>>coef;

setNomGm(nom);
setCoef(coef);
}

