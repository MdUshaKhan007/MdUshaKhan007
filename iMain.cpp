# include "iGraphics.h"

int x = 100, y = 100, r = 10;
/*
	function iDraw() is called again and again by the system.

	*/
//int x9 = 640 , y9  = 600 ; 
//int x2 = 1280 , y2  = 600 ; 
//int x3 = 640 , y3  = 480 ; 
//int x4 = 1280 , y4  = 480 ; 
//int x5 = 780 , y5  = 720 ; 
//int x6 = 780 , y6  = 360 ; 
//int x7 = 1140 , y7  = 720 ; 
//int x8 = 1140 , y8  = 360 ;
int rx6 = 0; int ry6 = 0; int dx6 = 1920; int dy6 = 1080;  
int rx = 640; int ry = 360; int dx = 630; int dy = 630; 
int rx1 = 640; int ry1 = 360; int dx1 = 210; int dy1 = 210; 
int rx2 = 1060; int ry2 = 360; int dx2 = 210; int dy2 = 210; 
int rx3 = 850; int ry3 = 570; int dx3 = 210; int dy3 = 210; 
int rx4 = 640; int ry4 = 780; int dx4 = 210; int dy4 = 210; 
int rx5 = 1060; int ry5 = 780; int dx5 = 210; int dy5 = 210; 


int x2 = 710 , y2 = 360 ;   int x3 = 780 , y3 = 360 ;   int x4 = 920 , y4 = 360 ;   int x5 = 990 , y5 = 360 ;   int x6 = 1130 , y6 = 360 ;   int x7 = 1200 , y7 = 360 ; 
int x8 = 710 , y8 = 990 ;   int x9 = 780 , y9 = 990 ;   int x10 = 920 , y10 = 990 ;   int x11 = 990 , y11 = 990 ;   int x12 = 1130 , y12 = 990 ;   int x13 = 1200 , y13 = 990 ; 
int x14 = 640 , y14 = 430 ;   int x15 = 640 , y15 = 500 ;   int x16 = 640 , y16 = 640 ;   int x17 = 640 , y17 = 710 ;   int x18 = 640 , y18 = 850 ;   int x19 = 640 , y19 = 920 ; 
int x20 = 1270 , y20 = 430 ;   int x21 = 1270 , y21 = 500 ;   int x22 = 1270, y22 = 640 ;   int x23 = 1270 , y23 = 710 ;   int x24 = 1270 , y24 = 850;   int x25 = 1270 , y25 = 920 ; 


void iDraw()
 {
	//place your drawing codes here
	iClear();
	//iFilledCircle(x, y, r);
	//iFilledRectangle(10, 30, 20, 20);
	//iSetColor(255, 255, 255);
	//iText(400, 400, "Hi, I am iGraphics");
	//iLine( x9 , y9 , x2 , y2 );
	//iLine( x3 , y3 , x4 , y4 );
	//iLine( x5 , y5 , x6 , y6 ); 
	//iLine( x7 , y7 , x8 , y8 );
	iSetColor(178 , 190 , 181 );
	iFilledRectangle(rx6 , ry6 , dx6 , dy6 );
	iSetColor(255, 255, 255);
	iFilledRectangle(rx , ry , dx , dy );
	iSetColor(173, 216, 230); 
	iFilledRectangle(rx1 , ry1 , dx1 , dy1 ); 
	iSetColor(173, 216, 230);
	iFilledRectangle(rx2 , ry2 , dx2 , dy2 ); 
	iSetColor(173, 216, 230);
	iFilledRectangle(rx3 , ry3 , dx3 , dy3 ); 
	iSetColor(173, 216, 230); 
	iFilledRectangle(rx4 , ry4 , dx4 , dy4 ); 
	iSetColor(173, 216, 230);
	iFilledRectangle(rx5 , ry5 , dx5 , dy5 ); 


	iSetColor(0, 0 ,0);
	iLine( x2 , y2 , x8 , y8 ); 
	iLine( x3 , y3 , x9 , y9 ); 
	iLine( x4 , y4 , x10 , y10 ); 
	iLine( x5 , y5 , x11 , y11 ); 
	iLine( x6 , y6 , x12 , y12 ); 
	iLine( x7 , y7 , x13 , y13 ); 

	iLine( x14 , y14 , x20 , y20 ); 
	iLine( x15 , y15 , x21 , y21 ); 
	iLine( x16 , y16 , x22 , y22 ); 
	iLine( x17 , y17 , x23 , y23 ); 
	iLine( x18 , y18 , x24 , y24 ); 
	iLine( x19 , y19 , x25 , y25 );

}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	iInitialize(1920, 1080, "SUDUKO GAME");
	return 0;
}
