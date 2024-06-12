using namespace std;
#include<iostream>
#include<GL/glut.h>
int k=0;
float v[4][3]={{0,0,1},{-1,-1,-1},{1,-1,-1},{0,1,-1}};
void triangle(float a[3],float b[3],float c[3]){
	glBegin(GL_TRIANGLES);
	glVertex3fv(a);glVertex3fv(b);glVertex3fv(c);
	glEnd();
}

void divide_triangle(float a[3],float b[3],float c[3],int k){
	if(k>0){
	//call recursively
	//finding midpoints
	float m1[3],m2[3],m3[3];
	//twisted sierpinski
	float r1=((double)rand()/RAND_MAX)/10;
	float r2=((double)rand()/RAND_MAX+1)/10;
	float r3=((double)rand()/RAND_MAX-1)/10;
	
	for(int i=0;i<3;i++){
		m1[i]=(a[i]+b[i])/2; m1[i]+=r1;
		m2[i]=(a[i]+c[i])/2; m2[i]+=r2;
		m3[i]=(b[i]+c[i])/2; m3[i]+=r3;
		
	}
	divide_triangle(a,m1,m2,k-1);
	divide_triangle(b,m1,m3,k-1);
	divide_triangle(c,m2,m3,k-1);
	}
	else
	{
	triangle(a,b,c);
	}
	
}
void tetrahedron(){
//bottom
	glColor3f(0,0,0);//black
	divide_triangle(v[1],v[2],v[3],k);
	glColor3f(1,0,0);
	divide_triangle(v[0],v[1],v[2],k);
	glColor3f(0,0,1);//black
	divide_triangle(v[0],v[1],v[3],k);
	glColor3f(1,1,0);//black
	divide_triangle(v[0],v[2],v[3],k);
	
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	//glRotatef(45,0,0,1);
	
	tetrahedron();
	glTranslatef(1.2,0.2,0);
	glScalef(1,1.3,1);
	tetrahedron();
	glTranslatef(-2.4,0,0);
	
	tetrahedron();
	glPopMatrix();
	glFlush();
}
void myinit(){
	//glClearColor(1,1,1,1);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-2,2,-2,2,-2,2);//left right bottom top near far(near and far is flipped)
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc,char **argv){
//k input
	cout<<"Enter the number of subdivisions";
	cin>>k;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE|GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutCreateWindow("3d opeartions-Sierpinski");
	myinit();
	glutDisplayFunc(display);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glutMainLoop();
	return 0;
}

