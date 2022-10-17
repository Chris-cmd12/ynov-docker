//
// Created by chris on 17/10/2022.
//

#include "Perso.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

Perso::Perso() {
   name = "toto";
   level = 100;
   current_xp = 0;
   max_xp = 100000000;
}

Perso::Perso(string name){
    this->name = name;
    level = 0;
    current_xp = 0;
    max_xp = 20;

}

Perso::Perso(std::string name, int level, long max_xp, int current_xp) {
    this->name = name;
    this->level = level;
    this->max_xp = max_xp;
    this->current_xp = current_xp ;

}
Perso::~Perso() {}

string Perso::getName() {
    return name;
}

void Perso::setName(std::string name) {
    this->name = name;
}

int Perso::getLevel() {
    return level;
}

void Perso::setLevel(int level) {
    this->level = level;
}

long Perso::getMaxXp() {
    return max_xp;
}

void Perso::setMaxXp(long max_xp) {
    this->max_xp = max_xp;
}

int Perso::getCurrentXp() {
    return current_xp;
}

void Perso::setCurrentXp(int max_xp) {
    this->max_xp = max_xp;
}

void Perso::displayInformation() {
    cout << "===================" << endl;
    cout << "Nom : " << name << endl;
    cout << "Niveau: " << level << endl;
    cout << "Experience " << current_xp << "/" << max_xp <<endl;
    cout << current_xp << " ";
    for(int i=0; i<20; i++){
        if(i<(current_xp*20)/max_xp) cout << "=";
        else cout << " ";
    }
    cout << " " << max_xp << endl;
    cout << "===================" << endl;
}


void Perso::addXp(int xp) {
    current_xp += xp;
    if (current_xp >= max_xp){

        current_xp -= max_xp;
        levelUp();
    }

}

void Perso::levelUp() {
    level++;
    max_xp *= 1.5;
    cout << "LEVEL UP !!!"<< endl;
}


