// GLEW
#define GLEW_STATIC
#include <GL/glew.h>

// GLFW
#include <GLFW/glfw3.h>

// SOIL
#include <SOIL/SOIL.h>

// Function prototypes
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
char *textFileRead(char *fn);
int textFileWrite(char *fn, char *s);

