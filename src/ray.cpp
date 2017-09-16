#include <firal/ray.h>

FIRAL_NAMESPACE_BEGIN

Ray3f::Ray3f() {
    NOTIMP
}

Ray3f::Ray3f(Vec3f o, Vec3f dir) {
    NOTIMP
}

Ray3f::Ray3f(Vec3f o, Vec3f dir, float mint, float maxt) {
    NOTIMP
}

Ray3f Ray3f::reverse() const {
    NOTIMP
    return Ray3f();
}

std::string Ray3f::toString() const {
    NOTIMP
    return "todo";
}

FIRAL_NAMESPACE_END
