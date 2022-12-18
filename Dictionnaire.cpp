#include <iostream>
#include <string>
#include <iterator>
#include <bits/stdc++.h>
#include "Dictionnaire.h"
using namespace std;

Dictionnaire::Dictionnaire()
{
    cout << "Constructeur";
}
Dictionnaire::Dictionnaire(string path)
{
    file_dict.open(path,ios::in);
    if(!file_dict) {
        cout << "Erreur dans l'overture du fichier";
        exit(-1);
    }
}
Dictionnaire::~Dictionnaire()
{
     file_dict.close();
    cout << "Destructeur \n";
}
int Dictionnaire::Stock_To_map()
{
    string ligne,mot,description,mot_ignore;
    while(getline(file_dict,ligne)){

        stringstream str(ligne);
        getline(str,mot_ignore,',');
        getline(str,mot,',');
        getline(str,mot_ignore,',');
        getline(str,mot_ignore,',');
        getline(str,mot_ignore,',');
        getline(str,description,',');

        dictionary.insert(pair<string,string>(mot,description));
    }

    return dictionary.size();
}

void  Dictionnaire::Find_descr(string mot_cherche)
{
    auto search = dictionary.find(mot_cherche);
    if(search != dictionary.end()) {
      cout <<"----- Les enregistrements trouvees pour le mot '"<<mot_cherche<<"' -----\n";
       cout <<" Mot\tDescreption\n";
       cout <<" "<<search->first<<" :\t"<<search->second << endl  ;
    }
    else {
        cout << " :( Aucun enregistrement pour ce mot :( \n";
    }

}

