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

```glBlendFunc(GLenum	sfactor, GLenum	dfactor)``` - specify pixel arithmetic. *sfactor* - Specifies how the red, green, blue, and alpha source blending factors are computed. *dfactor* - Specifies how the red, green, blue, and alpha destination blending factors are computed. *glBlendFunc* defines the operation of blending when it is enabled. *sfactor* specifies which method is used to scale the source color components. *dfactor* specifies which method is used to scale the destination color components.

```glEnable(GLenum cap)``` - enable or disable server-side GL capabilities. *cap* - specifies a symbolic constant indicating a GL capability. glEnable and glDisable enable and disable various capabilities. Use glIsEnabled or glGet to determine the current setting of any capability.

```glutDisplayFunc(void (*func)(void))``` - sets the display callback for the current window.

```glutMainLoop(void)``` -  call our main rendering loop. glutMainLoop enters the GLUT event processing loop. This routine should be called at most once in a GLUT program. Once called, this routine will never return. It will call as necessary any callbacks that have been registered.

```glClearColor(GLclampf	red, GLclampf	green, GLclampf	blue, GLclampf	alpha)``` - specifies the red, green, blue, and alpha values used by glClear to clear the color buffers. Values specified by glClearColor are clamped to the range [0,1].

```glClear(GLbitfield mask)``` - clear buffers to preset values. *mask* - bitwise OR of masks that indicate the buffers to be cleared. **GL_COLOR_BUFFER_BIT** indicates the buffers currently enabled for color writing.

```glEnableVertexAttribArray(GLuint	index) | glDisableVertexAttribArray(GLuint	index)``` - Enable or disable a generic vertex attribute array specified by index. If enabled, the values in the generic vertex attribute array will be accessed and used for rendering when calls are made to vertex array commands such as **glDrawArrays, glDrawElements, glDrawRangeElements, glMultiDrawElements, or glMultiDrawArrays**. 

```glutSwapBuffers(void)``` - swaps the buffers of the current window if double buffered. Performs a buffer swap on the layer in use for the current window. Specifically, glutSwapBuffers promotes the contents of the back buffer of the layer in use of the current window to become the contents of the front buffer. The contents of the back buffer then become undefined. The update typically takes place during the vertical retrace of the monitor, rather than immediately after glutSwapBuffers is called.

