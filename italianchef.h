#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include <string>
#include <iostream>
#include "chef.h"

class ItalianChef : Chef {
public:
ItalianChef(std::string _name, int _jauho, int _vesi): Chef(_name){
    name = getName(_name);
    jauho = _jauho;
    vesi = _vesi;
}
~ItalianChef(){
    
}
std::string getName(std::string _name){
    return _name;
}
void MakeSalad(){
    std::cout << name << " Makes salad.\n";
}
void MakeSoup(){
    std::cout << name << " Makes soup\n";
}
void MakePasta(){
    std::cout << name << " Makes pasta with secret recepie\n" << " Jauho: " << jauho << " Vesi: " << vesi << "\n";
}

protected:
//std::string name;

private:
    int vesi;
    int jauho;
};

#endif