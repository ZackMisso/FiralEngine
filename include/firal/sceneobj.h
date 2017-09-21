#pragma once

#include <firal/common.h>
#include <string.h>

FIRAL_NAMESPACE_BEGIN

enum ObjectType {
    Object_Camera,
    Object_Light,
    Object_Static,
    Object_Player,
    Object_None
};

class SceneObject {
public:
    SceneObject();
    SceneObject(std::string name);
protected:
    std::string name;
    ObjectType type;
};

FIRAL_NAMESPACE_END
