#pragma once

#include <firal/common.h>
#include <firal/mesh.h>
#include <vector.h>

FIRAL_NAMESPACE_BEGIN

class Transform {
public:
    Transform();
    Transform(const Transform* parent);
    Transform(Mat4f matrix);
    Transform(const Transform* parent, Mat4f matrix);

    void addChild(Transform& transform);
    void removeChild(int index);
    void removeChild(Transform& transform);

    void translate(Vec3f transVec);
    void scale(Vec3f scaleVec);
    void rotate(float angle, Vec3f axis);

    Mat4f makeTransMatrix(Vec3f transVec) const;
    Mat4f makeScaleMatrix(Vec3f scaleVec) const;
    Mat4f makeRotateMatrix(float angle, Vec3f axis) const;

    void setSceneObject(SceneObject* sceneObject);
    SceneObject* getSceneObject(sceneObject);

    const vector<Transform*>& getChildren() const;

    std::string toString() const;
protected:
    const Transform* parent;
    vector<Transform*> children;
    Mat4f localTransform;
    Mat4f globalTransform;
    SceneObject* sceneObject;
    bool dirty;
};

FIRAL_NAMESPACE_END
