//
// Created by mrbau on 15.01.2025.
//

#include "Angle.h"
#include "raylib.h"

void Angle::normalize() {
    value = normalize(value);
}

Angle::Angle(float value) : value(value) {
    normalize();
}



Angle Angle::operator+(float a) const {
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



Angle Angle::operator-(float a) const {
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

float Angle::asRadians() const {
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

float Angle::as180() const {
    return as180(value);
}

float Angle::as180(float a) {
    a = normalize(a);
    if (a > 180) return a - 360;
    return a;
}

float Angle::normalize(float a) { //I don't know if this is optimal, but we will figure that out when we get there.
    if (a >= 360){
        int times = a / 360;
        a -= 360 * times;
    }
    if (a < 0){
        int times = a / 360;
        a += 360 * ((-times) + 1);
    }
    return a;
}


