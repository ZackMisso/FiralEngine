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

void Transform::addChild(Transform* transform) {
    if (transform->parent != nullptr)
        transform->parent->removeChild(transform);
    transform->parent = this;
    children.push_back(transform);
}

void Transform::removeChild(int index) {
    auto it = std::next(children.begin(), index);
    std::swap(*it, children.back());
    children.pop_back();
}

void Transform::removeChild(Transform* transform) {
    auto it = std::find(children.begin(), children.end(), transform);
    std::swap(*it, children.back());
    children.pop_back();
}

void Transform::addModule(Module* module) {
    NOTIMP
}

void Transform::removeModule(Module* module) {
    auto it = std::find(modules.begin(), modules.end(), module);
    std::swap(*it, modules.back());
    modules.pop_back();
}

void Transform::removeModule(int index) {
    auto it = std::next(modules.begin(), index);
    std::swap(*it, modules.back());
    modules.pop_back();
}

void Transform::initializeModules() {
    for (int i = 0; i < modules.size(); i++)
        modules[i]->initialize();
}

std::vector<Module*> Transform::getPhysicsModules() {
    NOTIMP
    return modules;
}

std::vector<Module*> Transform::getLogicModules() {
    NOTIMP
    return modules;
}

void Transform::translate(const Vec3f& transVec) {
    NOTIMP
}

void Transform::scale(const Vec3f& scaleVec) {
    NOTIMP
}

void Transform::rotate(float angle, const Vec3f& axis) {
    NOTIMP
}

Mat4f Transform::makeTransMatrix(const Vec3f& transVec) const {
    NOTIMP
    return Mat4f();
}

Mat4f Transform::makeScaleMatrix(const Vec3f& scaleVec) const {
    NOTIMP
    return Mat4f();
}

Mat4f Transform::makeRotateMatrix(float angle, const Vec3f& axis) const {
    NOTIMP
    return Mat4f();
}

void Transform::setSceneObject(SceneObject* so) {
    sceneObject = so;
}

SceneObject* Transform::getSceneObject() {
    return sceneObject;
}

const std::vector<Module*>& Transform::getModules() const {
    return modules;
}

const std::vector<Transform*>& Transform::getChildren() const {
    return children;
}

std::string Transform::toString() const {
    NOTIMP
    return "todo";
}

FIRAL_NAMESPACE_END
