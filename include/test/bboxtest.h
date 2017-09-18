#include <test/testcase.h>
#include <firal/bbox.h>

FIRAL_NAMESPACE_BEGIN

class BBoxTest : public TestCase {
public:
    BBoxTest();
    BBoxTest(std::string name);

    // testcase methods
    virtual void evaluateTest();
    virtual void initializeTest();
    virtual void printTestInformation() const;
};

FIRAL_NAMESPACE_END
