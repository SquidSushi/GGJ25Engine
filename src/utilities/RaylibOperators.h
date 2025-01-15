//
// Created by mrbau on 15.01.2025.
//

#ifndef RAYLIBSTARTER_RAYLIBOPERATOR_H
#define RAYLIBSTARTER_RAYLIBOPERATOR_H


#include <raylib.h>
#include "raymath.h"

Vector2 operator+(Vector2 a, Vector2 b);
Vector2 operator-(Vector2 a, Vector2 b);
float operator*(Vector2 a, Vector2 b); //dot product
Vector2 operator*(Vector2 a, float b); //scale

Vector2 Vector2SetLength(Vector2 a, float length);

#endif //RAYLIBSTARTER_RAYLIBOPERATOR_H
