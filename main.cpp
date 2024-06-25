#include <iostream>
#include "Calculation.h"
#include "../../../../Program Files/JetBrains/CLion 2024.1.4/bin/mingw/x86_64-w64-mingw32/include/math.h"


int main(){

    double initial_velocity,angle,time;

   std::cout<<"Enter initial velocity in (m/s): ";
    std::cin>>initial_velocity;
   std::cout<<"Enter angle in degrees: ";
    std::cin>> angle;
   std::cout<< "Enter time in seconds: ";
    std::cin>>time;

   angle = angle * M_PI/180.0;


  double horizontal_position = calculate_horizontal_position(initial_velocity,angle,time);
  double vertical_position = calculate_vertical_position(initial_velocity,angle,time);


  std::cout<< "Horizontal Position: " << horizontal_position << "meters\n";
  std::cout<< "Vertical Position: " << vertical_position << "meters\n";


    return 0;
}
