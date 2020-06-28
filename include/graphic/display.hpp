
#pragma once

#include <graphic/instance.hpp>

class Display
{
public:
    Display();
    void refresh( float currentTime, float deltaTime );
    unsigned int addShaderProg(const char *vertFilePath, const char *fragFilePath);
    void addInstance(Instance *instance);
    bool shouldClose();
};
