Laboratory work №1 (Computer graphics)
======================================
*In this lab work we create a window, point and triangles*

Initialization
==============
```glutInit(&argc, argv)``` - *GLUT initialization. The first parameter(**argc**) is a pointer to the number of arguments in the command line, and the second(**argv**) is a pointer to an array of arguments.*
```glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA)``` - *The main function of this function is to specify the type of display mode when creating a window. The mode parameter is a possible Boolean combination predefined in the glut library. You use mode to specify the color mode, number, and buffer type. **GLUT_DOUBLE** sets the double buffering where painting is done in the first buffer while the second buffer is displayed, then they swap places.The **GLUT_RGBA** parameter is used to display graphic information from the 4 RGB color components and ALPHA(transparency).
