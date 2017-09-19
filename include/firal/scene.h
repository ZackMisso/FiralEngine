// I am still not sure if I want both a scene and scenegraph... need to see how
// both work in a ray tracer setting

#pragma once

#include <firal/scenegraph.h>

class Scene {
public:
    Scene();
    ~Scene();

    virtual void initialize(); // create and initialize scene
    virtual void load(); // load in needed resources
private:
    void mainLoop(float dt);
    void updateLogic(float dt);
    void updatePhysics(float dt);
protected:
    std::string name;
    SceneGraph* sceneGraph;
}
