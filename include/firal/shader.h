#include <firal/common.h>
#include <firal/inter.h>
#include <firal/module.h>
#include <nanogui/glutil.h>

FIRAL_NAMESPACE_BEGIN

class Shader : public Module {
public:
    Shader();
    ~Shader();

    virtual void initialize() = 0;
    virtual Col4f color(RayInter &isect) = 0;
protected:
    nanogui::GLShader glslImp;
};

FIRAL_NAMESPACE_END
