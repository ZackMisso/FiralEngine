#include <firal/mesh.h>

FIRAL_NAMESPACE_BEGIN

Mesh::Mesh() {
    NOTIMP
}

Mesh::~Mesh() {
    NOTIMP
}

uint32_t Mesh::getTriangleCount() const {
    NOTIMP
    return 0;
}

uint32_t Mesh::getVertCount() const {
    NOTIMP
    return 0;
}

const BBox3f Mesh::getBBox() const {
    NOTIMP
    return BBox3f();
}

const BBox3f Mesh::getBBox(uint32_t triIndex) const {
    NOTIMP
    return BBox3f();
}

const MatXf& Mesh::getVerts() const {
    NOTIMP
    return MatXf();
}

const MatXf& Mesh::getVertNorms() const {
    NOTIMP
    return MatXf();
}

const MatXf& Mesh::getVertTexCoords() const {
    NOTIMP
    return MatXf();
}

const MatXu& Mesh::getIndices() const {
    NOTIMP
    return MatXu();
}

void Mesh::setVerts(MatXf& param) {
    verts = param;
}

void Mesh::setVertNorms(MatXf& param) {
    norms = param;
}

void Mesh::setVertTexCoords(MatXf& param) {
    uvs = param;
}

void Mesh::setIndices(MatXu& param) {
    faces = param;
}

bool Mesh::rayIntersect(uint32_t index, const Ray3f &ray, float &u, float &v, float &t) const {
    NOTIMP
    return false;
}

std::string Mesh::toString() const {
    NOTIMP
    return "todo";
}

FIRAL_NAMESPACE_END
