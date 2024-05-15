// Bresenhams line drawing Algo
#include <GL/glut.h>

float ax=100,ay=100,bx=200,by=130;

void draw_pixel(float x, float y)
{
	glBegin(GL_POINTS);
	glVertex2f(x,y);
	glEnd();
}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1,0,0);
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
