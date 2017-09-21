#pragma once

#include <test/trianglescene.h>
#include <firal/mesh.h>
#include <firal/pointlight.h>

FIRAL_NAMESPACE_BEGIN

TriangleScene::TriangleScene() : Scene() {
    name = "triangle scene";
}

TriangleScene::~TriangleScene() { }

void TriangleScene::initialize() {
    std::cout << "Initializing Triangle Scene" << std::endl;
    initializeTriangle();
    initializeLight();
    initializeCamera();
}

void TriangleScene::initializeTriangle() {
    // create a transform for the triangle
    Transform* triTrans = new Transform();

    // create a triangle mesh for the transform
    Mesh* triMesh = new Mesh();

    // set the data for the triangle :: TODO
    NOTIMP
    MatXf triVerts;
    MatXu triIndices;
    MatXf triNorms;

    triMesh->setVerts(triVerts);
    triMesh->setIndices(triIndicies);
    triMesh->setNorms(triNorms);

    // link mesh to transform
    triTrans->setSceneObject(triMesh);

    // add triangle to scene
    sceneGraph->addChild(triTrans);
}

void TriangleScene::initializeLight() {
    // create a transform for the Light
    Transform* lightTrans = new Transform();

    // create a light for the transform
    PointLight* light = new PointLight();

    // link mesh to transform
    lightTrans->setSceneObject(light);

    // add light to scene
    sceneGraph->addChild(light);
}

void TriangleScene::initializeCamera() {
    NOTIMP
}

void TriangleScene::load() {
    // this scene requires no loading
}

FIRAL_NAMESPACE_END
