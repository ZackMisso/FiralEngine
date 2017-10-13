#pragma once

#include <firal/camera.h>

FIRAL_NAMESPACE_BEGIN

class OrthographicCamera : public Camera {
public:
    OrthographicCamera(Vec2i size);
    // virtual Vec3f traceRay(Ray3f &ray, const Vec2f &samplePos) const;
    virtual Ray3f generateRay(double u, double v) const;
};

FIRAL_NAMESPACE_END
