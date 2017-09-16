#pragma once

#include <firal/common.h>
#include <firal/ray.h>

FIRAL_NAMESPACE_BEGIN

class BBox3f {
public:
    BBox3f();
    BBox3f(Vec3f min, Vec3f max);

    // overloaded operators
    bool operator==(const BBox3f &bbox) const;
    bool operator!=(const BBox3f &bbox) const;
    BBox3f operator+(const BBox3f &bbox) const;

    // geometry data
    float getVolume() const;
    float getSurfaceArea() const;
    Vec3f getCenter() const;

    // checks
    bool isInside(const Vec3f pt, bool strict = false) const;
    bool isInside(const BBox3f pt, bool strict = false) const;
    bool overlaps(const BBox3f pt, bool strict = false) const;
    bool isValid() const;
    bool hasVolume() const;

    // modifiers
    BBox3f merge(const BBox3f &other) const;

    // intersections
    bool checkRay(const Ray3f &ray) const;
    bool checkRay(const Ray3f &ray, float &nearT, float &farT) const;

    // variables
    Vec3f min;
    Vec3f max;
};

// class BBox2f {
// public:
// };

FIRAL_NAMESPACE_END
