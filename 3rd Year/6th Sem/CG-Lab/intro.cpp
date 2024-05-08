#include <GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5,-0.5);
	glVertex2f(0.5,-0.5);
	glVertex2f(0.5,0.5);
	glVertex2f(-0.5,0.5);
	glEnd();
	
	glFlush();
}

void myinit()
{
	glClearColor(0.5,0.5,0.5,1);
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
