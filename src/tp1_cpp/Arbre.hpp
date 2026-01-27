#pragma once

#include "Vegetal.hpp"
#include "IComportementCroissance.hpp"
#include <memory>

class Arbre : public Vegetal 
{
public:
  void croissance() override;
  void setComportement(IComportementCroissance* comportement);
private:
  IComportementCroissance* _comportementCroissance = nullptr;
};
