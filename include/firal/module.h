#pragma once

#include <firal/common.h>
#include <string.h>

FIRAL_NAMESPACE_BEGIN

struct RegList {
    bool needsPhysics;
    bool needsLogic;
    bool isShader;
};

class Module {
public:
    Module();
    ~Module();

    RegList registerNeeds();

    virtual void initialize();
    virtual void logicUpdate(float dt);
    virtual void physicsUpdate(float dt);

    void setPriority(int param);
    void setName(std::string param);
protected:
    std::string name;
    int priority;
    bool logicFlag;
    bool physicsFlag;
};

FIRAL_NAMESPACE_END
