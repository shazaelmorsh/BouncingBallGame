//#include <math.h>
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//#include <glut.h>
////	Global Variables
//float x1 = 1.0;  //modification (translate)
//float P2 = 40;  //translate from player 1 to draw player 2
//int ii = 0;
//float xtree = 0; //trees in the background
//int p0[2]; //player 1
//
//int p1[2];
//int p2[2];
//
//int p3[2]; //player 2
//bool start = 0;
//bool start1 = 0;
//float t = 0;  //beizer rule
//float t1 = 1;   //beiezer2 rule
//bool turn = 0; //which turn
//float shot = 0; //from 1 to 5
//float finalshot = 0; //shot chosen
//bool defenderappear = 1;
//int score1 = 0;
//int score2 = 0;
//bool reaction1 = 0;
//bool reaction2 = 0;
//void init() {
//	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//}
//void print(int x, int y, char* string)
//{
//	int len, i;
//
//	//set the position of the text in the window using the x and y coordinates
//	glRasterPos2f(x, y);
//
//	//get the length of the string to display
//	len = (int)strlen(string);
//
//	//loop to display character by character
//	for (i = 0; i < len; i++)
//	{
//		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
//	}
//}
//void DrawAngryBird1() {
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(178, 50, 50);
//	glVertex2f(4, 4);
//	for (float i = 0; i < 2 * 3.1415926f + 0.1; i += 0.1)
//	{
//		float x = 3 * cosf(i);//calculate the x component
//		float y = 3 * sinf(i);//calculate the y component
//		glColor3ub(178, 50, 50);
//		glVertex2f(x + x1 + 4, y + 4);
//	}
//	glEnd();
//	glBegin(GL_LINES);
//	for (float i = 0.3; i < 3.1415926f - 0.3; i += 0.01)
//	{
//		float x = 1.4 * cosf(i);//calculate the x component
//		float y = 1.4 * sinf(i);//calculate the y component
//		glColor3ub(235, 175, 175);
//		glVertex2f(4.0 + x1, 1.0);
//		glVertex2f(x + x1 + 4.0, y + 1.0);
//
//		//glColor3f(0.0f, 0.0f, 1.0f);
//		//glVertex2f(-(x + 4),-(y + 4));
//		//glColor3f(0.0f, 0.0f, 1.0f);
//
//	}
//	glEnd();
//	glBegin(GL_LINES);
//	for (float i = 5; i < 5.5;i += 0.1) {
//		glColor3f(0.0f, 0.0f, 0.0f);
//		glVertex2f(2 + x1, i);
//		glVertex2f(6 + x1, i);
//	}
//	glEnd();
//	glBegin(GL_TRIANGLES);
//	glColor3ub(158, 176, 67);
//	glVertex2f(x1 + 4, 2);
//	glVertex2f(3 + x1, 4);
//	glVertex2f(5 + x1, 4);
//	glEnd();
//	glBegin(GL_TRIANGLES);
//	glColor3ub(204, 210, 120);
//	glVertex2f(x1 + 5, 2.3);
//	glVertex2f(3 + x1, 4);
//	glVertex2f(5 + x1, 4);
//	glEnd();
//
//	glBegin(GL_LINE_LOOP);
//	for (float i = 0; i < 2 * 3.1415926f + 0.1; i += 0.1)
//	{
//		float x = 0.7* cosf(i);//calculate the x component
//		float y = 0.7* sinf(i);//calculate the y component
//		glColor3f(1, 1, 1);
//		glVertex2f(4.7 + x1, 4.5);
//		glVertex2f(x + 4.7 + x1, y + 4.5);
//	}
//	glEnd();
//
//	glPointSize(1);
//	glBegin(GL_LINES);
//	for (float i = 0; i < 2 * 3.1415926f + 0.1; i += 0.1)
//	{
//		float x = 0.7* cosf(i);//calculate the x component
//		float y = 0.7* sinf(i);//calculate the y component
//		glColor3f(1, 1, 1);
//		glVertex2f(3.2 + x1, 4.5);
//		glVertex2f(x + 3.2 + x1, y + 4.5);
//	}
//	glEnd();
//	glPointSize(5);
//	glBegin(GL_POINTS);
//	glColor3f(0, 0, 0);
//	glVertex2f(4.7 + x1, 4.5);
//	glVertex2f(3.2 + x1, 4.5);
//	glEnd();
//	//glutSwapBuffers();
//
//}
//void DrawAngryBird2() {
//	glBegin(GL_TRIANGLE_FAN); //FACE
//	//glColor3ub(178, 50, 50);
//	glVertex2f(4 + P2, 4);
//	for (float i = 0; i < 2 * 3.1415926f + 0.1; i += 0.1)
//	{
//		float x = 3 * cosf(i);//calculate the x component
//		float y = 3 * sinf(i);//calculate the y component
//		glColor3ub(34, 233, 27);
//		glVertex2f(x + 4 + P2, y + 4);
//	}
//	glEnd();
//	glBegin(GL_LINES);
//	for (float i = 0.3; i < 3.1415926f - 0.3; i += 0.01)
//	{
//		float x = 1.4 * cosf(i);//calculate the x component
//		float y = 1.4 * sinf(i);//calculate the y component
//		glColor3ub(176, 219, 174);
//		glVertex2f(4.0 + P2, 1.0);
//		glVertex2f(x + 4.0 + P2, y + 1.0);
//
//		//glColor3f(0.0f, 0.0f, 1.0f);
//		//glVertex2f(-(x + 4),-(y + 4));
//		//glColor3f(0.0f, 0.0f, 1.0f);
//
//	}
//	glEnd();
//	glBegin(GL_POLYGON);
//	glColor3ub(71, 142, 69);
//	glVertex2f(4 + P2 + 1, 3);
//	glVertex2f(4 + P2 + 1, 2);
//	glVertex2f(4 + P2 + 1.5, 2);
//	glVertex2f(4 + P2 + 1.5, 4);
//	glEnd();
//	glBegin(GL_LINES);
//	for (float i = 5; i < 5.5;i += 0.1) {
//		glColor3f(0.0f, 0.0f, 0.0f);
//		glVertex2f(2 + P2, i);
//		glVertex2f(6 + P2, i);
//	}
//	glEnd();
//	glBegin(GL_LINE_LOOP); //NOSE
//	for (float i = 0; i < 2 * 3.1415926f + 0.1; i += 0.01)
//	{
//		float x = 1 * cosf(i);//calculate the x component
//		float y = 1 * sinf(i);//calculate the y component
//		glColor3ub(120, 210, 126);
//		glVertex2f(4 + P2, 3);
//		glVertex2f(x + P2 + 4, y + 3);
//	}
//	glEnd();
//	glPointSize(7);
//	glBegin(GL_POINTS);
//	glColor3f(0, 0, 0);
//	glVertex2f(3.5 + P2, 3);
//	glVertex2f(4.3 + P2, 3);
//	glEnd();
//	/*glBegin(GL_TRIANGLES);
//	glColor3ub(176, 219, 174);
//	glVertex2f(4+P2, 2);
//	glVertex2f(3+P2, 4);
//	glVertex2f(5+P2, 4);*/
//	//glEnd();
//
//	glBegin(GL_LINE_LOOP);  //EYES
//	for (float i = 0; i < 2 * 3.1415926f + 0.1; i += 0.1)
//	{
//		float x = 0.7* cosf(i);//calculate the x component
//		float y = 0.7* sinf(i);//calculate the y component
//		glColor3f(1, 1, 1);
//		glVertex2f(4.7 + P2 + 0.3, 4.5);
//		glVertex2f(x + P2 + 4.7 + 0.3, y + 4.5);
//	}
//	glEnd();
//
//
//	glPointSize(1);
//	glBegin(GL_LINES);
//	for (float i = 0; i < 2 * 3.1415926f + 0.1; i += 0.1)
//	{
//		float x = 0.7* cosf(i);//calculate the x component
//		float y = 0.7* sinf(i);//calculate the y component
//		glColor3f(1, 1, 1);
//		glVertex2f(3.2 + P2 - 0.3, 4.5);
//		glVertex2f(x + 3.2 + P2 - 0.3, y + 4.5);
//	}
//	glEnd();
//	glPointSize(5);
//	glBegin(GL_POINTS);
//	glColor3f(0, 0, 0);
//	glVertex2f(4.7 + P2 + 0.3, 4.5);
//	glVertex2f(3.2 + P2 - 0.3, 4.5);
//	glEnd();
//
//
//	//glutSwapBuffers();
//
//}
//void wall() {
//	glBegin(GL_QUADS);
//	glColor3ub(188, 161, 130);
//	glVertex2d(23, 5);
//	glVertex2d(26, 5);
//	glVertex2d(26, 28);
//	glVertex2d(23, 28);
//	glEnd();
//	glBegin(GL_TRIANGLES);
//	glVertex2d(23, 6);
//	glVertex2d(23, 8);
//	glVertex2d(20, 7);
//	glVertex2d(26, 8);
//	glVertex2d(26, 10);
//	glVertex2d(29, 9);
//	glEnd();
//}
//void power() {
//	glBegin(GL_LINE_STRIP);
//	glColor3f(0, 0, 0);
//	glVertex2d(0.5, 7);
//	glVertex2d(0.5, 1);
//	glVertex2d(1.5, 1);
//	glVertex2d(1.5, 7);
//	glEnd();
//	glBegin(GL_LINE_STRIP);
//	glColor3f(0, 0, 0);
//	glVertex2d(0.5 + P2 + 7, 7);
//	glVertex2d(0.5 + P2 + 7, 1);
//	glVertex2d(1.5 + P2 + 7, 1);
//	glVertex2d(1.5 + P2 + 7, 7);
//	glEnd();
//	glBegin(GL_QUADS);
//
//	if (shot != 0) {
//		if (turn == 0) {
//			glVertex2d(0.5, 1);
//			glVertex2d(1.5, 1);
//			glVertex2d(1.5, shot + 1);
//			glVertex2d(0.5, shot + 1);
//		}
//		else if (turn == 1) {
//			glVertex2d(0.5 + P2 + 7, 1);
//			glVertex2d(1.5 + P2 + 7, 1);
//			glVertex2d(1.5 + P2 + 7, shot + 1);
//			glVertex2d(0.5 + P2 + 7, shot + 1);
//		}
//	}
//
//	glEnd();
//}
//void healthbar() {
//	glBegin(GL_LINE_LOOP);
//	glColor3f(0, 0, 0);
//	glVertex2d(0.1, 30);
//	glVertex2d(10, 30);
//	glVertex2d(10, 33);
//	glVertex2d(0.1, 33);
//	glEnd();
//	glBegin(GL_LINE_LOOP);
//	glColor3f(0, 0, 0);
//	glVertex2d(0 + P2, 30);
//	glVertex2d(10 + P2, 30);
//	glVertex2d(10 + P2, 33);
//	glVertex2d(0 + P2, 33);
//	glEnd();
//	glBegin(GL_QUADS);
//	glVertex2d(0.1, 30);
//	glVertex2d(0.1 + score1 * 2, 30);
//	glVertex2d(0.1 + score1 * 2, 33);
//	glVertex2d(0.1, 33);
//
//	glVertex2d(0 + P2, 30);
//	glVertex2d(score2 * 2 + P2, 30);
//	glVertex2d(score2 * 2 + P2, 33);
//	glVertex2d(0 + P2, 33);
//
//	glEnd();
//}
//void background() {
//	//trees in the background
//	glBegin(GL_TRIANGLES);
//	glColor3ub(83, 117, 82);
//	glVertex2f(2 + xtree, 10);
//	glVertex2f(5 + xtree, 10);
//	glVertex2f(3 + xtree, 15);
//	glVertex2f(2 + xtree, 14);
//	glVertex2f(5 + xtree, 14);
//	glVertex2f(3 + xtree, 19);
//	glEnd();
//	glLineWidth(10);
//	glBegin(GL_LINES);
//	glColor3ub(100, 82, 47);
//	glVertex2f(3 + xtree, 7);
//	glVertex2f(3 + xtree, 10);
//	glEnd();
//	glBegin(GL_TRIANGLES);
//	glColor3ub(83, 117, 82);
//	glVertex2f(2 + 8 + xtree, 10);
//	glVertex2f(5 + 8 + xtree, 10);
//	glVertex2f(3 + 8 + xtree, 15);
//	glVertex2f(2 + 8 + xtree, 14);
//	glVertex2f(5 + 8 + xtree, 14);
//	glVertex2f(3 + 8 + xtree, 19);
//	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(100, 82, 47);
//	glVertex2f(12 + xtree, 7);
//	glVertex2f(12 + xtree, 10);
//	glEnd();
//	glBegin(GL_TRIANGLES);
//	glColor3ub(83, 117, 82);
//	glVertex2f(2 + 13 + xtree, 10);
//	glVertex2f(5 + 13 + xtree, 10);
//	glVertex2f(3 + 13 + xtree, 15);
//	glVertex2f(2 + 13 + xtree, 14);
//	glVertex2f(5 + 13 + xtree, 14);
//	glVertex2f(3 + 13 + xtree, 19);
//	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(100, 82, 47);
//	glVertex2f(17 + xtree, 7);
//	glVertex2f(17 + xtree, 10);
//	glEnd();
//	glBegin(GL_TRIANGLES);
//	glColor3ub(83, 117, 82);
//	glVertex2f(2 + 17 + xtree, 10);
//	glVertex2f(5 + 17 + xtree, 10);
//	glVertex2f(3 + 17 + xtree, 15);
//	glVertex2f(2 + 17 + xtree, 14);
//	glVertex2f(5 + 17 + xtree, 14);
//	glVertex2f(3 + 17 + xtree, 19);
//	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(100, 82, 47);
//	glVertex2f(20 + xtree, 7);
//	glVertex2f(20 + xtree, 10);
//	glEnd();
//	glBegin(GL_TRIANGLES);
//	glColor3ub(83, 117, 82);
//	glVertex2f(2 + 22 + xtree, 10);
//	glVertex2f(5 + 22 + xtree, 10);
//	glVertex2f(3 + 22 + xtree, 15);
//	glVertex2f(2 + 22 + xtree, 14);
//	glVertex2f(5 + 22 + xtree, 14);
//	glVertex2f(3 + 22 + xtree, 19);
//	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(100, 82, 47);
//	glVertex2f(26 + xtree, 7);
//	glVertex2f(26 + xtree, 10);
//	glEnd();
//	glLineWidth(1);
//}
//int* bezier(float t, int* p0, int* p1, int* p2, int* p3)
//{
//	int res[2];
//	res[0] = pow((1 - t), 3) * p0[0] + 3 * t * pow((1 - t), 2) * p1[0] + 3 * pow(t, 2) * (1 - t) * p2[0] + pow(t, 3) * p3[0];
//	res[1] = pow((1 - t), 3) * p0[1] + 3 * t * pow((1 - t), 2) * p1[1] + 3 * pow(t, 2) * (1 - t) * p2[1] + pow(t, 3) * p3[1];
//	glBegin(GL_TRIANGLES);
//	glColor3ub(192, 235, 23);
//	int y = res[1];
//	glVertex2d(res[0], res[1]);
//	glVertex2d(res[0] - 4, res[1]);
//	glVertex2d(res[0] - 2, res[1] + 3);
//	glEnd();
//	glPointSize(5);
//	glBegin(GL_POINTS);
//	glColor3ub(1, 1, 1);
//	glVertex2d(res[0] - 2.5, res[1] + 1);
//	glVertex2d(res[0] - 1.5, res[1] + 1);
//	glEnd();
//	return res;
//}
//int* bezier2(float t1, int* p3, int* p2, int* p1, int* p0)
//{
//	int res[2];
//	res[0] = pow((1 - t1), 3) * p0[0] + 3 * t1 * pow((1 - t1), 2) * p1[0] + 3 * pow(t1, 2) * (1 - t1) * p2[0] + pow(t1, 3) * p3[0];
//	res[1] = pow((1 - t1), 3) * p0[1] + 3 * t1 * pow((1 - t1), 2) * p1[1] + 3 * pow(t1, 2) * (1 - t1) * p2[1] + pow(t1, 3) * p3[1];
//	glBegin(GL_TRIANGLES);
//	glColor3ub(192, 235, 23);
//	int y = res[1];
//	glVertex2d(res[0], res[1]);
//	glVertex2d(res[0] + 4, res[1]);
//	glVertex2d(res[0] + 2, res[1] + 3);
//	glEnd();
//	glPointSize(5);
//	glBegin(GL_POINTS);
//	glColor3ub(1, 1, 1);
//	glVertex2d(res[0] + 2.5, res[1] + 1);
//	glVertex2d(res[0] + 1.5, res[1] + 1);
//	glEnd();
//	return res;
//}
//void reaction() {
//	if (reaction1 == 1) {
//		glBegin(GL_LINES);
//		for (float i = 5.5; i < 7;i += 0.1) {
//			glColor3f(0.0f, 0.0f, 0.0f);
//			glVertex2f(2 + x1, i);
//			glVertex2f(6 + x1, i);
//		}
//		glEnd();
//	}
//	if (reaction2 == 1) {
//		glBegin(GL_LINES);
//		for (float i = 5.5; i < 7;i += 0.1) {
//			glColor3f(0.0f, 0.0f, 0.0f);
//			glVertex2f(2 + P2, i);
//			glVertex2f(6 + P2, i);
//		}
//		glEnd();
//	}
//}
//void Display() {
//
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glBegin(GL_QUADS);
//	glColor3ub(181, 228, 189);
//	glVertex2d(0, 0);
//	glVertex2d(0, 10);
//	glVertex2d(50, 10);
//	glVertex2d(50, 0);
//
//	glEnd();
//	glColor3ub(137, 189, 208);
//	glBegin(GL_QUADS);
//	glVertex2d(0, 10);
//	glVertex2d(0, 50);
//	glVertex2d(50, 50);
//	glVertex2d(50, 10);
//	glEnd();
//	background();
//	DrawAngryBird1();
//	DrawAngryBird2();
//	wall();
//	power();
//	healthbar();
//	reaction();
//	glColor3f(1, 0, 0);
//	char* p0s[20];
//	if (score1 == 5) {
//		sprintf((char*)p0s, "Player 1 win", NULL, NULL);
//		print(40, 40, (char*)p0s);
//		score1 = 0;
//		score2 = 0;
//	}
//	if (score2 == 5) {
//		sprintf((char*)p0s, "Player 2 win", NULL, NULL);
//		print(40, 40, (char*)p0s);
//		score1 = 0;
//		score2 = 0;
//	}
//
//	if (defenderappear == 1) {
//		glColor3ub(30, 102, 19);
//		glBegin(GL_QUADS);
//		glVertex2d(2, 8);
//		glVertex2d(7, 8);
//		glVertex2d(7, 9);
//		glVertex2d(2, 9);
//		//player2
//		glVertex2d(1 + P2, 8);
//		glVertex2d(7 + P2, 8);
//		glVertex2d(7 + P2, 9);
//		glVertex2d(1 + P2, 9);
//		glEnd();
//		glBegin(GL_TRIANGLES);
//		glVertex2d(2, 8);
//		glVertex2d(3.5, 8);
//		glVertex2d(3, 10);
//		glVertex2d(5.5, 8);
//		glVertex2d(7, 8);
//		glVertex2d(6, 10);
//		//player 2
//		glVertex2d(1 + P2, 8);
//		glVertex2d(1 + P2 + 1.5, 8);
//		glVertex2d(1 + P2 + 1, 10);
//
//		glVertex2d(7 + P2, 8);
//		glVertex2d(5.5 + P2, 8);
//		glVertex2d(6 + P2, 10);
//		glEnd();
//	}
//
//	//glBegin(GL_POINTS);
//
//	if (t > 1) { start = 0; }
//	if (start == 1) {
//		int* p = bezier(t, p0, p1, p2, p3);
//		if (defenderappear == 1) {
//			if (p[0] < 7 + P2 && p[0]>P2 && p[1] < 10) {
//				start = 0;
//				defenderappear = 0;
//
//				//t = 1.;
//			}
//		}
//		else {
//			if (p[0] == 42 && p[1] == 6) {
//				score1 += 1;
//				reaction2 = 1;
//			}
//		}
//		if (p[0] < 26.0&&p[0] >22 && p[1] < 28) {
//			start = 0;
//		}
//
//		//glVertex3d(p[0], p[1], 0);
//
//		//sprintf((char*)p0s, "P0={%d,%d}", p[0], p[1]);
//		//print(40, 40, (char*)p0s);
//	}
//	if (t1 > 1) { start1 = 0; }
//	if (start1 == 1) {
//		int* b = bezier2(t1, p0, p1, p2, p3);
//		if (defenderappear == 1) {
//			if (b[0] == 6 && b[1] == 9) {
//				defenderappear = 0;
//				start1 = 0;
//			}
//		}
//		else {
//			if (b[0] == 5 && b[1] == 6) {
//				score2 += 1;
//				reaction1 = 1;
//			}
//		}
//		//hit the wall
//		if (b[0] < 27.0 &&b[0] >22 && b[1] < 28) {
//			start1 = 0;
//		}
//		//glVertex3d(b[0], b[1], 0);
//
//	}
//
//
//	//glEnd();
//	glFlush();
//}
//
//void play() {
//	//shot = 0;
//	if (turn == 0) {
//		if (0 < shot &&shot < 2) {
//			p0[1] = 3;
//			p0[0] = 9;
//
//			p1[1] = 32;
//			p1[0] = 8 + 3;
//
//			p2[1] = 32;
//			p2[0] = 40 + 3;
//
//			p3[1] = 3;
//			p3[0] = 40;
//			t = 0;
//		}
//		else if (2 <= shot && shot < 4.5) {
//			p0[1] = 3;
//			p0[0] = 9;
//
//			p1[1] = 32;
//			p1[0] = 8 + 3;
//
//			p2[1] = 50;
//			p2[0] = 25 + 3;
//
//			p3[1] = 1;
//			p3[0] = 44;
//			t = 0;
//		}
//		else if (shot >= 4.5) {
//			p0[1] = 3;
//			p0[0] = 9;
//
//			p1[1] = 32;
//			p1[0] = 8 + 3;
//
//			p2[1] = 50;
//			p2[0] = 25 + 3;
//
//			p3[1] = 13;
//			p3[0] = 50;
//			t = 0;
//		}
//
//		shot = 0;
//	}
//	else if (turn == 1) {
//		if (0 < shot &&shot < 2) {
//			p0[1] = 3;
//			p0[0] = 9;
//
//			p1[1] = 32;
//			p1[0] = 8 + 3;
//
//			p2[1] = 32;
//			p2[0] = 40 + 3;
//
//			p3[1] = 3;
//			p3[0] = 40;
//			t1 = 0;
//		}
//		else if (2 <= shot && shot < 4.5) {
//			p0[1] = 3;
//			p0[0] = 5;
//
//			p1[1] = 32;
//			p1[0] = 8 + 3;
//
//			p2[1] = 50;
//			p2[0] = 25 + 3;
//
//			p3[1] = 3;
//			p3[0] = 40;
//			t1 = 0;
//		}
//		else if (shot >= 4.5) {
//			p0[1] = 10;
//			p0[0] = 0;
//
//			p1[1] = 32;
//			p1[0] = 8 + 3;
//
//			p2[1] = 50;
//			p2[0] = 25 + 3;
//
//			p3[1] = 3;
//			p3[0] = 40;
//			t1 = 0;
//		}
//		shot = 0;t1 = 0;
//	}
//
//}
//void spe(int k, int x, int y)// keyboard special key function takes 3 parameters
//							// int k: is the special key pressed such as the keyboard arrows the f1,2,3 and so on
//{
//	if (k == GLUT_KEY_UP)//if the up arrow is pressed, then the object will be translated in the y axis by 10. (moving upwords)
//		if (shot > 6) {
//			shot = 0;
//		}
//		else {
//			shot += 0.1;
//		}
//
//	glutPostRedisplay();//redisplay to update the screen with the changes
//}
//void speUp(int k, int x, int y)// keyboard special key function is called whenever the special key is released.
//{
//	if (k == GLUT_KEY_UP)//if the F1 key is released, then the object will return back to it's original color.
//		if (shot != 0) {
//			if (turn == 0) { start = 1;start1 = 0;play(); turn = 1; }
//			else if (turn == 1) { start = 0;start1 = 1;play(); turn = 0; }
//		}
//	glutPostRedisplay();//redisplay to update the screen with the changes
//}
//
//void timer(int) {
//	glutPostRedisplay();
//	if (xtree < 50) {
//		xtree += 0.1;
//	}
//	else {
//		xtree = 0;
//	}
//	if (t < 1) {
//		t += 0.04;
//		//glutPostRedisplay();
//	}
//	if (t1 < 1) {
//		t1 += 0.04;
//		//glutPostRedisplay();
//	}
//
//
//	glutTimerFunc(5000 / 60, timer, 0);
//
//
//
//}
//void timer1(int) {
//	//glutPostRedisplay();
//	if (defenderappear == 1) {
//		defenderappear = 0;
//	}
//	else {
//		defenderappear = 1;
//	}
//
//	glutTimerFunc(3000, timer1, 0);
//
//
//
//
//}
//void timer2(int) {
//	if (reaction1 == 1) { reaction1 = 0; }
//	if (reaction2 == 1) { reaction2 = 0; }
//	glutTimerFunc(1000, timer2, 0);
//
//
//
//
//}
//void main(int argc, char** argr) {
//	glutInit(&argc, argr);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(800, 800);
//	glutInitWindowPosition(100, 0);
//	p0[1] = 3;
//	p0[0] = 9;
//
//	p1[1] = 32;
//	p1[0] = 8 + 3;
//
//	p2[1] = 50;
//	p2[0] = 25 + 3;
//
//	p3[1] = 3;
//	p3[0] = 44;
//	glutCreateWindow("Assignment 1");
//	glutDisplayFunc(Display);
//	glutSpecialFunc(spe);			//call the keyboard special keys function
//	glutSpecialUpFunc(speUp);
//	glutTimerFunc(0, timer, 0);
//	glutTimerFunc(0, timer1, 0);
//	glutTimerFunc(0, timer2, 0);
//	init();
//
//	gluOrtho2D(0.0, 50.0, 0.0, 50.0);
//
//	glutMainLoop();
//}
