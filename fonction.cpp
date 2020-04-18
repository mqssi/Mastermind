#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "fonction.h"
#include <windows.h>

using namespace std;

int GetNombreAlleatoire(int min, int max)
{
    max = 8;
    min = 1;




    return rand() %  max + min;
}



void SaisirCombinaison(int combi[], int nbPions)
{


    cout<< "Entrez votre combinaison : ";

    for (int i=0; i < nbPions; i++)
    {
        cin >> combi[i];
    }



}



void ChoisirCombinaison(int combi[], int nbPions, int maxCouleur)
{

    srand (time(0));
    for (int i = 0 ; i < nbPions; i++)
    {

    combi[i] = GetNombreAlleatoire(nbPions, maxCouleur);
    cout << combi[i]<<" ";
    }
    cout << endl;
}



bool TesterCombinaison(int combiCachee[], int combiSaisie[], int nbPions, int& nbPionsPlaces, int& nbPionsMalPlaces)
{

    nbPionsPlaces = 0;
    nbPionsMalPlaces = 0;
    for (int i= 0; i < nbPions; i++)
	{

        if (combiSaisie[i] == combiCachee[i] ){

        nbPionsPlaces ++;

        }


            for (int j = 0; j < nbPions; j++)
            {
            if (combiSaisie[i] == combiCachee[j] && i!= j){



                nbPionsMalPlaces++;




            }

        }

	}

        if (nbPionsPlaces==nbPions){
            return true;
            }
        else return false;





}









void AfficherCombinaison(int combi[], int nbPions)
{


    for (int i=0; i < nbPions; i++)
    {
        color(combi[i],0);
        cout << combi[i] << " ";
        color(15,0);
    }


}


void color (int couleurDuTexte, int couleurDuFond)
{
     HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(H, couleurDuFond*16+couleurDuTexte);


}



void regles (int choixMenu){

        color(11,0);

        cout << " Le but du jeu du Mastermind est pour l'un des joueurs d'\x82laborer une combinaison difficilement d"<<"\x82"<<"chiffrable et pour son adversaire (ici l'ordinateur)" << endl<<endl;

        cout << "Le joueur qui doit trouver la combinaison secr\x8Ate gagne une manche d\x8As lors qu'il y parvient en maximum 12 coups." << endl<<endl;

        cout << "Le joueur qui a con\x87u la combinaison secr"<<"\x8A"<<"te remporte la manche quand son adversaire n'est pas parvenu \x85 trouver la combinaison en 12 coups.  " << endl<<endl;

        cout<<"Vous devez deviner un combinaison allant de 1 \x85 8 !" << endl<<endl;

        color (15,0);

        system("pause");

        cout<< endl;

}

void credits (int choixMenu){

        color (11,0);

         cout << "Le Mastermind a \x82t\x82 invent\x82\ par Mordecai Meirowitz dans les ann"<<"\x82" <<"es 1970 alors qu'il travaillait comme expert en t\x82l"<<"\x82"<<"communications." << endl<<endl;

         cout << "Au d\x82part, il fut \x82\dit\x82\ par Capiepa1."<< endl<< endl;



         color (15,0);

         system("pause");

         cout<< endl;
}


