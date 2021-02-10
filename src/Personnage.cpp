#include "Personnage.h"

Personnage::Personnage()
{
    nom ="Default";
    pv = 0;
    attack = 0;
    defence = 0;
    heal = 0;
    arme = new Arme();
}
Personnage::Personnage(string n)
{
    nom = n;
}

Personnage::~Personnage()
{
cout<<"Mon personnage a ete detruit"<<endl;
}

string Personnage::getNom() const
{
    return nom;
}

void Personnage::setNom(string n)
{
    nom = n;
}

int Personnage::getPv() const
{
    return pv;
}

void Personnage::setPv(int p)
{
    if (p > 1000 || p < 0)
    {
     cerr << "pv non autorise"<<endl;
     pv = 0;
    }
    else
    {
        pv = p;
    }
}

int Personnage::getAttack() const
{
    return attack;
}

void Personnage::setAttack(int a)
{
    if (a<0)
    {
        attack = 0;
    }
    else
    {
     attack = a;
    }
}

int Personnage::getDefence() const
{
    return defence;
}

void Personnage::setDefence(int d)
{
       if (d < 0)
    {
        defence = 0;
    }
    else
    {
     defence = d;
    }
}

int Personnage::getHeal() const
{
    return heal;
}

void Personnage::setHeal(int h)
{
    heal = h;
}

Arme* Personnage::getArme() const
{
    return arme;
}
void Personnage::setArme(Arme* a)
{
    arme = a;
}

void Personnage::showInfos() const
{
    cout << "Nom : "<< getNom() << endl;
    cout << "Pv : "<< getPv() << endl;
    cout << "Attack : "<< getAttack() << endl;
    cout << "Defence : "<< getDefence() << endl;
    cout << "Heal : "<< getHeal() << endl;
    cout << endl;
}

void Personnage::attackPlayer(Personnage* cible)
{
    cible-> setPv (cible -> getPv() - getAttack() );
}

void Personnage::healPlayer(Personnage* cible)
{
    cible-> setPv (cible -> getPv() + getHeal() );
}

void Personnage::Clear()
{
    system("cls");
}
