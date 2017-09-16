#pragma once

#include <firal/mesh.h>

FIRAL_NAMESPACE_BEGIN

struct RayInter {
    Vec3f p;
    Vec3f n;
    Vec2f uv;
    float t;
    const Mesh *mesh;
};

FIRAL_NAMESPACE_END
