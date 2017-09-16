#include <firal/transform.h>

FIRAL_NAMESPACE_BEGIN

Transform::Transform() {
    NOTIMP
}

Transform::Transform(const Transform* parent) {
    NOTIMP
}

Transform::Transform(Mat4f matrix) {
    NOTIMP
}

Transform::Transform(const Transform* parent, Mat4f matrix) {
    NOTIMP
}

void Transform::addChild(Transform& transform) {
    NOTIMP
}

void Transform::removeChild(int index) {
    NOTIMP
}

void Transform::removeChild(Transform& transform) {
    NOTIMP
}

void Transform::translate(Vec3f transVec) {
    NOTIMP
}

void Transform::scale(Vec3f scaleVec) {
    NOTIMP
}

void Transform::rotate(float angle, Vec3f axis) {
    NOTIMP
}

Mat4f Transform::makeTransMatrix(Vec3f transVec) const {
    NOTIMP
    return Mat4f();
}

Mat4f Transform::makeScaleMatrix(Vec3f scaleVec) const {
    NOTIMP
    return Mat4f();
}

Mat4f Transform::makeRotateMatrix(float angle, Vec3f axis) const {
    NOTIMP
    return Mat4f();
}

void Transform::setSceneObject(SceneObject* sceneObject) {
    NOTIMP
}

SceneObject* Transform::getSceneObject(sceneObject) {
    NOTIMP
    return nullptr;
}

const vector<Transform*>& Transform::getChildren() const {
    return children;
}

std::string Transform::toString() const {
    NOTIMP
    return "todo";
}

FIRAL_NAMESPACE_END
