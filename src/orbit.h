#ifndef ORBIT_H
#define ORBIT_H

#include<math.h>

int orbit(int sat_mass, int obj_mass, int obj_radius, int height)
{
     return sat_mass + obj_mass + obj_radius + height;
}

#endif
