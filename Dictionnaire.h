#ifndef DICTIONNAIRE_H_INCLUDED
#define DICTIONNAIRE_H_INCLUDED


using namespace std;
class Dictionnaire
{
    public:
        Dictionnaire();
        virtual ~Dictionnaire(); // close stream
        Dictionnaire(string); // open stream
        int Stock_To_map(); // Stock les donnees du fichier vers map et return le nombres des lignes lues
        void Find_descr(string); // Chercher la descreption d'un mot

    private:
         fstream file_dict; // fichier contenant les mots et leur descreption
         map<string ,string > dictionary; //  <mot,descreption>
};

#endif // DICTIONNAIRE_H_INCLUDED
