#include <GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1,0,0);
	// GL_POLYGON / GL_POINTS / GL_LINES / GL_LINE_LOOP / GL_TRIANGLES
	glBegin(GL_POINTS); 
	
	/*glVertex2f(-0.5,-0.5);
	glVertex2f(0.5,-0.5);
	glVertex2f(0.5,0.5);
	glVertex2f(-0.5,0.5);*/
	
	glVertex2i(125,125);
	glVertex2i(375,125);
	glVertex2i(375,375);
	glVertex2i(125,375);
	
	int N = 500;
	
	for(int i=0;i<20;i++)
		glVertex2f(rand()%N, rand()%N);
	
	glEnd();
	
	glFlush();
}

void myinit()
{
	glClearColor(0.5,0.5,0.5,1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,499,0,499);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(3.0);
	glLineWidth(2.0);
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
