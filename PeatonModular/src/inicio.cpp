/*
 * inicio.cpp
 *
 *  Created on: 18 may. 2024
 *      Author: LAB-USR-LNORTE
 */

#include <iostream>
#include <GL/glut.h>
using namespace std;
#include "funciones.h"

float mover_x=0;
float mover_y=0;

void Initializar(){
	glClearColor(0.0,1.0,0.0,1.0); ///verde
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-20.0, 20.0, -20.0, 20.0, -20.0, 20.0);
}

void traslado(int key, int x, int y){
	switch(key)
	{
	case GLUT_KEY_RIGHT: mover_x++;break;
	case GLUT_KEY_LEFT:  mover_x--;break;
	case GLUT_KEY_UP:    mover_y++;break;
	case GLUT_KEY_DOWN:  mover_y--;break;
	}
	glutPostRedisplay();
}

void Dibujar(){
    glClear(GL_COLOR_BUFFER_BIT);
    planoCartesiano();
    glPushMatrix();
    glTranslatef(mover_x,mover_y,0.0);
    Peaton();
    glPushMatrix();
    glPopMatrix();
    glFlush();
}





