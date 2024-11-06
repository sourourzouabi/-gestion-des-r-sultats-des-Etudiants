#include "Utilities.h"

int Verifier_Exist_Etudiant(vector<Etudiant> etd,int num){
for (int i=0;i<etd.size();i++){
 if(etd[i].getNum()==num) return i;
}
return -1;
}
int Verifier_Exist_Enseignant(vector<Enseignant> ens,int cnss){
for (int i=0;i<ens.size();i++){
 if(ens[i].getCnss()==cnss) return i;
}
return -1;
}
int Verifier_Exist_Groupe(vector<Groupe> grp,string id){
for (int i=0;i<grp.size();i++){
 if(grp[i].getIdGR().compare(id)==0) return i;
}
return -1;
}
int Verifier_Exist_GroupeModule(vector<GroupeModule> grpM,string idgrpm){
    for (int i=0;i<grpM.size();i++){
    if(grpM[i].getIdGm().compare(idgrpm)==0) return i;
    }
return -1;
}
int Verifier_Exist_Matiere(vector<Matiere> mat,string id){
for (int i=0;i<mat.size();i++){
 if(mat[i].getIdMat().compare(id)==0) return i;
}
return -1;
}
int Verifier_Exist_Note(vector<Note> note,Matiere mat,Etudiant etd,string type){
for (int i=0;i<note.size();i++){
 if(note[i].getMat().getIdMat().compare(mat.getIdMat())==0 && note[i].getEtu().getNum()==etd.getNum() && note[i].getType().compare(type)==0) return i;
}
return -1;
}

