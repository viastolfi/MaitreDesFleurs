#pragma once

#include "Vegetal.hpp"

class Arbre : public Vegetal 
{
public:
  Arbre();
  void croissance() override;
};
