/*
 * salida.cpp
 *
 *  Created on: 18 may. 2024
 *      Author: LAB-USR-LNORTE
 */
#include <iostream>
#include <GL/glut.h>
using namespace std;
#include "funciones.h"

void planoCartesiano(){
	glBegin(GL_LINES);
		  glVertex2f(-100.0,0.0);
		  glVertex2f(100.0,0.0);
	glEnd();
	glBegin(GL_LINES);
			  glVertex2f(0.0,-100.0);
			  glVertex2f(0.0,100.0);
	glEnd();
}

void Peaton() {
    glBegin(GL_QUADS);
    glVertex2f(4.0, -8.5);
    glVertex2f(3.0, -8.0);
    glVertex2f(4.0, -5.5);
    glVertex2f(5.0, -6.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(5.0, -6.0);
    glVertex2f(6.0, -5.5);
    glVertex2f(7.0, -8.0);
    glVertex2f(6.0, -8.5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1.5, -4.0);
    glVertex2f(3.5, -2.0);
    glVertex2f(4.0, -2.5);
    glVertex2f(2.0, -4.5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(6.5, -2.0);
    glVertex2f(8.5, -4.0);
    glVertex2f(8.0, -4.5);
    glVertex2f(6.0, -2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4.5, -2.0);
    glVertex2f(4.0, -1.5);
    glVertex2f(4.0, -0.5);
    glVertex2f(4.5, 0.0);
    glVertex2f(5.5, 0.0);
    glVertex2f(6.0, -0.5);
    glVertex2f(6.0, -1.5);
    glVertex2f(5.5, -2.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4.0, -2.5);
    glVertex2f(4.0, -5.5);
    glVertex2f(5.0, -6.0);
    glVertex2f(6.0, -5.5);
    glVertex2f(6.0, -2.5);
    glVertex2f(6.5, -2.0);
    glVertex2f(3.5, -2.0);
    glEnd();
}

