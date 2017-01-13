#include "Example.hpp"

Example::Example(std::string name) : name(name)
{}

std::string Example::getName()
{
    return name;
}