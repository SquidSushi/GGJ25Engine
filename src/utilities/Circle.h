//
// Created by mrbau on 15.01.2025.
//

#ifndef RAYLIBSTARTER_CIRCLE_H
#define RAYLIBSTARTER_CIRCLE_H

#include "raylib.h"

class Circle {
public:
    Vector2 center;
    float radius;

    Circle(Vector2 center, float radius) : center(center), radius(radius) {}

    static bool CheckCollisionCircles(Circle c1, Circle c2); // Wrapper for Raylib's CheckCollisionCircles
    static bool CheckCollisionCircleRec(Circle c, Rectangle rec); // Wrapper for Raylib's CheckCollisionCircleRec
    static bool CheckCollisionPointCircle(Vector2 point, Circle c); // Wrapper for Raylib's CheckCollisionPointCircle
};


#endif //RAYLIBSTARTER_CIRCLE_H
