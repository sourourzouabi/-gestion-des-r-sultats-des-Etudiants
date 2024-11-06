#include "Groupe.h"

void Groupe::setIdGrp(string id){
this->IdGR=id;
}
void Groupe::setNiveau(string niveau){
this->Niveau=niveau;
}
void Groupe::setDiplome(string diplome){
this->Diplome=diplome;
}
void Groupe::setSpecialite(string specialite){
this->Specialite=specialite;
}
void Groupe::setNumG(int num){
this->Num_G=num;
}
void Groupe::setLM(vector<GroupeModule> gm){
this->ListeModules=gm;
}
void Groupe::setLE(vector<Etudiant> etd){
this->ListeEtudiants=etd;
}
void Groupe::Add_To_Tab_Mod(GroupeModule gp){
this->ListeModules.push_back(gp);
}
void Groupe::Add_To_Tab_Etd(Etudiant etd){
this->ListeEtudiants.push_back(etd);
}
Groupe::Groupe(string id,string niveau,string diplome,string specialite,int num,vector<GroupeModule> listeGm,vector<Etudiant> listeEtd){
setIdGrp(id);
setNiveau(niveau);
setDiplome(diplome);
setSpecialite(specialite);
setNumG(num);
this->ListeEtudiants=listeEtd;
this->ListeModules=listeGm;
}
Groupe::Groupe(){
setIdGrp(" ");
setNiveau(" ");
setDiplome(" ");
setSpecialite(" ");
setNumG(-1);
}
void Groupe::display_Groupe(){
cout<<"Id: "<<this->IdGR<<" |";
}
Groupe::~Groupe(){
}
void Groupe::read_attributes(){
string idgr,niveau,diplome,specialite ;
int num;
cin.ignore();
cout<<"Donner le niveau"<<endl;
do{
getline(cin,niveau);
}while(niveau.length()>10);
cout<<"Donner le diplome"<<endl;
do{
getline(cin,diplome);
}while(diplome.length()>10);
cout<<"Donner la specialite "<<endl;
do{
getline(cin,specialite);
}while(specialite.length()>10);
cout<<"Donner le num du groupe"<<endl;
cin>>num;

setNiveau(niveau);
setDiplome(diplome);
setSpecialite(specialite);
setNumG(num);

}
