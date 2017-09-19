#pragma once

#include <stdexcept>
#include <iostream>
#include <Eigen/Core>

#define FIRAL_NAMESPACE_BEGIN namespace firal {
#define FIRAL_NAMESPACE_END }

#define Epsilon 1e-4f

#define M_PI         3.14159265358979323846f
#define INV_PI       0.31830988618379067154f
#define INV_TWOPI    0.15915494309189533577f
#define INV_FOURPI   0.07957747154594766788f
#define SQRT_TWO     1.41421356237309504880f
#define INV_SQRT_TWO 0.70710678118654752440f

typedef Eigen::Matrix<float,    Eigen::Dynamic, Eigen::Dynamic> MatXf;
typedef Eigen::Matrix<uint32_t, Eigen::Dynamic, Eigen::Dynamic> MatXu;

typedef Eigen::Matrix4f Mat4f;
typedef Eigen::Vector3f Vec3f;
typedef Eigen::Vector2f Vec2f;
typedef Eigen::Vector2i Vwc2i;

#define NOTIMP throw new firal::NotImplemented();

FIRAL_NAMESPACE_BEGIN

class NotImplemented : public std::runtime_error {
public:
    NotImplemented() : std::runtime_error("This Method has not been implemented yet") { }
};

FIRAL_NAMESPACE_END
