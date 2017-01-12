#ifndef CODE_TEST_TMP_H
#define CODE_TEST_TMP_H

#include <string>

class Example
{
public:
    Example(std::string name);

    std::string getName();

private:
    std::string name;
};

Example::Example(std::string name) : name(name)
{}

std::string Example::getName()
{
    return name;
}

#endif //CODE_TEST_TMP_H
