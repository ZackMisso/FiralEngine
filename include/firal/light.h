#pragma once

#include <firal/sceneobj.h>
#include <firal/mesh.h>

FIRAL_NAMESPACE_BEGIN

class Light : public SceneObject {
public:
    Light();
    ~Light();
private:
    Mesh* mesh;
};

FIRAL_NAMESPACE_END
