Laboratory work №1 (Computer graphics)
======================================
*In this lab work we create a window, point and triangles*

Initialization
==============
```glutInit(&argc, argv)``` - GLUT initialization. The first parameter(**argc**) is a pointer to the number of arguments in the command line, and the second(**argv**) is a pointer to an array of arguments.

```glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA)``` - The main function of this function is to specify the type of display mode when creating a window. The mode parameter is a possible Boolean combination predefined in the glut library. You use mode to specify the color mode, number, and buffer type. **GLUT_DOUBLE** sets the double buffering where painting is done in the first buffer while the second buffer is displayed, then they swap places.The **GLUT_RGBA** parameter is used to display graphic information from the 4 RGB color components and ALPHA(transparency).

```glutInitWindowSize(), glutInitWindowPosition()``` - Two functions in which the window size is initialized and the initial position on the screen is set 

```glutCreateWindow(char *name)``` - Creates a top-level window. The name will be provided to the window system as the window's name. The display state of a window is initially for the window to be shown. But the window's display state is not actually acted upon until glutMainLoop is entered. This means until glutMainLoop is called, rendering to a created window is ineffective because the window can not yet be displayed.

```GLenum res = glewInit()``` - is called to initialize the entry points of the extensions. If glewInit() returns GLEW_OK, initialization was successful and you can use available extensions as well as basic OpenGL functions.

```glGenBuffers(GLsizei n,GLuint * buffers)``` - glGenBuffers returns *n* buffer object names in *buffers*. The first argument defines the number of objects that you want to create, and the second is a reference to an array of GLuints type to store a pointer by which data will be stored.

```glBindBuffer(GLenum target, GLuint buffer)``` - binds a buffer object to the specified buffer binding point. *target* - specifies the target to which the buffer object is bound. *buffer* - specifies the name of a buffer object.

```glBufferData(GLenum	target, GLsizeiptr	size, const GLvoid *	data, GLenum	usage)``` - creates and initializes a buffer object's data store. *target* - specifies the target to which the buffer object is bound. *size* - specifies the size in bytes of the buffer object's new data store. *data* - specifies a pointer to data that will be copied into the data store for initialization, or NULL if no data is to be copied. *usage* - specifies the expected usage pattern of the data store.

```glVertexAttribPointer(GLuint	index, GLint	size, GLenum	type, GLboolean	normalized, GLsizei	stride, const GLvoid *	pointer)``` - define an array of generic vertex attribute data. *index* - specifies the index of the generic vertex attribute to be modified. *size* - Specifies the number of components per generic vertex attribute. Must be 1, 2, 3, 4. *type* - Specifies the data type of each component in the array. *normalized* - For glVertexAttribPointer, specifies whether fixed-point data values should be normalized (GL_TRUE) or converted directly as fixed-point values (GL_FALSE) when they are accessed. *stride* - Specifies the byte offset between consecutive generic vertex attributes. *pointer* - Specifies a offset of the first component of the first generic vertex attribute in the array in the data store of the buffer currently bound to the GL_ARRAY_BUFFER target.

```glBlendFunc()

