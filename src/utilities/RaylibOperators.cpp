//
// Created by mrbau on 15.01.2025.
//

#include "RaylibOperators.h"

Vector2 operator+(Vector2 a, Vector2 b) {
    return Vector2Add(a, b);
}

Vector2 operator-(Vector2 a, Vector2 b) {
    return Vector2Subtract(a, b);
}

float operator*(Vector2 a, Vector2 b) {
    return Vector2DotProduct(a, b);
}

Vector2 operator*(Vector2 a, float b) {
    return Vector2Scale(a, b);
}

Vector2 Vector2SetLength(Vector2 a, float length) {
    return Vector2Normalize(a) * length;
}
