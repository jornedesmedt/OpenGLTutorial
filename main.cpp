#include <iostream>
#include "GL/glew.h"
#include "Display.h"
#include "Mesh.h"
#include "Shader.h"

using namespace std;

int main(int argc, char *argv[])
{
    Display display(800, 600, "Hello World!");

    Vertex vertices[] = {
        Vertex(glm::vec3(-0.5, -0.5, 0)),
        Vertex(glm::vec3(0, 0.5, 0)),
        Vertex(glm::vec3(0.5,-0.5, 0))
    };
    Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));
    Shader shader("./res/basicShader");



    while(!display.IsClosed())
    {
        display.Clear();

        shader.Bind();
        mesh.Draw();

        display.Update();
    }
    return 0;
}
