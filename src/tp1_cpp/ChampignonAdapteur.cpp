#include "ChampignonAdapteur.hpp"

ChampignonAdapteur::ChampignonAdapteur(std::unique_ptr<Champignon> c)
  :champignon(std::move(c))
{}

void ChampignonAdapteur::croissance()
{
  champignon->pousse(Champignon::Meteo::Soleil); 
}

double ChampignonAdapteur::getTaille() const 
{
  return champignon->getHauteurChampignon();
}

std::string ChampignonAdapteur::getType() const 
{
  return "Champignon";
}
