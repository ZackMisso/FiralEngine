#include <firal/module.h>

FIRAL_NAMESPACE_BEGIN

Module::Module() {
    NOTIMP
}

Module::~Module() {
    NOTIMP
}

RegList Module::registerNeeds() {
    NOTIMP
}

void Module::logicUpdate(float dt) {
    NOTIMP
}

void Module::physicsUpdate(float dt) {
    NOTIMP
}

void Module::setPriority(int param) {
    priority = param;
}

void Module::setName(std::string param) {
    name = param;
}

FIRAL_NAMESPACE_END
