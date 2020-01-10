#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <glut.h>

// Global Variables
double rotate_y = 0;
double rotate_x = 0;
double repeat_y = 0;
double repeat_x = 0;
bool freeze = false;
bool play = false;
bool repeat = false;
double ball_x = 0;
double ball_y = 0;
double ball_z = 0;
double shiftball = 0;
bool flip = false; //to reflect the ball zx
bool flip1 = false;//to reflect the ball yz
//<<<<<<<<<<<<<<<<<<< axis >>>>>>>>>>>>>> 
void onebrick() {
	glBegin(GL_QUADS);
	glVertex3d(1, -.5, -2);
	glVertex3d(1, -.5, 0);
	glVertex3d(1, .5, 0);
	glVertex3d(1, .5, -2);
	glRotatef(-10, 1.0, 0.0, 0.0);
	glEnd();
} //wall in xy and the opposide one 

void onebrickZ() {
	glBegin(GL_QUADS);
	glVertex3d(1, -.5, -2);
	glVertex3d(1, .5, -2);
	glVertex3d(0, .5, -2);
	glVertex3d(0, -.5, -2);
	glEnd();
} //end wall

void onebrickfloor() {
	glBegin(GL_QUADS);
	glVertex3d(1, -.5, -2);
	glVertex3d(0, -.5, -2);
	glVertex3d(0, -.5, 0);
	glVertex3d(1, -.5, 0);
	glEnd();
}

//Display wall 
void Displaywall(void) {

	//glColor3ub(43, 95, 148); //elmtfy 
	//glColor3ub(43, 95, 255); 
	//glRotatef(rotate_y, 0.0, 1.0, 0.0);
		//Wall1
	glPushMatrix();
	glColor3ub(43, 95, 255);
	onebrick();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(43, 95, 148);
	glTranslated(0, 1, 0);
	onebrick();
	glPopMatrix();


	glPushMatrix();

	glColor3ub(43, 148, 81);
	glTranslated(0, 0, 2);
	onebrick();
	glPopMatrix();

	glPushMatrix();
	//glColor3ub(43, 95, 255);
	glColor3ub(0, 255, 12);
	glTranslated(0, 1, 2);
	onebrick();
	glPopMatrix();

	//WALL2


	glPushMatrix();
	glColor3ub(43, 95, 148);
	glTranslated(-2, 0, 0);
	onebrick();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(43, 95, 255);
	glTranslated(-2, 1, 0);
	onebrick();
	glPopMatrix();


	glPushMatrix();
	glColor3ub(0, 255, 12);
	glTranslated(-2, 0, 2);
	onebrick();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(43, 148, 81);
	glTranslated(-2, 1, 2);
	onebrick();
	glPopMatrix();

	//WALL3 endwall 


	glPushMatrix();
	glColor3ub(0, 0, 0);
	onebrickZ();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(0, 0, 0);
	glTranslated(-1, 0, 0);
	onebrickZ();
	glPopMatrix();


	glPushMatrix();
	glColor3ub(0, 0, 0);
	glTranslated(0, 1, 0);
	onebrickZ();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(0, 0, 0);
	glTranslated(-1, 1, 0);
	onebrickZ();
	glPopMatrix();

	//wall4 floor
	glColor3ub(43, 95, 148);
	onebrickfloor();

	glPushMatrix();
	glColor3ub(43, 95, 255);
	glTranslated(-1, 0, 0);
	onebrickfloor();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(0, 255, 12);
	glTranslated(0, 0, 2);
	onebrickfloor();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(43, 148, 81);
	glTranslated(-1, 0, 2);
	onebrickfloor();
	glPopMatrix();


	//WALL5 ceiling

	glPushMatrix();
	glColor3ub(43, 95, 255);
	glTranslated(0, 2, 0);
	onebrickfloor();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(43, 95, 148);
	glTranslated(-1, 2, 0);
	onebrickfloor();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(43, 148, 81);
	glTranslated(0, 2, 2);
	onebrickfloor();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(0, 255, 12);
	glTranslated(-1, 2, 2);
	onebrickfloor();
	glPopMatrix();
}

void shootingstation(void) {
	glPushMatrix();
	glColor3f(0, 1, 1);

	glTranslated(0, -0.3, 2);
	glRotatef(rotate_x, 1, 0, 0);
	glRotatef(rotate_y, 0, 1, 0);
	glutWireCone(0.2, 0.7, 40, 40);

	glPopMatrix();
}


void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	//glRotatef(-2,1, 0, 0);
	Displaywall();
	glPopMatrix();
	glPushMatrix();
	glColor3ub(70, 70, 70);
	//glTranslated(ball_x, ball_y,ball_z);
	glTranslated(ball_x, -0.3 + ball_y, 2 - ball_z);
	//glRotatef(rotate_x, 1, 0, 0);
	//glRotatef(rotate_y, 0, 1, 0);

	glutSolidSphere(0.15, 25, 25);

	glPopMatrix();

	shootingstation();

	glFlush();
}
void animate(int x, int y) {
	if (play == true) {
		float angle_y = -rotate_y * 3.14 / 180;
		float angle_x = rotate_x * 3.14 / 180;
		if (ball_x > 1 - 0.15 || ball_x < -1 + 0.15) {
			PlaySound(TEXT("soundeffect.wav"), NULL, SND_FILENAME | SND_ASYNC);flip = !flip;
		}
		if (ball_y > 1.5 - 0.15 || ball_y < -0.5 + 0.15 + 0.3) {
			PlaySound(TEXT("soundeffect.wav"), NULL, SND_FILENAME | SND_ASYNC);flip1 = !flip1;
		}
		if (flip == true) {
			//rotate_y = -rotate_y;
			//rotate_y = -rotate_y;
			ball_x -= shiftball * sinf(angle_y);
			ball_z += shiftball * cosf(angle_y);
			//ball_y += shiftball * sinf(angle_x);
			//shiftball += 0.00001;			//shiftball = 0.00001;
		}
		else {
			ball_x += shiftball * sinf(angle_y);
			ball_z += shiftball * cosf(angle_y);
			//ball_y += shiftball * sinf(angle_x);
			//shiftball += 0.00001;
		}
		if (flip1 == true) {
			ball_y -= shiftball * sinf(angle_x);
		}
		else {
			ball_y += shiftball * sinf(angle_x);
		}
		shiftball += 0.00001;
		if (2 - ball_z < -2 - 0.15) {
			PlaySound(TEXT("soundeffect2.wav"), NULL, SND_FILENAME | SND_ASYNC);
			rotate_y = 0;
			rotate_x = 0;
			ball_x = 0;
			ball_y = 0;
			ball_z = 0;
			shiftball = 0;
			flip = false;
			flip1 = false;
			play = false;
		}
	}
	if (repeat == true && play == false) {
		rotate_y = repeat_y;
		rotate_x = repeat_x;
		float angle_y = -repeat_y * 3.14 / 180;
		float angle_x = repeat_x * 3.14 / 180;
		if (ball_x > 1 - 0.15 || ball_x < -1 + 0.15) { flip = !flip; }
		if (ball_y > 1.5 - 0.15 || ball_y < -0.5 + 0.15 + 0.3) { flip1 = !flip1; }
		if (flip == true) {
			ball_x -= shiftball * sinf(angle_y);
			ball_z += shiftball * cosf(angle_y);
			//ball_y += shiftball * sinf(angle_x);
			//shiftball += 0.00001;			//shiftball = 0.00001;
		}
		else {
			ball_x += shiftball * sinf(angle_y);
			ball_z += shiftball * cosf(angle_y);
			//ball_y += shiftball * sinf(angle_x);
			//shiftball += 0.00001;
		}
		if (flip1 == true) {
			ball_y -= shiftball * sinf(angle_x);
		}
		else {
			ball_y += shiftball * sinf(angle_x);
		}
		shiftball += 0.000001;
		if (2 - ball_z < -2 - 0.15) {
			rotate_y = 0;
			rotate_x = 0;
			ball_x = 0;
			ball_y = 0;
			ball_z = 0;
			shiftball = 0;
			flip = false;
			flip1 = false;
			repeat = false;
		}
	}
	glutPostRedisplay();
}

void animateslow(int x, int y) {
}
void idle(void) {
	animate(ball_x, ball_y);
	glutPostRedisplay();
}
void specialKeys(int key, int x, int y) {
	if (play == false) {
		if (key == GLUT_KEY_LEFT && rotate_y < 60)
			rotate_y += 20;

		else if (key == GLUT_KEY_RIGHT && rotate_y > -60)
			rotate_y -= 20;

		else if (key == GLUT_KEY_DOWN && rotate_x < 60)
			rotate_x += 20;

		else if (key == GLUT_KEY_UP && rotate_x > -60)
			rotate_x -= 20;

		//  Request display update
		glutPostRedisplay();
	}
}
void key(unsigned char key, int x, int y) {

	if (key == 'p') {
		repeat_x = rotate_x;
		repeat_y = rotate_y;
		play = true;
	}
	if (key == 'r') {
		repeat = true;
	}
}
void timer(int) {
	glutPostRedisplay();

	glutTimerFunc(5000 / 60, timer, 0);



}
//<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
void main(int argc, char **argv) {

	glutInit(&argc, argv);

	glutInitWindowSize(800, 700);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("OpenGL - 3D Template");
	glutDisplayFunc(Display);
	glutSpecialFunc(specialKeys);
	glutKeyboardFunc(key);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

	glEnable(GL_DEPTH_TEST);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, 1, 0.1f, 300.0f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0f, 2.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
	//glViewport(0, 0, 800, 700);  // x y width height
	glutIdleFunc(idle);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();


}