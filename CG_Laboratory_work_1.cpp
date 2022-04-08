#include<GL/glew.h>
#include<GL/freeglut.h>
#include<glm/vec3.hpp>
#include <iostream>
using namespace std;

GLuint VBO;

void RenderSceneCB()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glDrawArrays(GL_POINTS, 0, 1);
    glutSwapBuffers();
}

int main(int argc, char** argv)
{

    glutInit(&argc, argv); // инициализируем GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //устанавливает начальный режим отображения 

    glutInitWindowSize(800, 600);
    glutInitWindowPosition(200, 50);
    glutCreateWindow("Window");

    GLenum res = glewInit();
    if (res != GLEW_OK)
    {
        fprintf(stderr, "Error: '%s'\n", glewGetErrorString(res));
        return 1;
    }
    glm::vec3 Vertices[1];
    Vertices[0] = glm::vec3(0.0f, 0.0f, 0.0f);
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glutDisplayFunc(RenderSceneCB);
    glutMainLoop();
}
