// Bresenhams line drawing Algo
using namespace std;
#include <GL/glut.h>
#include <iostream>
#include <cmath>

float tri[3][3] = {{-100,100,0}, {-100,-100,100}, {1,1,1}};
int N=3;
float tx=50, ty=50;

float theta = 30;
float thetar = theta * (M_PI/180);

void rotate_tri()
{
	glBegin(GL_LINE_LOOP);
	for (int i=0;i<N;i++)
	{
		float x = tri[0][i], y = tri[1][i];
		float xb = x*cos(thetar) - y*sin(thetar);
		float yb = x*sin(thetar) + y*cos(thetar);
		glVertex2f(xb, yb);
	}
	glEnd();
}

void translate_tri()
{
	glBegin(GL_LINE_LOOP);
	for (int i=0;i<N;i++)
		glVertex2f(tri[0][i]+tx, tri[1][i]+ty);
	glEnd();
}

void draw_tri()
{
	glBegin(GL_LINE_LOOP);
	for (int i=0;i<N;i++)
		glVertex2f(tri[0][i], tri[1][i]);
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1,0,0);
	draw_tri(); 
	glColor3f(1,0,1);
	//translate_tri();
	rotate_tri();
	glFlush();
}

void myinit()
{
	glClearColor(1,1,1,1);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-250,250,-250,250);
	glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("2D Geometric Operations");
	myinit();
	glutDisplayFunc(display);
	
	glutMainLoop();
	return 0;
}
