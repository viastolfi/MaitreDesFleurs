#include "Vegetal.hpp"

Vegetal::Vegetal(float taille) 
  : mTaille(taille)
{}

float Vegetal::getTaille() 
{
  return this->mTaille;
}

void Vegetal::setTaille(float t)
{
  this->mTaille = t;
}
