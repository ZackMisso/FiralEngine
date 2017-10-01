#pragma once

#include <firal/scene.h>
#include <firal/shader.h>

FIRAL_NAMESPACE_BEGIN

class RedShader : public Shader {
public:
    RedShader();
    ~RedShader();

    virtual void initialize();
    virtual Col4f color(RayInter &isect);
};

class TriangleScene : public Scene {
public:
    TriangleScene();
    ~TriangleScene();

    virtual void initialize();
    virtual void load();
private:
    void initializeTriangle();
    void initializeCamera();
};

FIRAL_NAMESPACE_END
