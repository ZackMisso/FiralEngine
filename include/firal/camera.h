#pragma once

#include <firal/common.h>

#include <Eigen/Core>

FIRAL_NAMESPACE_BEGIN

class Camera {
public:
    Camera(Eigen::Vector2i size);
    virtual Eigen::Vector3f traceRay(Ray3f &ray, const Eigen::Vector2f &samplePos) const = 0;
    const Eigen::Vector2i& getImageSize() const;
private:
    Eigen::Vector2i imageSize;
};

FIRAL_NAMESPACE_END
