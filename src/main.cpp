#include "tp1_cpp/Arbre.hpp"
#include "tp1_cpp/IComportementCroissance.hpp"
#include "tp1_cpp/Secheresse.hpp"
#include "tp1_cpp/Abondance.hpp"
#include <memory>
#include <iostream>

int main(int argc, char* argv[])
{
  Arbre a;
  Secheresse secheresse;
  Abondance abondance;

  while (true)
  {
    int choix = 0;
    std::cout << "Choix : 0-Quitter, 1-Pas de changement, 2-Secheresse, 3-Abondance" << std::endl;
    std::cin >> choix;
    switch (choix)
    {
      case 0: break;
      case 1: break;
      case 2: a.setComportement(&secheresse); break;
      case 3: a.setComportement(&abondance); break;
    }
    if (choix == 0) break; // Quitte la boucle while (true)

    std::cout << "Taille avant croissance" << a.getTaille() << std::endl;
    a.croissance();

    std::cout << "Taille après croissance" << a.getTaille() << std::endl;
  }

  return 0;
}
