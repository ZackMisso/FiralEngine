#pragma once

#include <firal/common.h>
#include <firal/bbox.h>
#include <firal/sceneobj.h>

FIRAL_NAMESPACE_BEGIN

class Mesh : public SceneObject {
public:
    Mesh();
    ~Mesh();

    // geometry data
    uint32_t getTriangleCount() const;
    uint32_t getVertCount() const;
    const BBox3f getBBox() const;
    const BBox3f getBBox(uint32_t triIndex) const;
    const MatXf &getVerts() const;
    const MatXf &getVertNorms() const;
    const MatXf &getVertTexCoords() const;
    const MatXu &getIndices() const;
    void setVerts(MatXf& param);
    void setVertNorms(MatXf& param);
    void setVertTexCoords(MatXf& param);
    void setIndices(MatXu& param);

    // ray intersection
    bool rayIntersect(uint32_t index, const Ray3f &ray, float &u, float &v, float &t) const;

    // misc methods
    std::string toString() const;

protected:
    MatXf verts;
    MatXf norms;
    MatXf uvs;
    MatXu faces;
    BBox3f bbox;
};

FIRAL_NAMESPACE_END
