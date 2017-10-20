#pragma once

#include <transm/inter.h>
#include <transm/ray.h>

// This class contains the definition of a parametric cube

FIRAL_NAMESPACE_BEGIN

class Sphere {
public: // TODO: need to include the transform to world space
    Sphere();
    ~Sphere();

    BBox3f computeBBox();
    bool rayHit(const Ray3f& ray, float* thit, RayInter* isect);

    // getter methods
    Vec3f getCenter();
    float getRadius();
    // setter methods
    void setCenter(Vec3f param);
    void setRadius(double param);
private:
    Vec3f center;
    float radius;
};

FIRAL_NAMESPACE_END
