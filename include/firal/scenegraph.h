#include <firal/common.h>
#include <firal/transform.h>
#include <firal/camera.h>
#include <vector>

FIRAL_NAMESPACE_BEGIN

struct SceneInformation {
    std::string name;
    long numberTris;
    long numberObjs;
    long numberLights;
};

class SceneGraph {
public:
    SceneGraph();
    ~SceneGraph();

    void addChild(Transform* transform);
    void addChild(Transform* transform, Transform* parent);

    void render() const; // TODO :: scene graph design is bad for a raytracer

    void calculateInfo();

    void setMainCamera(Camera* camera);

    const SceneInformation& getSceneInfo() const;
    const Camera* getMainCamera() const;
private:
    std::vector<Transform*> sceneObjects;
    SceneInformation sceneInfo;
    Camera* mainCamera;
    bool dirty;
};

FIRAL_NAMESPACE_END
