#include "Menu.h"
#include "GestionClasses.h"
#include "Utilities.h"
//Layer 0
int Main_Menu(GestionClasses& g1){
int choix=0;

do{
cout<<"0-quiter l'application              "<<endl;
cout<<"1-interface etudiants               "<<endl;
cout<<"2-interface enseignant/ modules     "<<endl;
cout<<"3-affichage                         "<<endl;
cout<<">>choisir                          ";
cin>>choix;
switch(choix){
case 0:break;
case 1:choix=Interface_Etudiant(g1);break;
case 2:choix=Interface_Enseignant_Modules(g1);break;
case 3:choix=-1;Affichage(g1);break;
default:cout<<"erreur de votre choix"<<endl;break;
}
}while(choix!=0);
return 0;
}
//Layer 1 p1
int Interface_Etudiant(GestionClasses& g1){
int choix;
do{
cout<<"1-gestion etudiants                 "<<endl;
cout<<"2-gestion groupes                   "<<endl;
cout<<"3-gestion notes                     "<<endl;
cout<<"4-retour                            "<<endl;
cout<<">>choisir                          ";
cin>>choix;
switch(choix){
case 1:choix=Interface_Gestion_Etudiant(g1);break;
case 2:choix=Interface_Gestion_Groupes(g1);break;
case 3:choix=Interface_Gestion_Notes(g1);break;
case 4:return -1;break;
default:cout<<"erreur de choix"<<endl;break;
}
}while(choix!=0);
return 0;
}
int Interface_Enseignant_Modules(GestionClasses& g1){
int choix;
do{
cout<<"1-gestion enseignant                "<<endl;
cout<<"2-gestion matieres                  "<<endl;
cout<<"3-gestion groupes modules           "<<endl;
cout<<"4-retour                            "<<endl;
cout<<">>choisir                         ";
cin>>choix;
switch(choix){
case 1:choix=Interface_Gestion_Enseignant(g1);break;
case 2:choix=Interface_Gestion_Matiere(g1);break;
case 3:choix=Interface_Gestion_GpM(g1);break;
case 4:return -1;break;
default:cout<<"erreur de  votre choix"<<endl;break;
}
}while(choix!=0);
return 0;}
//layer 2
//partie 1
int Interface_Gestion_Etudiant(GestionClasses& g1){
int choix,num;
Etudiant e;
cout<<"1-ajouter un etudiant               "<<endl;
cout<<"2-mettre a jour info etudiant       "<<endl;
cout<<"3-effacer un etudiant               "<<endl;
cout<<"4-afficher tous les etudiants       "<<endl;
cout<<"5-retour                            "<<endl;
cout<<">>choisir                          ";
cin>>choix;
switch(choix){
case 1:
choix=-1;
cout <<"Donner un numero d'inscription ";
do{
cin>>num;
}
while(num<10000||num>99999);
if(Verifier_Exist_Etudiant(g1.getEtuds(),num)!=-1)cout<<"l'etudiant existe deja!"<<endl;
else{
e.setNum(num);
e.read_Attributes();
g1.AddEtudiant(e);
}
break;
case 2:
choix=-1;
cout <<"Donner le numero de l'etudiant a modifier";
cin>>num;
if(Verifier_Exist_Etudiant(g1.getEtuds(),num)!=-1){
cout<<"�tudiant trouver, veuillez saisir les nouvelles informations"<<endl;
e.setNum(num);
e.read_Attributes();
g1.UpdateEtudiant(num,e);
}
break;
case 3:
choix=-1;
cout <<"Donner le numero de l'�tudiant a suprimer";
cin>>num;
g1.DeleteEtudiant(num);
break;
case 4:
choix=-1;
cout<<"Les etudiant enregistrer sont"<<endl;
g1.Display_Etd();
break;
case 5:return -1;break;
default:cout<<"erreur de votre choix"<<endl;break;
}
return choix;
}
int Interface_Gestion_Groupes(GestionClasses& g1){
    int choix,i,num,j;
    string idgr,idgm;
    Groupe grp;
    vector<Groupe> lgrp=g1.getGrps();
    vector<Etudiant> letd=g1.getEtuds();
    vector<GroupeModule> lgm=g1.getGrpMs();

cout<<"1-ajouter un groupe                "<<endl;
cout<<"2-mettre a jour info groupe        "<<endl;
cout<<"3-effacer un groupe                 "<<endl;
cout<<"4-ajouter un groupe module          "<<endl;
cout<<"5-ajouter un etudiant               "<<endl;
cout<<"6-afficher tous les groupes         "<<endl;
cout<<"7-retour                            "<<endl;
cout<<">>choisir:                           ";
cin>>choix;
switch(choix){
case 1:
choix=-1;
cout <<"Donner un id du groupe";
cin.ignore();
getline(cin,idgr);
if(Verifier_Exist_Groupe(g1.getGrps(),idgr)!=-1)cout<<"le groupe existe deja"<<endl;
else{
grp.setIdGrp(idgr);
grp.read_attributes();
g1.AddGroupe(grp);
}
break;
case 2:
choix=-1;
cout <<"Donner l'id du groupe a modifier";
cin.ignore();
getline(cin,idgr);
i=Verifier_Exist_Groupe(g1.getGrps(),idgr);
if(i!=-1){
cout<<"groupe trouver, veuillez saisir les nouvelles informations"<<endl;
grp.setIdGrp(idgr);
grp.read_attributes();
grp.setLE(lgrp[i].getListeEtudiant());
grp.setLM(lgrp[i].getListeModule());
g1.UpdateGroupe(idgr,grp);
}
break;
case 3:
choix=-1;
cout <<"Donner l'id du groupe a suprimer";
cin.ignore();
getline(cin,idgr);
g1.DeleteGroupe(idgr);
break;
case 4:
cin.ignore();
choix=-1;
cout <<"Donner l'id du groupe";
getline(cin,idgr);
j=Verifier_Exist_Groupe(lgrp,idgr);
if(j!=-1){
grp=lgrp[j];
cout<<"donner l'id du groupe module pour l'ajouter";
getline(cin,idgm);
i=Verifier_Exist_GroupeModule(lgm,idgm);
if(i!=-1){
grp.Add_To_Tab_Mod(lgm[i]);
g1.UpdateGroupe(idgr,grp);
}else{
cout<<"Groupe module existe pas!"<<endl;
}
}else{
cout<<"Groupe existe pas!"<<endl;
}
break;
case 5:
choix=-1;
cout <<"Donner l'id du groupe";
cin.ignore();
getline(cin,idgr);
j=Verifier_Exist_Groupe(lgrp,idgr);
if(j!=-1){
grp=lgrp[j];
cout<<"donner le numero de l'etudiant pour l'ajouter";
cin>>num;
i=Verifier_Exist_Etudiant(letd,num);
if(i!=-1){
grp.Add_To_Tab_Etd(letd[i]);
g1.UpdateGroupe(idgr,grp);
}else{
cout<<"etudiant existe pas!"<<endl;
}
}else{
cout<<"Groupe existe pas!"<<endl;
}
break;
case 6:
choix=-1;
cout<<"Les groupes enregistrer sont"<<endl;
g1.Display_Grp();
break;
case 7:return -1;break;
default:cout<<"erreur de votre choix"<<endl;break;
}
return choix;
}
int Interface_Gestion_Notes(GestionClasses& g1){
int choix;
int i,j,num;
string idmat,type;
vector<Etudiant> etd=g1.getEtuds();
vector<Matiere> mat=g1.getMats();
Note note;
cout<<"1-ajouter une note                  "<<endl;
cout<<"2-mettre a jour info note           "<<endl;
cout<<"3-effacer une note                  "<<endl;
cout<<"4-afficher tous les notes           "<<endl;
cout<<"5-retour                            "<<endl;
cout<<">>choisir:                           ";
cin>>choix;
switch(choix){
case 1:
choix=-1;
cout <<"Donner le numero de l'�tudiant";
cin>>num;
i=Verifier_Exist_Etudiant(etd,num);
if(i!=-1){
cout<<"etudiant trouver!"<<endl;
cout <<"Donner l'id du matiere";
cin.ignore();
getline(cin,idmat);
j=Verifier_Exist_Matiere(mat,idmat);
if(j!=-1){
cout<<"matiere trouver!"<<endl;
cout <<"Donner le type du note";
//controle de saisie
cin.ignore();
getline(cin,type);
//
if(Verifier_Exist_Note(g1.getNotes(),mat[j],etd[i],type)!=-1)cout<<"cette note existe deja!"<<endl;
else{
note.setType(type);
note.setEtudiant(etd[i]);
note.setMatiere(mat[j]);
note.read_attributes();
g1.AddNote(note);
}
}else{
cout<<"matiere n'existe pas!"<<endl;
}
}else{
cout<<"etudiant n'existe pas!"<<endl;
}
break;
case 2:
choix=-1;
cout <<"Donner le numero de l'�tudiant pour modifier la note";
cin>>num;
i=Verifier_Exist_Etudiant(etd,num);
if(i!=-1){
cout <<"Donner l'id du matiere pour modifier la note";
cin.ignore();
getline(cin,idmat);
j=Verifier_Exist_Matiere(mat,idmat);
if(j!=-1){
cout<<"matiere trouver!"<<endl;
cout <<"Donner le type du note";
//controle de saisie
cin.ignore();
getline(cin,type);
//
if(Verifier_Exist_Note(g1.getNotes(),mat[j],etd[i],type)==-1)cout<<"cette note n'existe pas!"<<endl;
else{
note.setType(type);
note.setEtudiant(etd[i]);
note.setMatiere(mat[j]);
note.read_attributes();
g1.UpdateNote(mat[j],etd[i],type,note);
}
}else{
cout<<"id matier erronee!"<<endl;
}
}else{
cout<<"numero etudiant erronee!"<<endl;
}
break;
case 3:
choix=-1;
cout <<"Donner le numero de l'�tudiant pour suprimer la note";
cin>>num;
i=Verifier_Exist_Etudiant(etd,num);
if(i!=-1){
cout <<"Donner l'id du matiere pour suprimer la note";
cin.ignore();
getline(cin,idmat);
j=Verifier_Exist_Matiere(mat,idmat);
if(j!=-1){
cout<<"matiere trouver!"<<endl;
cout <<"Donner le type du note";
//controle de saisie
cin.ignore();
getline(cin,type);
//
if(Verifier_Exist_Note(g1.getNotes(),mat[j],etd[i],type)==-1)cout<<"cette note n'existe pas!"<<endl;
else{
g1.DeleteNote(mat[j],etd[i],type);
}
}else{
cout<<"id matier erronee!"<<endl;
}
}else{
cout<<"numero etudiant erronee!"<<endl;
}
break;
case 4:
choix=-1;
cout<<"Les notes enregistrer sont"<<endl;
g1.Display_Note();
break;
case 5:return -1;break;
default:cout<<"erreur de votre  choix"<<endl;break;
}
return choix;
}
//layer 2
//partie 2
int Interface_Gestion_Enseignant(GestionClasses& g1){
    int choix,cnss;
    Enseignant e;
cout<<"1-ajouter un enseignant             "<<endl;
cout<<"2-mettre a jour info enseignant     "<<endl;
cout<<"3-effacer un enseignant             "<<endl;
cout<<"4-afficher tous les enseignants     "<<endl;
cout<<"5-retour                            "<<endl;
cout<<">>choisir:                           ";
cin>>choix;
switch(choix){
case 1:
choix=-1;
cout <<"Donner un numero cnss";
do{
cin>>cnss;
}while(cnss<10000||cnss>99999);
if(Verifier_Exist_Enseignant(g1.getEns(),cnss)!=-1)cout<<"l'enseignant existe deja!"<<endl;
else{
e.setCnss(cnss);
e.read_Attributes();
g1.AddEnseignant(e);
}
break;
case 2:
choix=-1;
cout <<"Donner le numero de l'enseignant a modifier";
cin>>cnss;
if(Verifier_Exist_Enseignant(g1.getEns(),cnss)!=-1){
cout<<"enseignant trouver, veuillez saisir les nouvelles informations"<<endl;
e.setCnss(cnss);
e.read_Attributes();
g1.UpdateEnseignant(cnss,e);
}else{
cout<<"enseignant existe pas!"<<endl;
}
break;
case 3:
choix=-1;
cout <<"Donner le numero de l'enseignant a suprimer";
cin>>cnss;
g1.DeleteEnseignant(cnss);
break;
case 4:
choix=-1;
cout<<"Les enseignants enregistrer sont"<<endl;
g1.Display_Ens();
break;
case 5:return -1;break;
default:cout<<"erreur de votre choix"<<endl;break;
}
return choix;
}
int Interface_Gestion_GpM(GestionClasses& g1){
int choix,i,j;
string id,idmat;
GroupeModule gm;
vector<GroupeModule> lgm=g1.getGrpMs();
vector<Matiere> lmat=g1.getMats();
cout<<"1-ajouter un groupe module         "<<endl;
cout<<"2-mettre a jour info G. module      "<<endl;
cout<<"3-effacer un G. module              "<<endl;
cout<<"4-ajouter une matiere               "<<endl;
cout<<"5-afficher tous les G. modules      "<<endl;
cout<<"6-retour                            "<<endl;
cout<<">>choisir:                           ";
cin>>choix;
switch(choix){
case 1:
choix=-1;
cout <<"Donner un id du groupe module";
cin.ignore();
getline(cin,id);
if(Verifier_Exist_GroupeModule(g1.getGrpMs(),id)!=-1)cout<<"le groupe module existe deja!"<<endl;
else{
gm.setIdGM(id);
gm.read_attributes();
g1.AddGroupeModule(gm);
}
break;
case 2:
choix=-1;
cout <<"Donner l'id du groupe module a modifier";
cin.ignore();
getline(cin,id);
i=Verifier_Exist_GroupeModule(g1.getGrpMs(),id);
if(i!=-1){
cout<<"groupe module trouver, veuillez saisir les nouvelles informations"<<endl;
gm.setIdGM(id);
gm.read_attributes();
gm.setLMat(lgm[i].getListeMatiere());
g1.UpdateGroupeModule(id,gm);
}
break;
case 3:
choix=-1;
cout <<"Donner l'id du groupe module a suprimer";
cin.ignore();
getline(cin,id);
g1.DeleteGroupeModule(id);
break;
case 4:
choix=-1;
cin.ignore();
cout <<"Donner l'id du groupe module";
getline(cin,id);
i=Verifier_Exist_GroupeModule(g1.getGrpMs(),id);
if(i!=-1){
gm=lgm[i];
cout<<"Donner l'id du matiere pour l'ajouter"<<endl;
getline(cin,idmat);
j=Verifier_Exist_Matiere(lmat,idmat);
if(j!=-1){
gm.add_To_Table_Mat(lmat[j]);
g1.UpdateGroupeModule(id,gm);
}else{
cout<<"matiere existe pas!"<<endl;
}
}else{
cout<<"groupe module existe pas"<<endl;
}
break;
break;
case 5:
choix=-1;
cout<<"Les groupes modules enregistrer sont"<<endl;
g1.Display_GrpM();
break;
break;
case 6:return -1;break;
default:cout<<"erreur de votre choix"<<endl;break;
}
return choix;
}
int Interface_Gestion_Matiere(GestionClasses& g1){
int choix,cnss,i;
string id;
Matiere mat;
vector<Matiere> lmat=g1.getMats();
vector<Enseignant> lens=g1.getEns();
cout<<"1-ajouter une matiere               "<<endl;
cout<<"2-mettre a jour info matiere        "<<endl;
cout<<"3-effacer une matiere               "<<endl;
cout<<"4-afficher tous les matieres        "<<endl;
cout<<"5-retour                            "<<endl;
cout<<">>choisir                           ";
cin>>choix;
switch(choix){
case 1:
choix=-1;
cout <<"Donner un id d'une matiere";
cin.ignore();
getline(cin,id);
if(Verifier_Exist_Matiere(lmat,id)!=-1)cout<<"la matiere existe deja!"<<endl;
else{
cout << "donner le num de l'enseignant de cette matiere";
cin>>cnss;
i=Verifier_Exist_Enseignant(g1.getEns(),cnss);
if(i!=-1){
mat.setId(id);
mat.setEns(lens[i]);
mat.read_attributes();
g1.AddMatiere(mat);
}else{
cout<<"cnss enseignant errone"<<endl;}
}
break;
case 2:
choix=-1;
cout <<"Donner l'id du matiere a modifier";
cin.ignore();
getline(cin,id);
i=Verifier_Exist_Matiere(lmat,id);
if(i==-1)cout<<"la matiere n'existe pas!"<<endl;
else{
mat.setId(id);
mat.setEns(lmat[i].getEnseignant());
mat.read_attributes();
g1.UpdateMatiere(id,mat);
}
break;
case 3:
choix=-1;
cout <<"Donner l'id du matiere a suprimer";
cin.ignore();
getline(cin,id);
g1.DeleteMatiere(id);
break;
case 4:
choix=-1;
cout<<"Les Matieres enregistrer se sont"<<endl;
g1.Display_Mat();
break;
case 5:return -1;break;
default:cout<<"erreur de votre choix"<<endl;break;
}
return choix;
}

//layer 1 p2
void Affichage(GestionClasses& g1){
    string idg;
cout<<"choisir l'id d'un groupe pour l'affichage"<<endl;
cout<< "les Ids sont"<<endl;
g1.Display_GrpID();
cout<<"saisir id ";
cin.ignore();
getline(cin,idg);
cout<<endl;
g1.Afficher_PV(idg);
cout<<endl;
}
