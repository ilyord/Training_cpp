#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Arme.h"

using namespace std;


class Personnage
{
    private:

        string nom = "Perso";
        int pv = 100;
        int attack = 10;
        int defence = 10;
        int heal = 5;
        Arme* arme;


    public:
        //CONSTRUCTEUR
        Personnage();
        Personnage(string n);

        //DESTRUCTEUR
        ~Personnage();

        //GETTERS/SETTERS
        int getPv() const;
        void setPv(int p);

        //GETTERS/SETTERS
        string getNom() const;
        void setNom(string n);

        //GETTERS/SETTERS
        int getAttack() const;
        void setAttack(int a);

        //GETTERS/SETTERS
        int getDefence() const;
        void setDefence(int d);

        //GETTERS/SETTERS
        int getHeal() const;
        void setHeal(int h);

        //GETTER/SETTER ARME
        Arme* getArme() const;
        void setArme(Arme* a);

        //AFFICHER INFO PERSO
        void showInfos() const;


        //METHOD ATK/HEAL
        void attackPlayer(Personnage* cible);
        void healPlayer(Personnage* cible);

        void Clear();





};

#endif // PERSONNAGE_H
