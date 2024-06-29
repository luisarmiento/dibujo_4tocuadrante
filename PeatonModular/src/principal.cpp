/*
 * principal.cpp
 *
 *  Created on: 18 may. 2024
 *      Author: LAB-USR-LNORTE
 */
#include <iostream>
#include <GL/glut.h>
using namespace std;
#include "funciones.h"

int main(int argc, char**argv){
	cout << "PeatonModular" << endl;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(650,350);
	glutInitWindowPosition(200,200);
	glutCreateWindow("PeatonModular");
	Initializar();
	glutDisplayFunc(Dibujar);
	glutSpecialFunc(traslado);
	glutMainLoop();
	return 0;

}


