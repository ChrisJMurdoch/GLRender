
#pragma once

#include <graphic/mesh.hpp>

#include <glm/glm.hpp>

/** VBO mesh model */
class Model
{
public:
    enum USAGE { STREAM_DRAW = 0x88E0, STATIC_DRAW = 0x88E4, DYNAMIC_DRAW = 0x88E8,  };

private:
    // Mesh data
    USAGE usage;
    int nVertices;
    unsigned int VAO, VBO;

    // Shader data
    unsigned int program;

public:
    // Vertex attribute data
    static const int VERTEX_STRIDE = 9;
    static const int ATTR_COORDS = 0;
    static const int ATTR_COLOUR = 3;
    static const int ATTR_NORMAL = 6;

public:
    Model(Mesh &mesh, unsigned int program, USAGE usage = STATIC_DRAW);
    void bufferData(float *vertexData);
    void render( glm::vec3 position );
    ~Model();
};
