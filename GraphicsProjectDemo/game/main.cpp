#include<cstdio>

#include <GL/gl.h>
//#include <GL/glut.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

void Head()
{
     glBegin(GL_QUADS);//roof
    glColor3ub(237, 229, 222);

    glVertex2f(0.56f,-0.26f);
    glVertex2f(0.6f,-0.26f);
    glVertex2f(0.6f,-0.2f);
    glVertex2f(0.56f,-0.2f);

    glEnd();
//cul
    glBegin(GL_QUADS);//roof
    glColor3ub(56, 54, 52);

    glVertex2f(0.56f,-0.2f);
    glVertex2f(0.6f,-0.2f);
    glVertex2f(0.6f,-0.187f);
    glVertex2f(0.55f,-0.187f);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(56, 54, 52);
	glVertex2f(0.57f, -0.21f);    // x, y
	glVertex2f(0.59f, -0.21f);    // x, y

	glEnd();

	glPointSize(3.0);
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3ub(56, 54, 52);
	glVertex2f(0.58f, -0.22f);    // x, y

	glEnd();

	glLineWidth(1.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(232, 176, 120);
	glVertex2f(0.575f, -0.24f);    // x, y
	glVertex2f(0.59f, -0.24f);    // x, y

	glEnd();

  glBegin(GL_QUADS);//roof
    glColor3ub(181, 142, 103);

    glVertex2f(0.575f,-0.276f);
    glVertex2f(0.586f,-0.276f);
    glVertex2f(0.586f,-0.26f);
    glVertex2f(0.575f,-0.26f);

    glEnd();

}

void Body()
{
    glBegin(GL_QUADS);//roof
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.556f,-0.276f);
    glVertex2f(0.603f,-0.276f);
    glVertex2f(0.603f,-0.37f);
    glVertex2f(0.556f,-0.37f);

    glEnd();
}

void Leg()
{
  glBegin(GL_QUADS);//roof
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.603f,-0.37f);
    glVertex2f(0.56f,-0.37f);
     glVertex2f(0.56f,-0.42f);
    glVertex2f(0.603f,-0.42f);

    glEnd();
//baka pa
    glBegin(GL_QUADS);//roof
    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(0.54f,-0.5f);
    glVertex2f(0.56f,-0.5f);
    glVertex2f(0.59f,-0.37f);
    glVertex2f(0.56f,-0.37f);

    glEnd();
////
   glBegin(GL_QUADS);//roof
    glColor3f(0.0f, 0.0f, 1.0f);


    glVertex2f(0.54f,-0.6f);
    glVertex2f(0.56f,-0.6f);
    glVertex2f(0.56f,-0.37f);
    glVertex2f(0.55f,-0.37f);
    glEnd();

    glLineWidth(5.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(56, 54, 52);
	glVertex2f(0.53f, -0.61f);    // x, y
	glVertex2f(0.56f, -0.61f);    // x, y

	glEnd();
////right pa
	glBegin(GL_QUADS);//roof
    glColor3f(0.0f, 0.0f, 1.0f);


    glVertex2f(0.584f,-0.37f);
    glVertex2f(0.603f,-0.37f);
    glVertex2f(0.603f,-0.6f);
    glVertex2f(0.584f,-0.6f);

    glEnd();

    glLineWidth(5.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(56, 54, 52);
	glVertex2f(0.57f, -0.61f);    // x, y
	glVertex2f(0.603f, -0.61f);    // x, y

	glEnd();
}

void Hand()
{
   glBegin(GL_QUADS);//roof
    //glColor3f(0.0f, 1.0f, 0.0f);
    glColor3ub(232, 176, 120);
    glVertex2f(0.515f,-0.376f);
    glVertex2f(0.535f,-0.376f);
    glVertex2f(0.58f,-0.3f);
    glVertex2f(0.56f,-0.3f);



    glEnd();
}
void Rasta()
{
     glBegin(GL_POLYGON);//roof
    //glColor3f(0.0f, 1.0f, 0.0f);
    glColor3ub(232, 176, 120);
    glVertex2f(-1.0f,-0.4f);
    glVertex2f(0.55f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,-0.6f);
    glVertex2f(-1.0f,0.15f);

    glEnd();
}

void Dokan_pat()
{

     glBegin(GL_QUADS);//roof
    //glColor3f(1.0f, 0.0f, 0.0f);
    glColor3ub(164, 209, 163);
    glVertex2f(-0.7f,0.07f);
    glVertex2f(-0.2f,0.07f);
    glVertex2f(-0.2f,0.7f);
    glVertex2f(-0.7f,0.7f);


    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(57, 89, 57);
	glVertex2f(-0.7f, 0.65f);    // x, y
	glVertex2f(-0.2f, 0.65f);    // x, y
	glVertex2f(-0.7f, 0.6f);    // x, y
	glVertex2f(-0.2f, 0.6f);    // x, y
	glVertex2f(-0.7f, 0.55f);    // x, y
	glVertex2f(-0.2f, 0.55f);    // x, y
	glVertex2f(-0.7f, 0.5f);    // x, y
	glVertex2f(-0.2f, 0.5f);    // x, y
	glVertex2f(-0.7f, 0.45f);    // x, y
	glVertex2f(-0.2f, 0.45f);    // x, y

	glVertex2f(-0.7f, 0.35f);    // x, y
	glVertex2f(-0.2f, 0.35f);    // x, y
	glVertex2f(-0.7f, 0.3f);    // x, y
	glVertex2f(-0.2f, 0.3f);    // x, y
	glVertex2f(-0.7f, 0.25f);    // x, y
	glVertex2f(-0.2f, 0.25f);    // x, y
	glVertex2f(-0.7f, 0.2f);    // x, y
	glVertex2f(-0.2f, 0.2f);    // x, y
	glEnd();

    glLineWidth(3.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(57, 89, 57);
	glVertex2f(-0.7f, 0.15f);    // x, y
	glVertex2f(-0.2f, 0.15f);    // x, y

    glVertex2f(-0.39f, 0.4f);    // x, y
	glVertex2f(-0.2f, 0.4f);    // x, y

	glVertex2f(-0.7f, 0.4f);    // x, y
	glVertex2f(-0.51f, 0.4f);    // x, y

    glVertex2f(-0.51f, 0.4f);    // x, y
	glVertex2f(-0.51f, 0.15f);    // x, y

	glVertex2f(-0.39f, 0.4f);    // x, y
	glVertex2f(-0.39f, 0.15f);    // x, y
	glEnd();

    glBegin(GL_QUADS);//roof
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.7f,0.15f);
    glVertex2f(-0.51f,0.15f);
    glVertex2f(-0.51f,0.4f);
    glVertex2f(-0.7f,0.4f);

    glEnd();

    glBegin(GL_QUADS);//roof
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.39f,0.15f);
    glVertex2f(-0.2f,0.15f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(-0.39f,0.4f);

    glEnd();
//window
     glBegin(GL_QUADS);//roof
   // glColor3f(0.0f, 1.0f, 0.0f);
    glColor3ub(147, 78, 29);
    glVertex2f(-0.5f,0.08f);
    glVertex2f(-0.4f,0.08f);
    glVertex2f(-0.4f,0.35f);
    glVertex2f(-0.5f,0.35f);

    glEnd();

       glBegin(GL_QUADS);//roof
    glColor3f(1.0f, 0.0f, 0.0f);
    //glColor3ub(147, 78, 29);
    glVertex2f(-0.5f,0.08f);
    glVertex2f(-0.47f,0.1f);
    glVertex2f(-0.47f,0.33f);
    glVertex2f(-0.5f,0.35f);

    glEnd();


       glBegin(GL_QUADS);//roof
    glColor3f(1.0f, 0.0f, 0.0f);
    //glColor3ub(147, 78, 29);
    glVertex2f(-0.4f,0.08f);
    glVertex2f(-0.43f,0.1f);
    glVertex2f(-0.43f,0.33f);
    glVertex2f(-0.4f,0.35f);

    glEnd();

    glLineWidth(7.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	//glColor3ub(57, 89, 57);
	 glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.21f);    // x, y
	glVertex2f(-0.47f, 0.21f);    // x, y
	glEnd();

//cala
glBegin(GL_POLYGON);
    //glColor3f(1.0f, 1.0f, 1.0f);
    glColor3ub(220, 229, 220);
    glVertex2f(-0.71f, 0.42f);
    glVertex2f( -0.19f, 0.42f);
    glVertex2f( -0.25f, 0.52f);
    glVertex2f( -0.66f, 0.52f);
     glVertex2f(-0.71f, 0.42f);
    //glVertex2f(-0.7f,  -0.8f);
    glEnd();

    glLineWidth(7.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	//glColor3ub(57, 89, 57);
	 glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.66f, 0.52f);    // x, y
	glVertex2f(-0.7f, 0.42f);    // x, y
	glVertex2f(-0.61f, 0.52f);    // x, y
	glVertex2f(-0.66f, 0.42f);    // x, y

	glVertex2f(-0.56f, 0.52f);    // x, y
	glVertex2f(-0.6f, 0.42f);    // x, y
	glVertex2f(-0.5f, 0.52f);    // x, y
	glVertex2f(-0.54f, 0.42f);    // x, y

    glVertex2f(-0.45f, 0.52f);    // x, y
	glVertex2f(-0.48f, 0.42f);    // x, y

	glVertex2f(-0.43f, 0.52f);    // x, y
	glVertex2f(-0.42f, 0.42f);    // x, y

	glVertex2f(-0.39f, 0.52f);    // x, y
	glVertex2f(-0.37f, 0.42f);    // x, y

   glVertex2f(-0.35f, 0.52f);    // x, y
	glVertex2f(-0.32f, 0.42f);    // x, y

    glVertex2f(-0.3f, 0.52f);    // x, y
	glVertex2f(-0.26f, 0.42f);    // x, y

	glVertex2f(-0.25f, 0.52f);    // x, y
	glVertex2f(-0.2f, 0.42f);    // x, y

	glEnd();

}

void Grass()
{
    glBegin(GL_POLYGON);//roof
    glColor3f(0.0f, 1.0f, 0.0f);
    //glColor3ub(147, 78, 29);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(0.55f,-1.0f);
    glColor3ub(18, 132, 22);
    glVertex2f(0.43f,-0.8f);
    glVertex2f(-1.0f,0.15f);

    glEnd();
}


 void display()
 {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   Grass();
Rasta();
Head();
Hand();
 Body();
 Leg();

 Dokan_pat();


   glFlush();
}





int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1000, 660);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
//   init();
  // glutKeyboardFunc(handleKeypress);
  //glutMouseFunc(handleMouse);
 // glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
