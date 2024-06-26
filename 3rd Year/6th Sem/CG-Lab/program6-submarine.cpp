#include <GL/glut.h>
#define SPIN 1
#define STOP 0
#define MOVE 1

int mx = MOVE;
int flag = STOP;
float theta = 0;
float tx = 0;

float viewer[3] = {0,0,5};

void rotors()
{
	glColor3f(1,0,0);

	glPushMatrix();
	glScalef(1.5,0.2,0.2);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glRotatef(90,0,0,1);
	glScalef(1.5,0.2,0.2);
	glutSolidCube(1);
	glPopMatrix();
}

void sub()
{
	glPushMatrix();
	glTranslatef(0,0,-2);
	glutSolidSphere(0.5,20,20);
	glPopMatrix();

	glColor3f(0,1,1);
	glPushMatrix();
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();
	glTranslatef(0,0,-1.8);
	gluCylinder(quadratic,0.5,0.3,1.8,32,32);
	glPopMatrix();

	if(flag == SPIN)
	{
		glPushMatrix();
		glRotatef(theta,0,0,1);
		rotors();
		glPopMatrix();
		theta += 0.5;
		if(theta >= 360)
			theta -= 360;
		glutPostRedisplay();
	}
	else
	{
		glPushMatrix();
		glRotatef(theta,0,0,1);
		rotors();
		glPopMatrix();
	}
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(viewer[0], viewer[1], viewer[2], 0,0,0,0,1,0);
	glPushMatrix();
	glRotatef(-70,0,1,0);
	glRotatef(10,0,1,0);
	if(mx)
	{
		glPushMatrix();
		glTranslatef(tx, 0, 0);
		sub();
		glPopMatrix();
	}

	glPopMatrix();
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


	else if(key == 'p')
		flag = SPIN;
	else if(key == 'P')
		flag = STOP;
	else if(key == 'd')
	{
		tx += 0.2;
		flag = MOVE;
	}

	else if(key == 'a')
	{
		tx -= 0.2;
		flag = MOVE;
	}
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