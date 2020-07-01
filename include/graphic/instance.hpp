
#pragma once

#include <graphic/model.hpp>

class Instance
{
protected:
    Model *model;
    float x, y, z;

public:
    Instance( Model *model, float x=0, float y=0, float z=0 );
    void place( float x, float y, float z );
    void render();
};
