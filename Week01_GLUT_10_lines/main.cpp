#include <GL/glut.h>///第18行留下,使用glut外掛
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[])///第138行,main()函式
{
     glutInit(&argc, argv);///第140行,開啟glut功能
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///第143行,設定顯示模式
     glutCreateWindow("2024電腦圖學第01週");///第145行,開一個glut視窗
     glutDisplayFunc(display);///第148行,要用display()函式畫圖

     glutMainLoop();///第174行,主要的迴路,在這裡一直運作,不結束


}
