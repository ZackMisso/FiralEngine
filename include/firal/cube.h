#pragma once

// This class contains the definition of a parametric cube

FIRAL_NAMESPACE_BEGIN

class Cube {
public:
    Cube();
    ~Cube();

    BBox3f computeBBox();
    bool rayHit(const Ray3f& ray, float *thit, RayInter* isect);

    // getter methods
    Vec3f getPosition();
    Vec3f getDimension();
    // setter methods
    void setPosition(Vec3f param);
    void setDimension(Vec3f param);
protected:
    Vec3f position;
    Vec3f dimension;
};

FIRAL_NAMESPACE_END
