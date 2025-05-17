#ifndef PUNTO_HPP
#define PUNTO_HPP

class Punto
{
private:
  float posX;
  float posY;

public:
  float getPosX() const;
  float getPosY() const;
  void setPosX(float x);
  void setPosY(float y);
  Punto(float x = 0, float y = 0);
};
#endif // PUNTO_HPP