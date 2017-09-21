#include <firal/scenegraph.h>

FIRAL_NAMESPACE_BEGIN

SceneGraph::SceneGraph() : {
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
    while(sceneObjects.size() > 0)
        delete sceneObjects.pop_back();
}

void SceneGraph::addObject(Transform* transform) {
    sceneObjects->push_back(transform);
}

void SceneGraph::addObject(Transform* transform, Transform* parent) {
    parent->addChild(transform);
    if (transform->parent != nullptr)
        transform->parent->removeChild(transform);
    transform->parent = parent;
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

const SceneInformation& getSceneInfo() { return sceneInfo; }
const Camera* getMainCamera() { return mainCamera; }

FIRAL_NAMESPACE_END
