#include <firal/bbox.h>

FIRAL_NAMESPACE_BEGIN

BBox3f::BBox3f() {
    NOTIMP
}

BBox3f::BBox3f(Vec3f min, Vec3f max) {
    NOTIMP
}

bool BBox3f::operator==(const BBox3f &bbox) const {
    NOTIMP
    return false;
}

bool BBox3f::operator!=(const BBox3f &bbox) const {
    NOTIMP
    return false;
}

BBox3f BBox3f::operator+(const BBox3f &bbox) const {
    NOTIMP
    return BBox3f();
}

float BBox3f::getVolume() const {
    NOTIMP
    return 0.0f;
}

float BBox3f::getSurfaceArea() const {
    NOTIMP
    return 0.0f;
}

Vec3f BBox3f::getCenter() const {
    NOTIMP
    return Vec3f();
}

bool BBox3f::isInside(const Vec3f pt, bool strict = false) const {
    NOTIMP
    return false;
}

bool BBox3f::isInside(const BBox3f pt, bool strict = false) const {
    NOTIMP
    return false;
}

bool BBox3f::overlaps(const BBox3f pt, bool strict = false) const {
    NOTIMP
    return false;
}

bool BBox3f::isValid() const {
    NOTIMP
    return false;
}

bool BBox3f::hasVolume() const {
    NOTIMP
    return false;
}

BBox3f BBox3f::merge(const BBox3f &other) const {
    NOTIMP
    return BBox3f();
}

bool BBox3f::rayIntersect(const Ray3f &ray) const {
    NOTIMP
    return false;
}

bool BBox3f::rayIntersect(const Ray3f &ray, float &nearT, float &farT) const {
    NOTIMP
    return false;
}

FIRAL_NAMESPACE_END
