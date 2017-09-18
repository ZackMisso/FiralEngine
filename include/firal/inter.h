#pragma once

#include <firal/mesh.h>
#include <vector.h>

FIRAL_NAMESPACE_BEGIN

struct RayInter {
    Vec3f p;
    Vec3f n;
    Vec2f uv;
    float t;
    const Mesh *mesh;
};

struct CollisionInter {
    vector<Vec3f> ps;
    vector<Vec3f> ns;
    const Mesh* meshOne;
    const Mesh* meshTwo;
};

FIRAL_NAMESPACE_END
