#include "Arbre.hpp"

void Arbre::croissance() 
{
  if (_comportementCroissance)
    setTaille(_comportementCroissance->newTaille(getTaille()));
}

void Arbre::setComportement(IComportementCroissance* comportement) 
{
  _comportementCroissance = comportement;
}
