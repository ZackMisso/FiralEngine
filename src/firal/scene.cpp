#include <firal/scene.h>

FIRAL_NAMESPACE_BEGIN

Scene::Scene() {
    sceneGraph = new SceneGraph();
    name = "no_name";
}

Scene::~Scene() {
    delete sceneGraph;
}

void Scene::initialize() {
    // does nothing for now
}

void Scene::load() {
    // does nothing for now
}

void Scene::mainLoop(float dt) {
    NOTIMP
}

void Scene::renderOneFrame() {
    NOTIMP
}

void Scene::updatePhysics(float dt) {
    NOTIMP
}

void Scene::updateLogic(float dt) {
    NOTIMP
}

FIRAL_NAMESPACE_END
