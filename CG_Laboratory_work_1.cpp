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
    glEnableVertexAttribArray(0);
    glColor4f(0.0f, 1.0f, 0.0f, 0.2f);
    glDrawArrays(GL_TRIANGLES, 0, 6); // GL_TRIANGLES // GL_LINE_LOOP
    glDisableVertexAttribArray(0);
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

    glm::vec3 Vertices[6];
    Vertices[0] = glm::vec3(0.5f, 0.0f, 0.0f);
    Vertices[1] = glm::vec3(1.0f, 0.5f, 0.0f);
    Vertices[2] = glm::vec3(0.0f, 0.5f, 0.0f);
    Vertices[3] = glm::vec3(-0.5f, 0.0f, 0.0f);
    Vertices[4] = glm::vec3(-1.0f, -0.5f, 0.0f);
    Vertices[5] = glm::vec3(0.0f, -0.5f, 0.0f);

    GLfloat six_vertices[] =
    {
        0.5f, 0.0f, 0.0f,
        1.0f, 0.5f, 0.0f,
        0.0f, 0.5f, 0.0f,

        -0.5f, 0.0f, 0.0f,
        -1.0f, -0.5f, 0.0f,
        0.0f, -0.5f, 0.0f,
    };

    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO); //привязка array buff к указателю VBO
    glBufferData(GL_ARRAY_BUFFER, sizeof(six_vertices), six_vertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//
    glEnable(GL_BLEND); //enable alpha blending

    glutDisplayFunc(RenderSceneCB);
    glutMainLoop();
}
