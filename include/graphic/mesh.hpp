
#pragma once

class Mesh
{
public:
    enum ColourScheme { landscape, water };

    float *vertexData;
    int nVertices;
    
public:
    Mesh( float *vertexData, int nVertices );
    Mesh( float *primaryNodes, int nPrimaryNodes, ColourScheme cs );
    ~Mesh();
};
