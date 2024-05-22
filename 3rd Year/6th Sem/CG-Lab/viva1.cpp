// VIVA - Lab 3
using namespace std;
#include <GL/glut.h>
#include <iostream>
#include <cmath>

float tri[3][3] = {{-100,100,0}, {-100,-100,100}, {1,1,1}};
int N=3;
float tx=50, ty=50;

float px = -100, py = -100;

float sx=0.5, sy=0.5;
float fx=-100,fy=-100;

void scale_tri()
{
	glBegin(GL_LINE_LOOP);
	for (int i=0;i<N;i++)
	{
		float x = tri[0][i], y = tri[1][i];
		float xb = x*sx;
		float yb = y*sy;

		//float xb = x*sx + fx*(1-sx);
		//float yb = y*sy + fy*(1-sy);
		glVertex2f(xb, yb);
	}
	glEnd();
}

void draw_tri()
{
	glBegin(GL_POLYGON);
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
	viva();
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
