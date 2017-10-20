#include <firal/sphere.h>

FIRAL_NAMESPACE_BEGIN

Sphere::Sphere() {
    NOTIMP    
}

Sphere::~Sphere() {
    NOTIMP
}

BBox3f Sphere::computeBBox() {
    BBox3f bbox;
    // should be straightforward
    NOTIMP
    return bbox;
}

bool Sphere::rayHit(const Ray3f& ray, float* thit, RayInter *isect) {
    NOTIMP
    return false;
}

Vec3f Sphere::getCenter() { return center; }
float Sphere::getRadius() { return radius; }

void Sphere::setCenter(Vec3f param) { center = param; }
void Sphere::setRadius(float param) { radius = param; }

FIRAL_NAMESPACE_END
