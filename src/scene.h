#pragma once

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include "glm/glm.hpp"
#include "utilities.h"
#include "sceneStructs.h"


class Scene {
private:
    std::ifstream fp_in;
    int loadMaterial(std::string materialid);
    int loadGeom(std::string objectid);
    int loadCamera();
    int loadMesh(std::string meshId);

public:
    Scene(std::string filename);
    ~Scene();

    std::vector<Geom> geoms;
    std::vector<Material> materials;
    std::vector<Triangle> triangles;
    std::vector<Mesh> meshes;
    RenderState state;
};
