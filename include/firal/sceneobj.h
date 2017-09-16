#pragma once

FIRAL_NAMESPACE_BEGIN

class SceneObject {
public:
    SceneObject();
    SceneObject(std::string name);
protected:
    std::string name;
    // Transform* transform;
};

FIRAL_NAMESPACE_END
