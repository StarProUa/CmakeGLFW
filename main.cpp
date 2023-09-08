#include <iostream>
#include "GLFW/glfw3.h"

using namespace std;

GLFWwindow *window;

int main()
{
	if(!glfwInit())
	{
		cout << "Failed to init library" << endl;
		return -1;
	}

	window = glfwCreateWindow(640, 480, "Test Win", nullptr, nullptr);

	if(!window)
	{
		cout << "Error to created window" << endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	glClearColor(1, 1, 1, 0);

	while(!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glColor3f(1, 0, 0);
		glPointSize(5);
		glBegin(GL_POINTS);
		glVertex2f(0, 0);
		glEnd();

		glfwPollEvents();
		glfwSwapBuffers(window);
	}

	glfwTerminate();
	return 0;
}
