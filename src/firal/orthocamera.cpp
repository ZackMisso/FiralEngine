#include <firal/orthocamera.h>

FIRAL_NAMESPACE_BEGIN

OrthographicCamera::OrthographicCamera(Vec2i size) : Camera(size) { }

// Vec3f OrthographicCamera::traceRay(Ray3f &ray, const Vec2f &samplePos) const {
//     NOTIMP
//     return Vec3f(0.f, 0.f, 0.f);
// }

Ray3f OrthographicCamera::generateRay(double u, double v) const {
    NOTIMP
}

FIRAL_NAMESPACE_END
