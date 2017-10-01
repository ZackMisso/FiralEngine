#include <test/trianglescene.h>
#include <firal/mesh.h>
#include <firal/pointlight.h>

FIRAL_NAMESPACE_BEGIN

RedShader::RedShader() {
    initialize();
}

RedShader::~RedShader() {
    // does nothing
}

void RedShader::initialize() {
    glslImp.init(
        /* An identifying name */
        "a_red_shader",

        /* Vertex shader */
        "#version 330\n"
        "in vec3 position;\n"
        "void main() {\n"
        "    gl_Position = vec4(position, 1.0);\n"
        "}",

        /* Fragment shader */
        "#version 330\n"
        "out vec4 color;\n"
        "void main() {\n"
        "    color = vec4(1.0, 0.0, 0.0, 1.0);\n"
        "}"
    );
}

Col4f RedShader::color(RayInter &isect) {
    return Col4f(1.f, 0.f, 0.f, 1.f);
}

TriangleScene::TriangleScene() : Scene() {
    name = "triangle scene";
}

TriangleScene::~TriangleScene() { }

void TriangleScene::initialize() {
    std::cout << "Initializing Triangle Scene" << std::endl;
    initializeTriangle();
    initializeCamera();
}

void TriangleScene::initializeTriangle() {
    // create a transform for the triangle
    Transform* triTrans = new Transform();

    // create a triangle mesh for the transform
    Mesh* triMesh = new Mesh();

    // set the data for the triangle
    MatXf triVerts(3, 3);
    MatXu triIndices(3, 1);
    MatXf triNorms(3, 3);

    triVerts.setZero();
    triIndices.setZero();
    triNorms.setZero();

    triVerts.col(0) << -0.5, -0.5, 0.0;
    triVerts.col(1) << 0.5, -0.5, 0.0;
    triVerts.col(2) << 0.0, 0.5, 0.0;

    triIndices.col(0) << 0, 1, 2;

    for (int i = 0; i < 3; ++i)
        triNorms.col(0) << 0.0, 0.0, 1.0;

    triMesh->setVerts(triVerts);
    triMesh->setIndices(triIndices);
    triMesh->setVertNorms(triNorms);

    // link mesh to transform
    triTrans->setSceneObject(triMesh);

    // create shader module for triangle
    RedShader* shader = new RedShader();
    triTrans->addModule(shader);

    // add triangle to scene
    sceneGraph->addChild(triTrans);
}

void TriangleScene::initializeCamera() {
    NOTIMP
}

void TriangleScene::load() {
    // this scene requires no loading
}

FIRAL_NAMESPACE_END
