#include "Enseignant.h"
void Enseignant::setCnss(int cnss){
this->Cnss=cnss;
}
Enseignant::Enseignant(){
setCnss(-1);
setID(-1);
setNom(" ");
setPrenom(" ");
setEmail(" ");
}
Enseignant::Enseignant(int cnss,int id,string nom,string prenom,string email){
setCnss(cnss);
setID(id);
setNom(nom);
setPrenom(prenom);
setEmail(email);
}
Enseignant::~Enseignant(){
}
void Enseignant::display_cnss(){
string cnss=to_string(Cnss);
cout<<"CNSS:"+cnss+" | ";
this->display();
}
void Enseignant::read_Attributes(){
int id;
string nom,prenom,email;
const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
cout<<"Donner l'id";
do{
cin>>id;
}while(id<0);
cin.ignore();
cout<<"Donner le nom"<<endl;
do{
getline(cin,nom);
}while(nom.length()>10);
cout<<"Donner le prenom"<<endl;
do{
getline(cin,prenom);
}while(prenom.length()>10);
cout<<"Donner l'email"<<endl;
do{
getline(cin,email);
}while(!regex_match(email,pattern));
getline(cin,email);
setID(id);
setNom(nom);
setPrenom(prenom);
setEmail(email);
}
