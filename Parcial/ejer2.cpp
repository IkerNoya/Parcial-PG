#include "GLFW/glfw3.h"
int main()
{
    GLFWwindow* window;
	if (!glfwInit())
	{
		return -1;
	}
	window = glfwCreateWindow(1280, 720, "Ejer2-Parcial", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1; 
	}
	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();
    return 0;
}