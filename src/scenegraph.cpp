#include <firal/scenegraph.h>

FIRAL_NAMESPACE_BEGIN

SceneGraph::SceneGraph() {
    NOTIMP
}

SceneGraph::~SceneGraph() {
    NOTIMP
}

void SceneGraph::addObject(Transform* transform) {
    NOTIMP
}

void SceneGraph::addObject(Transform* transform, Transform* parent) {
    NOTIMP
}

void SceneGraph::updateLogic(float dt) {
    NOTIMP
}

void SceneGraph::updatePhysics(float dt) {
    NOTIMP
}

void SceneGraph::render() const {
    NOTIMP
}

void SceneGraph::calculateInfo() {
    NOTIMP
}

void SceneGraph::setMainCamera(Camera* camera) {
    NOTIMP
}

const SceneInformation& getSceneInfo() { return sceneInfo; }
const Camera* getMainCamera() { return mainCamera; }

FIRAL_NAMESPACE_END
