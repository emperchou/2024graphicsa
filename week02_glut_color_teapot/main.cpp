#include <GL/glut.h>
void display()
{
    glColor3f(247/255.0,180/255.0,171/255.0);
    glutSolidTeapot(0.3);

    glColor3f(203/255.0,115/255.0,221/255.0);
    glutSolidTeapot(0.2);
    glutSwapBuffers();

}
int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week02_glut_color_teapot");
    glutDisplayFunc(display);
    glutMainLoop();
}
