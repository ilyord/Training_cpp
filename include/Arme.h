#ifndef ARME_H
#define ARME_H

#include <string>
#include <iostream>

using namespace std;

class Arme
{
    private:

        int degats;
        string nom;
        int niveauRequis;
        float prix;

    public:

        //CONSTRUCTEUR
        Arme();
        Arme(int,string,int,float);

        //DESTRUCTEUR
        virtual ~Arme();

        //GETTERS/SETTERS
        int getDegats();
        string getNom();
        int getNiveauRequis();
        float getPrix();

        void setDegats(int);
        void setNom(string);
        void setNiveauRequis(int);
        void setPrix(float);

        //AFFICHER INFO ARME
        void showInfos();




};

#endif // ARME_H
