#include <test/testcase.h>

FIRAL_NAMESPACE_BEGIN

class TestHarness {
public:
    TestHarness();
    ~TestHarness();

    void initializeTests();
    float evaluateTests();
    float evaluateAllTests();
private:
    std::vector<TestCase*> tests;
};

FIRAL_NAMESPACE_END
