#include "cocorico.h"

entier main() {
  entier resultat = 0;
  caractere compteur = 0;
  entier constant limite = 10;

  tant_que(compteur < limite)
    resultat += compteur++;

  retourne resultat;
}
