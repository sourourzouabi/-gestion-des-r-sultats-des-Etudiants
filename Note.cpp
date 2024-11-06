#include "Note.h"

void Note::setEtudiant(Etudiant etd){
this->Etu=etd;
}
void Note::setMatiere(Matiere mat){
this->Mat=mat;
}
void Note::setType(string type){
this->Type=type;
}
void Note::setNote(double note){
this->_Note=note;
}
void Note::display_Note(){
cout<<"Type: "<<this->Type<<" | note: "<< this->_Note<<" |"<<endl;
this->Etu.display_insc();
this->Mat.display_matiere();
}
Note::Note(Matiere mat,Etudiant etd,double note,string type){
setEtudiant(etd);
setMatiere(mat);
setNote(note);
setType(type);
}
Note::Note(){
setNote(0);
setType(" ");
}
Note::~Note(){
}
void Note::read_attributes(){
double note;
cout<<"Donner la note"<<endl;
cin>>note;
setNote(note);
}
