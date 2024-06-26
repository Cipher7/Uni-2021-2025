#include <GL/glut.h>

float viewer[3] = {0,0,5};

void sub()
{
	glColor3f(0,0,1);
	glutWireCube(1);
	glColor3f(1,1,0);
	glutWireSphere(2,20,20);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(viewer[0], viewer[1], viewer[2], 0,0,0,0,1,0);
	sub();
	glutSwapBuffers();
}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glOrtho(-5,5,-5,5,2,20);
	glMatrixMode(GL_MODELVIEW);
}

void keys(unsigned char key, int x, int y)
{
	if(key == 'x')
		viewer[0] += 0.1;
	else if(key == 'X')
		viewer[0] -= 0.1;
	else if(key == 'y')
		viewer[1] += 0.1;
	else if(key == 'Y')
		viewer[1] -= 0.1;
	else if(key == 'z')
		viewer[2] += 0.1;
	else if(key == 'Z')
		viewer[2] -= 0.1;

	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutCreateWindow("Submarine Animation");
	myinit();
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
	return 0;
}