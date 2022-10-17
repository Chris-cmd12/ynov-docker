#include <iostream>
#include "Perso.h"

int main(int argc, char const *arg[]){


    cout << "Entrer votre prenom : " << endl;
    string name;
    cin >> name;
    Perso perso(name);
    perso.displayInformation();

    int addXp;

    while(true){

        cout << "Entrer le nombre d'expereince : "<< endl;
        cin >> addXp;
        perso.addXp(addXp);
        perso.displayInformation();

    }

}
