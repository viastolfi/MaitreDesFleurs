#pragma once

#include <string>
#include <memory>

#include "Vegetal.hpp"
#include "Champignon.hpp"

class ChampignonAdapteur: public Vegetal
{
public:
  ChampignonAdapteur(std::unique_ptr<Champignon> c); 
  ~ChampignonAdapteur() = default;

  void croissance() override;
  double getTaille() const;
  std::string getType() const override;
private:
  std::unique_ptr<Champignon> champignon;
};
