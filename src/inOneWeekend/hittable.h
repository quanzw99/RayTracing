#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"
#include "vec3.h"

struct hit_record {
    point3 p;    // intersection point
    vec3 normal; // the unit surface normal vector at the intersection point 
    double t;    // parameter t at the intersection point
};

class hittable {
    public:
        virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
};

#endif