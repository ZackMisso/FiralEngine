#include <firal/scenegraph.h>

FIRAL_NAMESPACE_BEGIN

SceneGraph::SceneGraph() {
    sceneObjects = std::vector<Transform*>();
    sceneInfo.name = "this is probably not needed";
    sceneInfo.numberTris = 1;
    sceneInfo.numberObjs = 3;
    sceneInfo.numberLights = 1;
    mainCamera = nullptr;
    dirty = false;
}

SceneGraph::~SceneGraph() {
    // camera should be stored in sceneObjects
    mainCamera = nullptr;
    while(sceneObjects.size() > 0) {
        delete sceneObjects[sceneObjects.size() - 1];
        sceneObjects.pop_back();
    }
}

void SceneGraph::addChild(Transform* transform) {
    sceneObjects.push_back(transform);
}

void SceneGraph::addChild(Transform* transform, Transform* parent) {
    parent->addChild(transform);
    if (transform->getParent() != nullptr)
        transform->getParent()->removeChild(transform);
    transform->setParent(parent);
}

void SceneGraph::render() const {
    NOTIMP
}

void SceneGraph::calculateInfo() {
    NOTIMP
}

void SceneGraph::setMainCamera(Camera* camera) {
    mainCamera = camera;
}

const SceneInformation& SceneGraph::getSceneInfo() const { return sceneInfo; }
const Camera* SceneGraph::getMainCamera() const { return mainCamera; }

FIRAL_NAMESPACE_END
