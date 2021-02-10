#include "Arme.h"

Arme::Arme()
{
    setDegats(10);
    setNom("epee commune");
    setNiveauRequis(1);
    setPrix(5);
}

Arme::Arme(int d,string n,int nr, float p)
{
    setDegats(d);
    setNom(n);
    setNiveauRequis(nr);
    setPrix(p);
}

Arme::~Arme()
{
    cout <<"Mon arme a ete detruite" << endl;
}

int Arme::getDegats(){
    return degats;
}

string Arme::getNom(){
    return nom;
}

int Arme::getNiveauRequis(){
    return niveauRequis;
}

float Arme::getPrix(){
    return prix;
}

void Arme::setDegats(int d){
    degats = d;
}

void Arme::setNom(string n){
    nom = n;
}

void Arme::setNiveauRequis(int nr){
    niveauRequis = nr;
}

void Arme::setPrix(float p){
    prix = p;
}

void Arme::showInfos()
{
    cout << "Nom : "<< getNom() << endl;
    cout << "Degats : "<< getDegats() << endl;
    cout << "Niveau Requis : "<< getNiveauRequis() << endl;
    cout << "Prix : "<< getPrix() << endl;
    cout << endl;
}





