//2D transformations on basic objects using GLUT

#include<GL/glut.h>

#define ORIGINAL -1
#define TRANSLATE 1
#define ROTATEZ 2
#define ROTATE_PIV 3

int TRANSFORM = ORIGINAL;
float tx=50,ty = 50,tz=0;
float rz = 60, px=0, py=160;

void obj()
{
  glColor3f(.6,.2,.2);
  glBegin(GL_POLYGON);
    glVertex2f(-15,-50); glVertex2f(15,-50);
    glVertex2f(15,10); glVertex2f(-15,10);
  glEnd();
  
  glColor3f(.4,.6,.1);
  glBegin(GL_TRIANGLES);
    glVertex2f(-50,10); glVertex2f(0,60); glVertex2f(50,10); glColor3f(.3,.6,.1);
    glVertex2f(-50,40); glVertex2f(0,110); glVertex2f(50,40);glColor3f(.2,.6,.1);
    glVertex2f(-50,70); glVertex2f(0,160); glVertex2f(50,70);
  glEnd();
  
  glColor3f(1,0,0); glPointSize(5);
  glBegin(GL_POINTS); glVertex2f(0,159); glEnd();
}

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  switch(TRANSFORM)
  {
     case -1:
          obj();
          break;
     case TRANSLATE:
          glPushMatrix();
          glTranslatef(tx,ty,tz);
          obj();
          glPopMatrix();
          break;
     case ROTATEZ:
         glPushMatrix();
         glRotatef(rz,0,0,1);// rotate 30 deg about z axis
         obj();
         glPopMatrix();
         break;
     case ROTATE_PIV:
         glPushMatrix();
         glTranslatef(px,py,0);
         glRotatef(rz,0,0,1);
         glTranslatef(-px,-py,0);
		 obj();
         glPopMatrix();
         break;
   }
  glFlush();
}

void myinit()
{
  glClearColor(1,1,1,1);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(-250,250,-250,250);
  glMatrixMode(GL_MODELVIEW);
}

void menu(int id)
{
  switch(id)
  {
     case 0:
       exit(0);
       break;
     case -1:
        TRANSFORM = ORIGINAL;
        break;
     case 1:
		TRANSFORM = TRANSLATE;
        break;
   }
   glutPostRedisplay();
}

void rot_menu(int id)
{
  switch(id)
  {
	case 2:
      TRANSFORM = ROTATEZ;
      break;
    case 3:
      TRANSFORM = ROTATE_PIV;
      break;
}
  glutPostRedisplay();
}

int main(int argc, char **argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

   glutInitWindowSize(500,500);
   glutCreateWindow("2D Transformations on 2D objects");
   myinit();
   int rot_id = glutCreateMenu(rot_menu);
   glutAddMenuEntry("Rotate about z(60)",2);
   glutAddMenuEntry("Rotate about piv(0,160)",3);

   glutCreateMenu(menu); //main menu
   glutAddMenuEntry("Exit",0);
   glutAddMenuEntry("Original",-1);
   glutAddMenuEntry("Translate",1);
   glutAddSubMenu("Rotate",rot_id);

   glutAttachMenu(GLUT_RIGHT_BUTTON);

   glutDisplayFunc(display);

   glutMainLoop();
   return 0;
}