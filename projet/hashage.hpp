#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;




// Explication :

// La chaîne de caractères "Hello, world! 🌍" contient des caractères ASCII (7 bits) et des caractères Unicode (jusqu'à 4 octets pour chaque caractère). Dans la boucle for, chaque caractère c est analysé pour déterminer son code UTF-8 correspondant.

// Si le caractère est dans la plage ASCII (0-127), son code UTF-8 correspond simplement à sa valeur ASCII (un seul octet). Sinon, le caractère est un caractère Unicode et son code UTF-8 est calculé en fonction de son nombre d'octets.

// Les quatre blocs if correspondent aux quatre plages de nombre d'octets pour les caractères UTF-8. Le calcul pour chaque plage est basé sur les bits de masquage et de décalage pour extraire les bits de chaque octet et les combiner pour former le code UTF-8 final.

// Le résultat est stocké dans un vecteur d'entiers utf8_codes. Enfin, les codes UTF-8 sont affichés un par un.

vector<int> get(string word)
{
    vector<int> utf8_codes;

    // Boucle pour récupérer le code UTF-8 de chaque caractère
    for (char c : word) {
        if (c >= 0 && c <= 127) {
            utf8_codes.push_back(c);
        } 
        else if (c >= 192 && c <= 223) 
        {
            utf8_codes.push_back(((c & 0x1F) << 6)) ;
        } 
        else if (c >= 224 && c <= 239) 
        {
            utf8_codes.push_back(((c & 0x0F) << 12));
        } 
        else if (c >= 240 && c <= 247) 
        {
            utf8_codes.push_back(((c & 0x07) << 18));
        }
    }

    // Affichage des codes UTF-8
    cout<< "Le mot '"<<word<<"' se traduie en : "<<endl;
    // for (int code : utf8_codes) {
    //     cout << code << std::endl;
    // }

    return utf8_codes ;
}


int NAMEHASH(vector<int> codage)
{
    int result = 0;

    for (int utf8_caractere : codage) 
    {
        result += utf8_caractere;
    }

    result *= codage.size();
    return result;
}



