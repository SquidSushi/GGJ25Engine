//
// Created by mrbau on 15.01.2025.
//

#ifndef RAYLIBSTARTER_ANGLE_H
#define RAYLIBSTARTER_ANGLE_H


class Angle { //Class for handling angles in Degrees
    float value;
    void normalize(); //Normalize the angle to be between 0 and 360; This has to be called in most operations.
public:
    //Constructor using a float
    Angle(float value);
    // ##Operators##
    //Addition
    //Angle operator+(Angle a);
    //Angle& operator+=(Angle a);
    Angle operator+(float a) const;
    Angle& operator+=(float a);
    //Subtraction
    //Angle operator-(Angle a);
    //Angle& operator-=(Angle a);
    Angle operator-(float a) const;
    Angle& operator-=(float a);
    // Conversion
    explicit operator float() const; //Convert the angle to a float

    // Assignment
    Angle& operator=(float a);

    //other
    float asRadians() const; //Convert the angle to Radians
    static float AngleDifference(Angle from, Angle to); //Get the difference between two angles
    static float AngleDifference(float from, float to); //Get the difference between two angles
    float as180() const; //Convert the angle to be between -180 and 180
    static float as180(float a); //Convert an angle to be between -180 and 180
    static float normalize(float a); //Normalize an angle to be between 0 and 360
};


#endif //RAYLIBSTARTER_ANGLE_H
