#include <firal/camera.h>

FIRAL_NAMESPACE_BEGIN

Camera::Camera(Vec2i size) {
    NOTIMP
}

const Vec2i& Camera::getImageSize() const {
    return imageSize;
}

FIRAL_NAMESPACE_END
