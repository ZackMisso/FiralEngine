#pragma once

#include <firal/camera.h>

FIRAL_NAMESPACE_BEGIN

class PerspectiveCamera : public Camera {
public:
    PerspectiveCamera(Vec2i size);
    // virtual Vec3f traceRay(Ray3f &ray, const Vec2f &samplePos);
    virtual Ray3f generateRay(double u, double v) const = 0;
};

FIRAL_NAMESPACE_END
