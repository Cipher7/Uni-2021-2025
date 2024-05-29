// 2D Geometric Operations using glut library in-built functions

using namespace std;
#include <GL/glut.h>
#include <iostream>

#define TRANSLATE 1
int TRANSFORM = -1;

void object()
{
	glColor3f(.6, .2, .2);
	glBegin(GL_POLYGON);
	glVertex2f(-15,-50);glVertex2f(15,-50);
	glVertex2f(15,10);glVertex2f(-15,10);
	glEnd();

	glColor3f(.4, .6, .1);
	glBegin(GL_POLYGON);
	glVertex2f(-50,10);glVertex2f(0,40);glVertex2f(50,10);
	glEnd();

}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	object();
	glFlush();
}

void myinit()
{
	glClearColor(1,1,1,1);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-250,250,-250,250);
	glMatrixMode(GL_MODELVIEW);
}

void menu(int id)
{
	switch(id)
	{
	case 0:
		exit(0);
		break;
	case 1:
		TRANSFORM = TRANSLATE;
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("2D Geometric Operations");
	myinit();
	
	glutCreateMenu(menu);
	glutAddMenuEntry("Exit", 0);
	glutAddMenuEntry("Translate", 1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}