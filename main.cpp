#include <iostream>
#include "fonction.h"

using namespace std;


int main()
{


    int const nbPions = 4;
    int const nbCoups = 12;
    int const nbCouleurs = 8;

    int nbPionsPlaces=0;
    int nbPionsMalPlaces=0;

    int combiCachee[nbPions];
    int combiSaisie[nbPions];

    int choixMenu = 0;
    char choix = 0;


        color(14,0);

        cout << "Bienvenue dans Mastermind" << endl<<endl;


        color(11,0);
        cout<<"Menu :" << endl<<endl;
        color (15,0);





do
        {

            cout << "1. JOUER " <<endl;
            cout << "2. REGLES " <<endl;
            cout << "3. HISTOIRE " <<endl;
            cout << "4. QUITTER " <<endl;


            cin >> choixMenu;
            cout<<endl;




    if (choixMenu == 1){
            do
            {

            color(15,0);
            ChoisirCombinaison(combiCachee, nbPions, nbCouleurs);


            cout << "il vous reste ";
            color(14,0);
            cout <<nbCoups;
            color(15,0);
            cout << " coups \x85 jouer " <<endl;

            for (int i = 0; i < nbCoups; i++)
            {

            SaisirCombinaison(combiSaisie, nbPions);

            cout <<"votre combinaison  ";
            color(11,0);
            AfficherCombinaison(combiSaisie, nbPions);

            TesterCombinaison(combiCachee, combiSaisie, nbPions,nbPionsPlaces,nbPionsMalPlaces );
            color(15,0);

if      (nbPionsPlaces == 4){
                color(10,0);
                cout << "Bravo vous avez gagn\x82, la combinaison \x82tait bien ";
                AfficherCombinaison(combiCachee, nbPions);
                cout << endl << endl;
                break;
                }

            cout << "contient ";
            color(10,0);
            cout<< nbPionsPlaces << " pion(s) bien plac\x82(s) ";
            color(15,0);
            cout << "et ";

            color(12,0);
            cout << nbPionsMalPlaces << " pion(s) mal plac\x82(s)!" <<endl;
            color(15,0);





    if (i == 11){
                color(12,0);
                cout << "il vous reste 0 coup a jouer " <<endl<<endl;
                cout << "D\x82sol\x82 vous avez perdu ! La combinaison \x82tait :  ";
                AfficherCombinaison(combiCachee, nbPions);
                cout << endl << endl;
                break;
                }




                cout << "il vous reste ";
                color(14,0);
                cout<< (11-i) << " coups ";
                color (15,0);
                cout <<"\x85 jouer " <<endl<<endl;

        }



        color (15,0);
        cout<<"Voulez-vous rejouer ? (o / n)"<< endl;
        cin >> choix;

} while(choix == 'o');

        break;

        }


    if(choixMenu== 2){

            regles(choixMenu);


        }
    if (choixMenu == 3){
            credits(choixMenu);

        }

        }while(choixMenu !=4);





        color(14,0);
        cout<<"Aurevoir!";
        color(15,0);


return 0;
    }









