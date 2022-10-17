#include <iostream>
#include "Perso.h"

int main(int argc, char const *arg[]){


    cout << "Entrer votre prenom : " << endl;
    string name;
    cin >> name;
    Perso perso(name);
    perso.displayInformation();

    int addXp;
    char exit = 'n';
    while(true){
    
        if (exit == 'y'){
            return 0;
            
        }else{
            perso.displayInformation();
            cout << "Entrer le nombre d'expereince : "<< endl;
            cin >> addXp;
            perso.addXp(addXp);
            perso.displayInformation();
            cout << "avez vous terminer (y/n): " << endl;
            cin >> exit;
        }


        

    }

    return 0;

}
