#pragma once

class Vegetal 
{
public:
  Vegetal(float taille = 0.0);
  virtual ~Vegetal() = default;
  float getTaille();
  virtual void croissance() = 0;
private:
  float mTaille;
protected:
  void setTaille(float t);
};
