#pragma once

#include <firal/common.h>

FIRAL_NAMESPACE_BEGIN

class Ray3f {
public:
    Ray3f();
    Ray3f(Vec3f o, Vec3f dir);
    Ray3f(Vec3f o, Vec3f dir, float mint, float maxt);

    Ray3f reverse() const;
    std::string toString() const;

    Vec3f o;
    Vec3f dir;
    float mint;
    float maxt;
};

FIRAL_NAMESPACE_END
