#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Graphy.h"



int main() {
    Colour   white(Vec3f(1, 1, 1)), green(Vec3f(0, 1, 0));
    Picture pic = Picture();
    Sphere s1= Sphere(Vec3f(-8, -5, -20), 2, white), s2 = Sphere(Vec3f(3, 5, -25), 3, green);
    pic.add(s1);
    pic.add(s2);

    Light light = Light(Vec3f(0, 20, -10), 1);

    pic.render(pic.spheres, light);


    return 0;
}
