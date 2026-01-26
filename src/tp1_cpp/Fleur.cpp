#include "Fleur.hpp"

Fleur::Fleur(float tailleMax)
  : Vegetal(), tailleMax(tailleMax)
{}

void Fleur::croissance()
{
  if (this->getTaille() + 0.1 > this->tailleMax) 
    this->setTaille(this->tailleMax);
  else
    this->setTaille(this->getTaille() + 0.1);
}
