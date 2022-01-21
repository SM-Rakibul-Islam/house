#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

//Green Triangle
glColor3ub (0,255,0);
glBegin(GL_POLYGON);
glVertex2d (300, 400);
glVertex2d (550, 250);
glVertex2d (50, 250);
glEnd();

//White Rectangle
glColor3ub (255,255,224);
glBegin(GL_POLYGON);
glVertex2d (50, 250);
glVertex2d (550, 250);
glVertex2d (550,50);
glVertex2d (50, 50);
glEnd();

//Red Rectangle 1
glColor3ub (255,0,0);
glBegin(GL_POLYGON);
glVertex2d (100, 200);
glVertex2d (200, 200);
glVertex2d (200, 140);
glVertex2d (100, 140);
glEnd();

//Red Rectangle 2
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (400, 200);
glVertex2d (500, 200);
glVertex2d (500, 140);
glVertex2d (400, 140);
glEnd();

//Blue Rectangle
glColor3ub (0,0,205);
glBegin(GL_POLYGON);
glVertex2d (250, 220);
glVertex2d (350, 220);
glVertex2d (350, 50);
glVertex2d (250, 50);
glEnd();

/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 600, 0, 600);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (700, 700);
glutInitWindowPosition (0, 0);
glutCreateWindow ("181-15-10869 S. M. Rakibul Islam G");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
