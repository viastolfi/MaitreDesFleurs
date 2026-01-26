#include "Arbre.hpp"

Arbre::Arbre()
  : Vegetal()
{}

void Arbre::croissance() 
{
  this->setTaille(this->getTaille() + 1.0);
}
