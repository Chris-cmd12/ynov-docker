//
// Created by chris on 17/10/2022.
//

#ifndef XP_PERSO_H
#define XP_PERSO_H

#include <string>
using namespace std;

class Perso {
private:
    string name;
    int level;
    long max_xp;
    int current_xp;

public:
    Perso();
    Perso(string name);
    Perso(string name, int level, long max_xp, int current_xp);
    ~Perso();

    string getName();
    void setName(string name);

    int getLevel();
    void setLevel(int level);

    long getMaxXp();
    void setMaxXp(long max_xp);

    int getCurrentXp();
    void setCurrentXp(int max_xp);

    void displayInformation();

    void levelUp();

    void addXp(int xp);


};


#endif //XP_PERSO_H
