//
// Created by mrbau on 15.01.2025.
//

#include "Angle.h"
#include "raylib.h"

void Angle::normalize() {
    while (value < 0) value += 360;
    while (value >= 360) value -= 360;
}

Angle::Angle(float value) : value(value) {
    normalize();
}



Angle Angle::operator+(float a) {
    return {value + a};
}

Angle &Angle::operator+=(float a) {
    value += a;
    normalize();
    return *this;
}

Angle::operator float() const {
    return value;
}



Angle Angle::operator-(float a) {
    return {value - a};
}

Angle &Angle::operator-=(float a) {
    value -= a;
    normalize();
    return *this;
}

Angle &Angle::operator=(float a) {
    value = a;
    normalize();
    return *this;
}

float Angle::asRadians() {
    return value * DEG2RAD;
}

float Angle::AngleDifference(Angle from, Angle to) { //returns angle between from and to. Adding the result of this function to from would result in the vlaue of to.
    float diff = to.value - from.value;
    if (diff > 180) diff -= 360;
    if (diff <= -180) diff += 360;
    return diff;
}

float Angle::AngleDifference(float from, float to) {
    return AngleDifference(Angle(from), Angle(to));
}


