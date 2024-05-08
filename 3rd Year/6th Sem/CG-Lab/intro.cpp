#include <GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void myinit()
{
	glClearColor(1,1,1,0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutCreateWindow("My first opengl program");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
