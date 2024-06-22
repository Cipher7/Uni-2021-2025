#include <GL/glut.h>
float viewer[3] = {0, 0, 5};
#define SPIN 1
#define STOP 0
int flag = STOP;
float theta = 0.0;
float mat_red[4] = {1, 0, 0, 0};
float mat_yellow[4] = {1, 1, 0, 0};
float mat_grey[4] = {0.7, 0.7, 0.7, 0};
float mat_shiny[] = {50};

void windmill()
{
	// head
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_red);
	glPushMatrix();
	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();
	// wings
	// glColor3f(1,1,0);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_yellow);
	glPushMatrix();
	glScalef(0.3, 3, 0.2);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glRotatef(90, 0, 0, 1);
	glScalef(0.3, 3, 0.2);
	glutSolidCube(1);
	glPopMatrix();
}

void wm_base()
{
	// body
	glColor3f(0.7, 0.7, 0.7);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_grey);
	glPushMatrix();
	glTranslatef(0, -4, -0.3);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(0.5, 4, 20, 20);
	glPopMatrix();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(viewer[0], viewer[1], viewer[2], 0, 0, 0, 0, 1, 0);
	// glutWireCube(2);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shiny);
	if (flag == SPIN)
	{
		glPushMatrix();
		glRotatef(theta, 0, 0, 1);
		theta -= 0.4;
		if (theta >= -360)
			theta += 360;
		windmill();
		glutPostRedisplay();
		glPopMatrix();
		wm_base();
	}
	else if (flag == STOP)
	{
		glPushMatrix();
		glRotatef(theta, 0, 0, 1);
		windmill();
		glPopMatrix();
		wm_base();
	}
	glutSwapBuffers();
}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glOrtho(-5, 5, -5, 5, 2, 20);
	glMatrixMode(GL_MODELVIEW);
}

void keys(unsigned char key, int x, int y)
{
	if (key == 'x')
		viewer[0] += 0.2;
	else if (key == 'X')
		viewer[0] -= 0.2;
	else if (key == 'y')
		viewer[1] += 0.2;
	else if (key == 'Y')
		viewer[1] -= 0.2;
	else if (key == 'z')
		viewer[2] -= 0.2;
	else if (key == 'Z')
		viewer[2] += 0.2;
	else if (key == 's')
		flag = SPIN;
	else if (key == 't')
		flag = STOP;

	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Animated Windmill");
	glutDisplayFunc(display);
	myinit();
	glutKeyboardFunc(keys);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glutMainLoop();
	return 0;
}