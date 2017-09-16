#pragma once

#include <firal/common.h>
#include <firal/bbox.h>

FIRAL_NAMESPACE_BEGIN

class Mesh {
public:
    Mesh();
    ~Mesh();
    // geometry data
    uint32_t getTriangleCount() const;
    uint32_t getVertexCount() const;
    const BBox3f getBBox() const;
    BBox3f getBBox(uint32_t triIndex) const;
};

FIRAL_NAMESPACE_END
