#include <firal/camera.h>

FIRAL_NAMESPACE_BEGIN

Camera::Camera(Eigen::Vector2i size) {
    NOTIMP
}

const Eigen::Vector2i& Camera::getImageSize() const {
    return imageSize;
}

FIRAL_NAMESPACE_END
