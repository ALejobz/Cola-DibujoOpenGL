#include "Arbol.h"

Arbol::Arbol()
{

}

void Arbol::DibujarArbol()
{
	glPushMatrix();
	glTranslatef(-0.5, 0.0, 0.0);
	glRotatef((GLfloat)35, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0);
	glutSolidCube(0.5);
	glPopMatrix();

	for (int i = 0; i <3; i++) 
	{
		glTranslatef(0.5, 0.0, 0.0);
		glRotatef((GLfloat)35, 0.0, 0.0, 1.0);
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(0.5);
		glPopMatrix();
	}

	glTranslatef(0.5, 0.0, 0.0);
	glRotatef((GLfloat)-25, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0);
	glutSolidCube(0.5);
	glPopMatrix();

	for (int i = 0; i < 3; i++)
	{
		glTranslatef(0.5, 0.0, 0.0);
		glRotatef((GLfloat)-25, 0.0, 0.0, 1.0);
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(0.5);
		glPopMatrix();
	}

	glPushMatrix();
		glRotatef((GLfloat)-25, 0.0, 0.0, 1.0);
		glTranslatef(0.5, 0.0, 0.0);
		glutSolidIcosahedron();
	glPopMatrix();

	glPushMatrix();
		glRotatef((GLfloat)-25, 0.0, 0.0, 1.0);
		glTranslatef(-2.3, -8.0, 0.0);
		glutSolidSphere(2.0, 100, 100);
	glPopMatrix();


	glPopMatrix();
}

Arbol::~Arbol()
{

}
