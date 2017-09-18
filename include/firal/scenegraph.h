#include <firal/common.h>
#include <firal/transform.h>
#include <firal/camera.h>
#include <vector.h>

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

    void addObject(Transform* transform);
    void addObject(Transform* transform, Transform* parent);

    void updateLogic(float dt);
    void updatePhysics(float dt);
    void render() const;

    void calculateInfo();

    void setMainCamera(Camera* camera);

    const SceneInformation& getSceneInfo() const;
    const Camera* getMainCamera() const;
private:
    vector<Transform*> sceneObjects;
    SceneInformation sceneInfo;
    Camera* mainCamera;
    bool dirty;
};

FIRAL_NAMESPACE_END
