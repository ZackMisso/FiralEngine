#include <firal/perspcamera.h>

PerspectiveCamera::PerspectiveCamera(Vec2i size) : Camera(size) {
    // to be implemented
}

// Vec3f PerspectiveCamera::traceRay(Ray3f& ray, const Vec3f& samplePos) {
//     // to be implemented
//     return Vec3f();
// }

Ray3f PerspectiveCamera::generateRay(double u, double v) const {
    NOTIMP
}
