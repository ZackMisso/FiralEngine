#pragma once

#include <firal/common.h>
#include <firal/mesh.h>
#include <firal/module.h>
#include <vector.h>

FIRAL_NAMESPACE_BEGIN

class Transform {
public:
    Transform();
    Transform(const Transform* parent);
    Transform(Mat4f matrix);
    Transform(const Transform* parent, Mat4f matrix);

    // container methods
    void addChild(Transform* transform);
    void removeChild(int index);
    void removeChild(Transform* transform);

    void addModule(Module* module);
    void removeModule(Module* module);
    void removeModule(int index);

    // module methods
    void initializeModules();
    vector<Module*> getPhysicsModules(); // TODO :: organize modules better
    vector<Module*> getLogicModules();

    // geometric transformations
    void translate(const Vec3f& transVec);
    void scale(const Vec3f& scaleVec);
    void rotate(float angle, const Vec3f& axis);

    Mat4f makeTransMatrix(const Vec3f& transVec) const;
    Mat4f makeScaleMatrix(const Vec3f& scaleVec) const;
    Mat4f makeRotateMatrix(float angle, const Vec3f& axis) const;

    // getter and setter methods
    void setSceneObject(SceneObject* so);
    SceneObject* getSceneObject();
    const vector<Module*>& getModules() const;
    const vector<Transform*>& getChildren() const;

    std::string toString() const;
protected:
    const Transform* parent;
    vector<Transform*> children;
    vector<Module*> modules;
    Mat4f localTransform;
    Mat4f globalTransform;
    SceneObject* sceneObject;
    bool dirty;
};

FIRAL_NAMESPACE_END
