#pragma once

#include "IComportementCroissance.hpp"

class Secheresse : public IComportementCroissance {
public:
  float newTaille(float taille) override;
};
