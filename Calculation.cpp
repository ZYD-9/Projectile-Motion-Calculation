//
// Created by gayar on 6/25/2024.
//

#include "Calculation.h"
#include <cmath>

double GRAVITY = 9.81;

double calculate_horizontal_position(double initial_velocity, double angle, double time){

    return initial_velocity * cos(angle) * time;
}

double calculate_vertical_position(double initial_velocity, double angle, double time){

    return (initial_velocity * sin(angle) * time) - (GRAVITY/2 * time * time);

}