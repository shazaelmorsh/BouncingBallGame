//#include "glut.h" 
//// Global Variables
//double rotate_y = 0;
//double rotate_x = 0;
//
////<<<<<<<<<<<<<<<<<<< axis >>>>>>>>>>>>>> 
//void axis(double length) { // draw a z-axis, with cone at end  
//	glPushMatrix();
//
//	glBegin(GL_LINES);
//	glPointSize(5);
//	glVertex3d(0, 0, 0);
//	glVertex3d(0, 0, length); // along the z-axis 
//	glEnd();
//
//	glPopMatrix();
//}
//
//void brick() {
//	//Total of 9 bricks
//	glPushMatrix();
//	glColor3ub(41, 136, 188);
//	glTranslated(-.5, -.45, -.9);
//	glRotated(90, 1, 0, 0);
//	glScaled(1.25, .05, 1.25);
//	glutSolidCube(1);
//	glPopMatrix();
//
//	glPushMatrix();
//	glColor3ub(255, 177, 156);
//	glTranslated(.5, -.45, -.9);
//	glRotated(90, 1, 0, 0);
//	glScaled(1.25, .05, 1.25);
//	glutSolidCube(1);
//	glPopMatrix();
//
//	glPushMatrix();
//	glColor3ub(252, 243, 232);
//	glTranslated(-.5, .55, -.9);
//	glRotated(90, 1, 0, 0);
//	glScaled(1.25, .05, 1.25);
//	glutSolidCube(1);
//	glPopMatrix();
//
//
//	glPushMatrix();
//	glColor3ub(47, 73, 98);
//	glTranslated(.5, .55, -.9);
//	glRotated(90, 1, 0, 0);
//	glScaled(1.25, .05, 1.25);
//	glutSolidCube(1);
//	glPopMatrix();
//}
//
////<<<<<<<<<<<<<<<<<<<<<<<<<<<<< displayWire >>>>>>>>>>>>>>>>>>>>>>
//void displayWire(void) {
//
//	glMatrixMode(GL_PROJECTION); // set the view volume shape
//	glLoadIdentity();
//	glOrtho(-2.0 * 64 / 48.0, 2.0 * 64 / 48.0, -2.0, 2.0, 0.1, 100);
//	glMatrixMode(GL_MODELVIEW); // position and aim the camera
//	glLoadIdentity();
//	gluLookAt(2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//	//gluPerspective(45.0f, 300 / 300, 0.1f, 300.0f);
//	glClear(GL_COLOR_BUFFER_BIT); // clear the screen  
//
//	glPopMatrix();
//	glRotatef(rotate_x, 1.0, 0.0, 0.0);
//	glRotatef(rotate_y, 0.0, 1.0, 0.0);
//	glPushMatrix();
//	glTranslated(0, .45, .9);
//	glRotated(-90, 1, 0, 0);
//	brick();
//	glTranslated(0, -.45, -.9);
//	glPopMatrix();
//	brick();
//	glPushMatrix();
//	glRotated(90, 1, 0, 0);
//	brick();
//	glPopMatrix();
//	glColor3d(0, 0, 0); // draw black lines       
//	axis(5);      // z-axis 
//
//	glPushMatrix();
//	glRotated(90, 0, 1.0, 0);
//	axis(5);     // y-axis
//	glRotated(-90.0, 1, 0, 0);
//	axis(5);     // z-axis
//
//	glFlush();
//	glutSwapBuffers();
//
//}
//void specialKeys(int key, int x, int y) {
//
//	if (key == GLUT_KEY_RIGHT)
//		rotate_y += 5;
//
//	else if (key == GLUT_KEY_LEFT)
//		rotate_y -= 5;
//
//	else if (key == GLUT_KEY_UP)
//		rotate_x += 5;
//
//	else if (key == GLUT_KEY_DOWN)
//		rotate_x -= 5;
//
//	//  Request display update
//	glutPostRedisplay();
//
//}
//
////<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
//void main(int argc, char **argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(1000, 800);
//	glutInitWindowPosition(100, 50);
//	glutCreateWindow("Transformation testbed - wireframes");
//	glutDisplayFunc(displayWire);
//	glutSpecialFunc(specialKeys);
//
//	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);  // background is white  
//	glViewport(0, 0, 1000, 800);  // x y width height
//	glutMainLoop();
//}