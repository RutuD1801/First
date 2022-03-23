/*GL01HELLO.CPP:Test
OpenGL/GlUT C/C++ Setup
* Tested under Eclipse CDT with Mingw/Cyqwin and CodeBlocks With Mingw
* To compile with -ifreeglut -lglu32 -iopengl32
*/
#include<windows.h> /// for MS windows
#include<GL/glut.h> /// GLUT,
include glu.h and gl.h

/* Handler for window-repaint event. call back when the window first appears and 
    whenever the window needs to be re-painted.*/
    void disply()
{
glclearColor(0.0f,0.0f,0.0f,1.0f); //Set backgrount color to black and opaque
  glclear(GL_COLOr_BUFFER_BIT);
// Clear the color buffer(background)
// Draw a red 1*1 Square centered at origin
  glbegin(GL_QUADS);
// each setof 4 vertices form a quad 
 
  glColor3f(1.0f,0.0f,0.0f); /// red
  glVertex2f(-0.5f,-0.5f); /// ,y
  glVertex2f(0.5f,-0.5f);
  glvertex2f(0.5f,0.5f);

glEnd(); 

glFlush(); //Render now

}

/* Main function:GLUT runs as a console application sstarting at main() */
 int main(int argc, char** argv)
{
 glutInit(&argc,argv);
///Initilize GLUT
    glutCreateWindow("OPenGL Setup Test");   /// Create a window with the given title 
    glutinitWindowsSize(320,320);
// Set the window's initial width & height
   glutInitWindowPosition(50,50);  // Position the window's initial top_left corner
   glutDisplayFunc(display); /// Register display callback handler for window re_paint
   glutMainloop();
Enter the event_processing loop 
 return 0;
}


