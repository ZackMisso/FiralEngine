#pragma once

#include <firal/camera.h>

FIRAL_NAMESPACE_BEGIN

class OrthographicCamera : public Camera {
public:
    OrthographicCamera(Vec2i size);
    virtual Vec3f traceRay(Ray3f &ray, const Vec2f &samplePos) const;
};

FIRAL_NAMESPACE_END
