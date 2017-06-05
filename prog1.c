#include <GLUT/glut.h>

void display(void){

}

int main(int argc,char *argv[]){
    glutInt(&argc,argv);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}