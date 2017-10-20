#include <firal/cube.h>

FIRAL_NAMESPACE_BEGIN

Cube::Cube() {
    NOTIMP
}

Cube::~Cube() {
    NOTIMP
}

BBox3f Cube::computeBBox() {
    BBox3f bbox;
    NOTIMP
    return bbox;
}

bool Cube::rayHit(const Ray3f& ray, float* thit, RayInter* isect) {
    NOTIMP
    return false;
}

Vec3f Cube::getPosition() { return position; }
Vec3f Cube::getDimension() { return dimension; }

void Cube::setPosition(Vec3f param) { position = param; }
void Cube::setDimension(Vec3f param) { dimension = param; }

FIRAL_NAMESPACE_END
