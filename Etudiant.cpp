#include "Etudiant.h"

void Etudiant::setNum(int num){
this->Num_insc=num;
}
Etudiant::Etudiant(){
setNum(-1);
setID(-1);
setNom(" ");
setPrenom(" ");
setEmail(" ");
}
Etudiant::Etudiant(int num,int id,string nom,string prenom,string email){
setNum(num);
setID(id);
setNom(nom);
setPrenom(prenom);
setEmail(email);
}
Etudiant::~Etudiant(){
}
void Etudiant::display_insc(){
string num=to_string(Num_insc);
std::cout<<"Num inscription:"<<num<<"| Nom:"<<Nom<<" | Prenom:"<<Prenom<<" | Email:"<<Email<<endl;
 }
void Etudiant::read_Attributes(){
int id;
string nom,prenom,email;
const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
cout<<"Donner l'id:";
do{
cin>>id;
}while(id<0);
cin.ignore();
cout<<"Donner le nom:(10 caracteres)"<<endl;
do{
getline(cin,nom);
}while(nom.length()>10);
cout<<"Donner le prenom:(10 caracteres)"<<endl;
do{
getline(cin,prenom);
}while(prenom.length()>10);
cout<<"Donner l'email:"<<endl;
do{
getline(cin,email);
}while(!regex_match(email,pattern));
setID(id);
setNom(nom);
setPrenom(prenom);
setEmail(email);
}
