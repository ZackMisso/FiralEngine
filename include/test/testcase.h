#pragma once

#include <string.h>

FIRAL_NAMESPACE_BEGIN

class TestCase {
public:
    TestCase();
    TestCase(std::string name);

    // testcase methods
    virtual void evaluateTest() = 0;
    virtual void initializeTest() = 0;
    virtual void printTestInformation() const = 0;

protected:
    float percentComp;
    std::string name;
};

FIRAL_NAMESPACE_END
