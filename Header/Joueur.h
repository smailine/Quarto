#ifndef JUEUR_H
#define JUEUR_H
#include "Grille.h"
 class Joueur{
 private:
     Grille grilleJeu;
     int adversaire; // impaire joueur, paire un IA
     int niveau;
 public:
     // contructeur
     Joueur();
     Joueur(int niveau);
     //getteurs et setteurs
      void setGrille(Grille grille);
      Grille getGrille();
      int getAdversaire();
      //autres methodes
      void choixCase();
      void choixAdversaire();
      void choixPoin();
      void choisirNiveau();



};

#endif // JUEUR_H
