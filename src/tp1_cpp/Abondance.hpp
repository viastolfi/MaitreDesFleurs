#pragma once

#include "IComportementCroissance.hpp"

class Abondance : public IComportementCroissance {
public:
  float newTaille(float taille) override;
};
