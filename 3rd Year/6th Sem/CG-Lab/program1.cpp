// Bresenhams line drawing Algo
using namespace std;
#include <GL/glut.h>
#include <iostream>

float ax=100,ay=100,bx=200,by=130;

void draw_pixel(float x, float y)
{
	glBegin(GL_POINTS);
	glVertex2f(x,y);
	glEnd();
}

void bres()
{
	// |m| < 1
	// check that point is going left to right
	float dy = by-ay, dx=bx-ax;
	float m = dy/dx;
	float inc=1;
	if(m < 0)
	{
		inc = -1;
	}
	
	if(abs(m) < 1)
	{
		float x = ax, y = ay;
		if(bx < ax)
		{
			swap(ax,bx);
			swap(ay,by);
		}
		float p = 2*dy - dx;
		
		while(x < bx)
		{
			if(p<0)
				p+=2*dy;
				
			else
			{
				y+=inc;
				p+=2*dy-2*dx;
			}
			x++;
			draw_pixel(x,y);
		}
	}
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0,0,1);
	bres();
	glPointSize(3.0);
	draw_pixel(ax, ay);
	draw_pixel(bx,by);
	
	glFlush();
}

void myinit()
{
	glClearColor(1,1,1,1);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,499,0,499);
	glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("Bresenham's Line Drawing Algorithm");
	myinit();
	glutDisplayFunc(display);
	
	glutMainLoop();
	return 0;
}
