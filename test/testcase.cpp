#include <test/testcase.h>

FIRAL_NAMESPACE_BEGIN

TestCase::TestCase() : name("no_name"), percentComp(0.f) { }

TestCase::TestCase(std::string name) : name(name), percentComp(0.f) { }

FIRAL_NAMESPACE_END
