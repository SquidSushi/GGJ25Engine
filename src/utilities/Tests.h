//
// Created by mrbau on 16.01.2025.
//

#ifndef RAYLIBSTARTER_TESTS_H
#define RAYLIBSTARTER_TESTS_H


#include "Angle.h"

void AngleTests(){
    Angle a(10);
    Angle b(90);
    Angle c(350);

    float ab = Angle::AngleDifference(a, b); //should be +80
    float ac = Angle::AngleDifference(a, c); //should be -20
    float bc = Angle::AngleDifference(b, c); //should be -100
    float ba = Angle::AngleDifference(b, a); //should be -80
    float ca = Angle::AngleDifference(c, a); //should be +20
    float cb = Angle::AngleDifference(c, b); //should be +100
    float oneeighty = Angle::AngleDifference(0, 180); //what will it be?
    oneeighty = Angle::AngleDifference(180, 0); //what will it be?
    return;
}


#endif //RAYLIBSTARTER_TESTS_H
