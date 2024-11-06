#include "GestionClasses.h"

//Gestion sur class Enseignant
void GestionClasses::AddEnseignant(Enseignant ens){
 this->Enseignants.push_back(ens);
 }
void GestionClasses::Display_Ens(){
vector<Enseignant>::iterator it;
for(it=this->Enseignants.begin();it<this->Enseignants.end();it++) cout<<(*it)<<endl;
}
void GestionClasses::DeleteEnseignant(int cnss){
vector<Enseignant>::iterator it;
int found=0;
for(it=this->Enseignants.begin();it<this->Enseignants.end();it++){
    if((*it).getCnss()==cnss){
        this->Enseignants.erase(it);
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::UpdateEnseignant(int cnss,Enseignant ens){
vector<Enseignant>::iterator it;
int found=0;
for(it=this->Enseignants.begin();it<this->Enseignants.end();it++){
    if((*it).getCnss()==cnss){
        *it=ens;
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}

//Gestion sur class Etudiant
void GestionClasses::AddEtudiant(Etudiant etd){
this->Etudiants.push_back(etd);
}
void GestionClasses::DeleteEtudiant(int num){
vector<Etudiant>::iterator it;
int found=0;
for(it=this->Etudiants.begin();it<this->Etudiants.end();it++){
    if((*it).getNum()==num){
        this->Etudiants.erase(it);
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::UpdateEtudiant(int num,Etudiant etd){
    vector<Etudiant>::iterator it;
int found=0;
for(it=this->Etudiants.begin();it<this->Etudiants.end();it++){
    if((*it).getNum()==num){
        *it=etd;
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::Display_Etd(){
vector<Etudiant>::iterator it;
for(it=this->Etudiants.begin();it<this->Etudiants.end();it++) cout<<(*it)<<endl;
}
//Gestion sur class Groupe
void GestionClasses::AddGroupe(Groupe grp){
this->Groupes.push_back(grp);
}
void GestionClasses::DeleteGroupe(string idgrp){
vector<Groupe>::iterator it;
int found=0;
for(it=this->Groupes.begin();it<this->Groupes.end();it++){
    if((*it).getIdGR().compare(idgrp)==0){
        this->Groupes.erase(it);
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::UpdateGroupe(string idgrp, Groupe grp){
vector<Groupe>::iterator it;
int found=0;
for(it=this->Groupes.begin();it<this->Groupes.end();it++){
    if((*it).getIdGR().compare(idgrp)==0){
        *it=grp;
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::Display_Grp(){
vector<Groupe>::iterator it;
for(it=this->Groupes.begin();it<this->Groupes.end();it++) cout<<(*it)<<endl;
}
void GestionClasses::Display_GrpID(){
vector<Groupe>::iterator it;
for(it=this->Groupes.begin();it<this->Groupes.end();it++) {
    (*it).display_Groupe();
}
cout<<endl;
}
//gestion sur class groupemodule
void GestionClasses::AddGroupeModule(GroupeModule grpM){
this->GroupeModules.push_back(grpM);
}
void GestionClasses::DeleteGroupeModule(string idgrpm){
vector<GroupeModule>::iterator it;
int found=0;
for(it=this->GroupeModules.begin();it<this->GroupeModules.end();it++){
    if((*it).getIdGm().compare(idgrpm)==0){
        this->GroupeModules.erase(it);
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::UpdateGroupeModule(string idgrpm,GroupeModule grpM){
vector<GroupeModule>::iterator it;
int found=0;
for(it=this->GroupeModules.begin();it<this->GroupeModules.end();it++){
    if((*it).getIdGm().compare(idgrpm)==0){
        *it=grpM;
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::Display_GrpM(){
vector<GroupeModule>::iterator it;
for(it=this->GroupeModules.begin();it<this->GroupeModules.end();it++) cout<<(*it)<<endl;
}
//Gestion sur class Matiere
void GestionClasses::AddMatiere(Matiere mat){
this->Matieres.push_back(mat);
}
void GestionClasses::DeleteMatiere(string idmat){
vector<Matiere>::iterator it;
int found=0;
for(it=this->Matieres.begin();it<this->Matieres.end();it++){
    if((*it).getIdMat().compare(idmat)==0){
        this->Matieres.erase(it);
        found=1;
        break;
    }
}
    if(found==0) cout<<"Not found"<<endl;
}
void GestionClasses::UpdateMatiere(string idmat,Matiere mat){
vector<Matiere>::iterator it;
int found=0;
for(it=this->Matieres.begin();it<this->Matieres.end();it++){
    if((*it).getIdMat().compare(idmat)==0){
        *it=mat;
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::Display_Mat(){
vector<Matiere>::iterator it;
for(it=this->Matieres.begin();it<this->Matieres.end();it++) cout<<(*it)<<endl;
}
//Gestion sur class Note
void GestionClasses::AddNote(Note note){
this->Notes.push_back(note);
}
void GestionClasses::DeleteNote(Matiere mat,Etudiant etd,string type){
vector<Note>::iterator it;
int found=0;
for(it=this->Notes.begin();it<this->Notes.end();it++){

    if(((*it).getMat().getIdMat().compare(mat.getIdMat())==0)&&((*it).getEtu().getNum()==etd.getNum())&&((*it).getType().compare(type)==0)){
        this->Notes.erase(it);
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::UpdateNote(Matiere mat,Etudiant etd,string type,Note note){
vector<Note>::iterator it;
int found=0;
for(it=this->Notes.begin();it<this->Notes.end();it++){
    if(((*it).getMat().getIdMat().compare(mat.getIdMat())==0)&&((*it).getEtu().getNum()==etd.getNum())&&((*it).getType().compare(type)==0)){
        *it=note;
        found=1;
        break;
    }
}
    if(found==0) cout<<"not found"<<endl;
}
void GestionClasses::Display_Note(){
vector<Note>::iterator it;
for(it=this->Notes.begin();it<this->Notes.end();it++) cout<<(*it)<<endl;
}
//Fonction de calcules et resultats
double GestionClasses::moyMat(Matiere mat,Etudiant etd){
double sommeNote=0;
int nombreNote=0;
vector<Note>::iterator it;
int found=0;
for(it=this->Notes.begin();it<this->Notes.end();it++){
    if(((*it).getMat().getIdMat().compare(mat.getIdMat())==0)&&((*it).getEtu().getNum()==etd.getNum())){
        nombreNote++;
        sommeNote+=(*it).getNote();
        found=1;
    }
}
    if(found==0) {
    cout<<"not found"<<endl;
    return 0;}
    else{return sommeNote/nombreNote;}

}
double GestionClasses::moyGM(Etudiant etd,string idgm){
double sommeMoyMat=0;
double sommeCoef=0;
vector<Matiere> mat;
int found=0;
int k,n=this->GroupeModules.size();
for(int i=0;i<n;i++){
    if(this->GroupeModules[i].getIdGm().compare(idgm)==0){
        found=1;
        k=i;
        break;
    }
}
if(found==0){
cout<<"not found"<<endl;
return 0;
}else{
mat=this->GroupeModules[k].getListeMatiere();
for(int j=0;j<mat.size();j++){
sommeMoyMat+=moyMat(mat[j],etd)*mat[j].getCoef();
sommeCoef+=mat[j].getCoef();
}
return sommeMoyMat/sommeCoef;
}
}
double GestionClasses::moyenne(Etudiant etd){
double sommeGm=0;
double sommeCoef=0;
vector<GroupeModule> lgm=this->GroupeModules;

for(int i=0;i<lgm.size();i++){
sommeGm+=lgm[i].getCoef()*moyGM(etd,lgm[i].getIdGm());
sommeCoef+=lgm[i].getCoef();
}
return sommeGm/sommeCoef;
}
string GestionClasses::resultat(Etudiant etd){
double moy=moyenne(etd);
if(moy>10){
    return "Admis";
}else{
return "Ajourne";
}
}
string    GestionClasses::mention(Etudiant etd){
double moy=moyenne(etd);
if(moy>10 && moy<=12){
return "Passable";
}else if(moy>12 &&  moy<=14){
return "Assez bien";
}else if(moy>14 && moy<=16){
return "Bien";
}else if(moy>16 && moy<=18){
return "Tres bien";
}else if(moy>18 && moy<=20){
return "Exellent";}
else{return "Ajourne";
}
}









void GestionClasses::Afficher_PV(string idG){
//declarations
const int CW=12;
int indexG=Verifier_Exist_Groupe(this->Groupes,idG);
vector<GroupeModule> gm=this->Groupes[indexG].getListeModule();
vector<Etudiant> etd=this->Groupes[indexG].getListeEtudiant();
int n=gm.size(),n1,n2;
vector<Matiere> mat;
//
cout <<left<< setw(CW*3+3)<<" ";

for(int i=0;i<n;i++){
cout<<"|"<<setw(CW*(gm[i].getListeMatiere().size()+1)+gm[i].getListeMatiere().size())<<gm[i].getNomGm();
}

cout<<"|";
cout <<left<<setw(CW/2)<<"M";
cout<<"|";
cout <<left<<setw(CW)<<"R";
cout<<"|";
cout <<left<<setw(CW)<<"M";
cout<<"|"<<endl;
cout <<left<<setw(CW*3+3)<<" ";

for(int i=0;i<n;i++){
cout<<"|"<<setw(CW*(gm[i].getListeMatiere().size()+1)+gm[i].getListeMatiere().size())<<gm[i].getCoef();
}
//espace moyenne
cout<<"|";
cout <<left<<setw(CW/2)<<"O";
cout<<"|";
cout <<left<<setw(CW)<<"E";
cout<<"|";
cout <<left<<setw(CW)<<"E";
cout<<"|"<<endl;


cout <<left<< setw(CW*3+3)<<" ";
for(int i=0;i<n;i++){
    mat=gm[i].getListeMatiere();
    n1=mat.size();
    for(int j=0;j<n1;j++){
     cout<<"|"<<setw(CW)<<mat[j].getNomMat();
    }
    cout<<"|"<<setw(CW-1)<<"moyenne  ";

}
cout<<"|";
cout <<left<<setw(CW/2)<<"y";
cout<<"|";
cout <<left<<setw(CW)<<"S";
cout<<"|";
cout <<left<<setw(CW)<<"N";
cout<<"|"<<endl;

cout<<setw(CW*3+3)<<"|Liste des etudiant";
for(int i=0;i<n;i++){
    mat=gm[i].getListeMatiere();
    n1=mat.size();
    for(int j=0;j<n1;j++){
     cout<<"|"<<setw(CW)<<mat[j].getCoef();
    }

     cout<<"|"<<setw(CW)<<"";
}
cout<<"|";
cout <<left<<setw(CW/2)<<".";
cout<<"|";
cout <<left<<setw(CW)<<".";
cout<<"|";
cout <<left<<setw(CW)<<".";
cout<<"|"<<endl;
n=etd.size();
for(int i=0;i<n;i++){
cout<<"|"<<setw(CW)<<etd[i].getNum()<<"|"<<setw(CW)<<etd[i].getNom()<<"|"<<setw(CW)<<etd[i].getPrenom();
    n1=gm.size();
        for(int j=0;j<n1;j++){
             mat=gm[j].getListeMatiere();
             n2=mat.size();
              for(int k=0;k<n2;k++) {
                cout<<"|"<<setw(CW)<<moyMat(mat[k],etd[i]);
              }
        cout<<"|"<<setprecision(3)<<setw(CW)<<moyGM(etd[i],gm[j].getIdGm());
        }
        cout<<"|";
        cout <<left<<setw(CW/2)<<setprecision(3)<<moyenne(etd[i]);
        cout<<"|";
        cout <<left<<setw(CW)<<resultat(etd[i]);
        cout<<"|";
        cout <<left<<setw(CW)<<mention(etd[i]);
        cout<<"|"<<endl;

}

//espace

}









//constructeurs et destructeurs
GestionClasses::GestionClasses(){
    //ctor
}
GestionClasses::~GestionClasses(){
    //dtor
}
//Gestion des fichiers

void GestionClasses::connect_db(){
     read_Etudiants();
     read_Enseignants();
     read_Matieres();
     read_notes();
     read_Groupes_Module();
     read_Groupes();
}
void GestionClasses::update_db(){
write_Enseignants();
write_Etudiants();
write_Groupes();
write_Groupes_Module();
write_notes();
write_Matieres();
}

void GestionClasses::read_Enseignants(){
    ifstream file;
    file.open("./db/Enseignants.txt");
    this->Enseignants.clear();
    Enseignant e;
    int Id,Cnss;
    string Nom;
    string Prenom;
    string Email;
    if (!file)
    {
        cout << "erreur dans l'ouverture du fichier! " << endl;
    }
    while (file >> Id >> Nom >> Prenom >> Email >> Cnss)
    {
        e.setEmail(Email);
        e.setID(Id);
        e.setNom(Nom);
        e.setPrenom(Prenom);
        e.setCnss(Cnss);
        this->Enseignants.push_back(e);
    }
    file.close();
}
void GestionClasses::read_Etudiants(){
    ifstream file;
    file.open("./db/Etudiants.txt");
    this->Etudiants.clear();
    Etudiant e;
    int Id,Num_insc;
    string Nom;
    string Prenom;
    string Email;
    if (!file)
    {
        cout << "erreur dans l'ouverture du fichier! " << endl;
    }
    while (file >> Id >> Nom >> Prenom >> Email >> Num_insc)
    {
        e.setEmail(Email);
        e.setID(Id);
        e.setNom(Nom);
        e.setPrenom(Prenom);
        e.setNum(Num_insc);
        this->Etudiants.push_back(e);
    }
    file.close();
}
void GestionClasses::read_Groupes(){
        string IdGR,IdGM;
        string Niveau;
        string Diplome;
        string Specialite ;
        int Num_G,Num;
        vector <GroupeModule> ListeModules ;
        vector <Etudiant> ListeEtudiants;
    ifstream file,file1,file2;
    file.open("./db/Groupes.txt");


    this->Groupes.clear();
    Groupe gp;
    int index,index1;
    if (!file)
    {
        cout << "erreur dans l'ouverture du fichier! " << endl;
    }
    while (file >> IdGR>> Niveau >> Diplome >> Specialite >> Num_G)
    {
        gp.setIdGrp(IdGR);
        gp.setNiveau(Niveau);
        gp.setDiplome(Diplome);
        gp.setSpecialite(Specialite);
        gp.setNumG(Num_G);
        this->Groupes.push_back(gp);
    }
    file.close();
    file1.open("./db/G/ListeEtd.txt");
    if (!file1)
    {
        cout << "erreur dans l'ouverture du fichier 1! " << endl;
    }
    while (file1 >> IdGR >> Num)
    {
        index=Verifier_Exist_Etudiant(this->Etudiants,Num);
        index1=Verifier_Exist_Groupe(this->Groupes,IdGR);
        this->Groupes[index1].Add_To_Tab_Etd(this->Etudiants[index]);
    }
     file1.close();
     file2.open("./db/G/ListeGm.txt");
     if (!file2)
    {
        cout << "erreur dans l'ouverture du fichier 2! " << endl;
    }
    while (file2 >> IdGR >> IdGM)
    {
        index=Verifier_Exist_GroupeModule(this->GroupeModules,IdGM);
        index1=Verifier_Exist_Groupe(this->Groupes,IdGR);
        this->Groupes[index1].Add_To_Tab_Mod(this->GroupeModules[index]);
    }
    file2.close();
}
void GestionClasses::read_Groupes_Module(){
        string IdGM ;
        string NomGM ;
        string Idmat;
        double CoefGM ;
        vector <Matiere> ListeMat ;
        ifstream file,file1;
        file.open("./db/GroupeModules.txt");
        file1.open("./db/GM/ListeMat.txt");
        this->GroupeModules.clear();
        GroupeModule gm;
        int index,index1;
    if (!file)
    {
        cout << "erreur dans l'ouverture du fichier! " << endl;
    }
    while (file >> IdGM >> NomGM >> CoefGM)
    {
        gm.setIdGM(IdGM);
        gm.setNomGm(NomGM);
        gm.setCoef(CoefGM);
        this->GroupeModules.push_back(gm);
    } if (!file1)
    {
        cout << "erreur dans l'ouverture du fichier! " << endl;
    }
    while (file1 >> IdGM >> Idmat)
    {
        index=Verifier_Exist_Matiere(this->Matieres,Idmat);
        index1=Verifier_Exist_GroupeModule(this->GroupeModules,IdGM);
        this->GroupeModules[index1].add_To_Table_Mat(this->Matieres[index]);
    }
    file.close();
    file1.close();
}
void GestionClasses::read_Matieres(){
    ifstream file;
    file.open("./db/Matieres.txt");
    this->Matieres.clear();
    Matiere mat;
    int Cnss,index;
    string IdMat;
    string NomMat;
    double Coef;
    if (!file)
    {
        cout << "erreur dans l'ouverture du fichier! " << endl;
    }
    while (file >>Cnss >> IdMat >> NomMat >> Coef)
    {
        index=Verifier_Exist_Enseignant(this->Enseignants,Cnss);
        mat.setId(IdMat);
        mat.setNom(NomMat);
        mat.setCoef(Coef);
        mat.setEns(this->Enseignants[index]);
        this->Matieres.push_back(mat);
    }
    file.close();
}
void GestionClasses::read_notes(){
    ifstream file;
    file.open("./db/Notes.txt");
    this->Notes.clear();
    Note note;
    int Num,index1,index2;
    double _Note ;
    string Type,IdMat;
    if (!file)
    {
        cout << "erreur dans l'ouverture du fichier! " << endl;
    }
    while (file >>Num >> IdMat >> Type >> _Note)
    {
        index1=Verifier_Exist_Etudiant(this->Etudiants,Num);
        index2=Verifier_Exist_Matiere(this->Matieres,IdMat);
        note.setEtudiant(this->Etudiants[index1]);
        note.setMatiere(this->Matieres[index2]);
        note.setType(Type);
        note.setNote(_Note);
        this->Notes.push_back(note);
    }
    file.close();
}
void GestionClasses::write_Etudiants(){

    fstream file;
    file.open("./db/Etudiants.txt",ios::out | ios::trunc);
    int n=this->Etudiants.size();
    for(int i=0;i<n;i++){
    file << this->Etudiants[i].getId() << " " << this->Etudiants[i].getNom() << " " << this->Etudiants[i].getPrenom() << " " << this->Etudiants[i].getEmail() << " " << this->Etudiants[i].getNum() << endl;
    }
    file.close();

}
void GestionClasses::write_Enseignants(){
    fstream file;
    file.open("./db/Enseignants.txt",ios::out | ios::trunc);
    int n=this->Enseignants.size();
    for(int i=0;i<n;i++){
    file << this->Enseignants[i].getId() << " " << this->Enseignants[i].getNom() << " " << this->Enseignants[i].getPrenom() << " " << this->Enseignants[i].getEmail() << " " << this->Enseignants[i].getCnss() << endl;
    }
    file.close();

}
void GestionClasses::write_Groupes(){
    fstream file,file1;
    vector <Etudiant> etd;
    vector <GroupeModule> gm;
    file.open("./db/Groupes.txt",ios::out | ios::trunc);
    int n=this->Groupes.size();
    int n1;
    for(int i=0;i<n;i++){
    file <<this->Groupes[i].getIdGR()<<" "<<this->Groupes[i].getNiveau()<<" "<<this->Groupes[i].getDiplome()<<" "<<this->Groupes[i].getSpecialite()<< " "<<this->Groupes[i].getNumG()<< endl;
    }
    file.close();
    file1.open("./db/G/ListeEtd.txt",ios::out | ios::trunc);
    for(int i=0;i<n;i++){
    etd=this->Groupes[i].getListeEtudiant();
    n1=etd.size();
     for(int j=0;j<n1;j++){
        file1<<this->Groupes[i].getIdGR()<<" "<<etd[j].getNum()<<endl;
     }
    }
    file1.close();
    file1.open("./db/G/ListeGm.txt",ios::out | ios::trunc);
    for(int i=0;i<n;i++){
    gm=this->Groupes[i].getListeModule();
    n1=gm.size();
     for(int j=0;j<n1;j++){
        file1<<this->Groupes[i].getIdGR()<<" "<<gm[j].getIdGm()<<endl;
     }
    }
    file1.close();
}
void GestionClasses::write_Groupes_Module(){
    fstream file,file1;
    vector <Matiere> mat;
    file.open("./db/GroupeModules.txt",ios::out | ios::trunc);
    int n=this->GroupeModules.size();
    int n1;
    for(int i=0;i<n;i++){
    file <<this->GroupeModules[i].getIdGm()<<" "<<this->GroupeModules[i].getNomGm()<<" "<<this->GroupeModules[i].getCoef()<< endl;
    }
    file.close();
    file1.open("./db/GM/ListeMat.txt",ios::out | ios::trunc);
    for(int i=0;i<n;i++){
    mat=this->GroupeModules[i].getListeMatiere();
    n1=mat.size();
     for(int j=0;j<n1;j++){
        file1<<this->GroupeModules[i].getIdGm()<<" "<<mat[j].getIdMat()<<endl;
     }
    }
    file1.close();
}
void GestionClasses::write_Matieres(){
    fstream file;
    file.open("./db/Matieres.txt",ios::out | ios::trunc);
    int n=this->Matieres.size();
    for(int i=0;i<n;i++){
    Enseignant e=this->Matieres[i].getEnseignant();
    file << e.getCnss()<< " " << this->Matieres[i].getIdMat()<<" "<<this->Matieres[i].getNomMat()<<" "<<this->Matieres[i].getCoef()<<endl ;
    }
    file.close();
}
void GestionClasses::write_notes(){
     fstream file;
    file.open("./db/Notes.txt",ios::out | ios::trunc);
    int n=this->Notes.size();
    for(int i=0;i<n;i++){
    Etudiant e=this->Notes[i].getEtu();
    Matiere m=this->Notes[i].getMat();
    file << e.getNum()<< " " << m.getIdMat()<<" "<<this->Notes[i].getNote()<<" "<<this->Notes[i].getType()<<endl ;
    }
    file.close();
}
