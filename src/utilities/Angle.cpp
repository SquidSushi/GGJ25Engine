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

float Angle::AngleDifference(Angle a, Angle b) {
    if (a.value == b.value) return 0;
    Angle* smaller = a.value < b.value ? &a : &b;
    Angle* bigger = a.value < b.value ? &b : &a;
    float diff1 = bigger->value - smaller->value;
    float diff2 = smaller->value + 360 - bigger->value;
    // set both to positive
    diff1 = diff1 < 0 ? -diff1 : diff1;
    diff2 = diff2 < 0 ? -diff2 : diff2;
    return diff1 < diff2 ? diff1 : diff2;
}


