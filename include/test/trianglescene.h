#include <firal/scene.h>

FIRAL_NAMESPACE_BEGIN

class TriangleScene : public Scene {
public:
    TriangleScene();
    ~TriangleScene();

    virtual void initialize();
    virtual void load();
private:
    void initializeTriangle();
    void initializeLight();
    void initializeCamera();
};

FIRAL_NAMESPACE_END
