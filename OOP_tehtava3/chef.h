#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class Chef {
public:
Chef(std::string _name){
    name = _name;
    std::cout << name << " constructori\n";
}
~Chef(){
    std::cout << name << " deconstructori\n";
}

void MakeSalad(){
    std::cout << name << " Makes salad.\n";
}
void MakeSoup(){
    std::cout << name << " Makes soup\n";
}

protected:
std::string name;

private:

};


#endif