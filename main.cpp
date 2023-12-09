#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main (){
    Chef ramsay = Chef("Gordon Ramsay");
    ItalianChef antonio = ItalianChef("Antonio Mondo",5,2);
    antonio.MakePasta();
    ramsay.MakeSoup();
    ramsay.MakeSalad();
    return 0;
}