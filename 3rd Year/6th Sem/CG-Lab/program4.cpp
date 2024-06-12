using namespace std;
#include <iostream>
#include <GL/glut.h>

int k=0;
float v[4][3] = {{0,0,1}, {-1,-1,-1}, {1,-1,-1}, {0,1,-1}};

void triangle(float a[3], float b[3], float c[3])
{
	glBegin(GL_TRIANGLES);
	glVertex3fv(a); glVertex3fv(b); glVertex3fv(c);
	glEnd();
}

void divide_triangle(float a[3], float b[3], float c[3], int k)
{
	if(k>0)
	{

	}
	else
		triangle(a,b,c);
}

void tetrahedron()
{
	glColor3f(1,0,0);
	divide_triangle(v[0], v[1], v[2], k);

	glColor3f(0,1,0);
	divide_triangle(v[1], v[2], v[3], k);

	glColor3f(0,0,1);
	divide_triangle(v[0], v[1], v[3], k);

}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	tetrahedron();
	glFlush();
}

void myinit()
{
	glClearColor(1,1,1,1);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-2,2,-2,2,-2,2);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);
	
	glutInitWindowSize(500,500);
	glutCreateWindow("3D Object Transformations - Sierpinski");
	myinit();

	glutDisplayFunc(display);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
	return 0;
}