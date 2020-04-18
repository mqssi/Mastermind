#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

int GetNombreAlleatoire(int min, int max);
void SaisirCombinaison(int combi[], int nbPions);
void ChoisirCombinaison(int combi[], int nbPions, int maxCouleur);
bool TesterCombinaison(int combiCachee[], int combiSaisie[], int nbPions, int& nbPionsPlaces, int& nbPionsMalPlaces);
void AfficherCombinaison(int combi[], int nbPions);
void color (int couleurDuTexte, int couleurDuFond);
void regles (int choixMenu);
void credits (int choixMenu);

#endif // FONCTION_H_INCLUDED
