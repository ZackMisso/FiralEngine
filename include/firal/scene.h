// I am still not sure if I want both a scene and scenegraph... need to see how
// both work in a ray tracer setting

#pragma once

#include <firal/scenegraph.h>

FIRAL_NAMESPACE_BEGIN

class Scene {
public:
    Scene();
    ~Scene();

    virtual void initialize(); // create and initialize scene
    virtual void load(); // load in needed resources

    void renderOneFrame();
private:
    void mainLoop(float dt);
    void updateLogic(float dt);
    void updatePhysics(float dt);
protected:
    std::string name;
    SceneGraph* sceneGraph;
};

FIRAL_NAMESPACE_END
