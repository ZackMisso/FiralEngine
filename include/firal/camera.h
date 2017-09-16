#pragma once

#include <firal/common.h>
#include <firal/ray.h>

FIRAL_NAMESPACE_BEGIN

class Camera {
public:
    Camera(Vec2i size);
    virtual Vec3f traceRay(Ray3f &ray, const Vec2f &samplePos) const = 0;
    const Vec2i& getImageSize() const;
private:
    Eigen::Vector2i imageSize;
};

FIRAL_NAMESPACE_END
