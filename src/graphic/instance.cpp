
#include <graphic/instance.hpp>

Instance::Instance( Model *model, float x, float y, float z )
{
    this->model = model;
    this->x = x;
    this->y = y;
    this->z = z;
}

void Instance::place( float x, float y, float z )
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void Instance::render()
{
    model->render( x, y, z );
}
