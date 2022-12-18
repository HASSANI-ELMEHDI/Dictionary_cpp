#include <iostream>
#include <fstream>
#include <map>
#include <iterator>
#include "Dictionnaire.h"
using namespace std;

int main()
{
    Dictionnaire Dict("data.csv");

    int cmpt=Dict.Stock_To_map();
    cout <<"\n\t"<<cmpt << " Enregistrements lues du fichier \n"<< endl;
    cout << "Le mot cherchee : " ;
    string mot_cherchee;
    cin >> mot_cherchee;
    cout <<endl;
    Dict.Find_descr(mot_cherchee);
    cout <<endl;
    return 0;
}
