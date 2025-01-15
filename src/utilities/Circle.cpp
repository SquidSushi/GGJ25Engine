//
// Created by mrbau on 15.01.2025.
//

#include "Circle.h"

bool Circle::CheckCollisionCircles(Circle c1, Circle c2) {
    return ::CheckCollisionCircles(c1.center, c1.radius, c2.center, c2.radius);
}

bool Circle::CheckCollisionCircleRec(Circle c, Rectangle rec) {
    return ::CheckCollisionCircleRec(c.center, c.radius, rec);
}

bool Circle::CheckCollisionPointCircle(Vector2 point, Circle c) {
    return ::CheckCollisionPointCircle(point, c.center, c.radius);
}

