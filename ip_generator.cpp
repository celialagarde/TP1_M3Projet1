// ip_generator.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Initialiser le générateur de nombres aléatoires avec le temps actuel
    srand(time(0));

    // Générer et afficher une adresse IP aléatoire
    for(int i = 0; i < 4; i++) {
        cout << rand() % 256;
        if(i < 3) cout << ".";
    }
    return 0;
}
