# Projectile_Motion_Calculation
Simple physics calculation simulator in C++ that calculates the motion of a projectile. 
The simulator will take initial velocity, angle, and time as inputs and then calculate the horizontal and vertical positions of the projectile at that time.

## Convert angle to radians vice versa
Rad = (angle)Pi/180 \
Ang = (angle) 180/Pi

## Horizontal Position Calculation
x = initial_velocity * cosine(angle) * time \
y = (initial_velocity * sin(angle) * time) - (9.81/2 * time^2)
