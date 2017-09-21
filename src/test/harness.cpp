#include <test/harness.h>

FIRAL_NAMESPACE_BEGIN

TestHarness::TestHarness() {
    NOTIMP
}

TestHarness::~TestHarness() {
    NOTIMP
}

void TestHarness::initializeTests() {
    NOTIMP
}

// evaluates tests and stops at first failure
float TestHarness::evaluateTests() {
    NOTIMP
    return 0.f;
}

// evaluates all tests without stopping at failures
float TestHarness::evaluateAllTests() {
    NOTIMP
    return 0.f;
}

FIRAL_NAMESPACE_END
