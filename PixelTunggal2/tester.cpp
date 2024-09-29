/*
graphics in Dev-C++ - nguyenvanquan7826
*/

// #include <winbgim.h>
//
// int main(int argc, char *argv[])
//{
//	// now, you can run project
//	initwindow(300, 300);			// init window graphics
//	setbkcolor(1);					// set background
//    	cleardevice();
//	setcolor(14);					// set text color
//	outtextxy(50,100,"Graphics in Dev-C++");// print text in window graphics
//
//	while(!kbhit()) delay(1);		// pause screen
//	return 0;
// }

//-------------------------------------------

// #include <winbgim.h>
//
// main() {
//	initwindow(600,600);
//
//	rectangle(50,50,500,350);
//
//	getch();
// }

//------------------------------------------------

// #include <graphics.h>
//
// main() {
//	initwindow(600,600);
//
//	setcolor(YELLOW);
//	rectangle(50,50,500,350);
//
//	getch();
// }

//------------------------------------------------

// #include <graphics.h>
//
// main() {
//	initwindow(600,600);
//
//	setcolor(WHITE);
//	rectangle(50,50,500,350);
//
//	setfillstyle(SOLID_FILL,RED);
//	floodfill(51,51,15);
//
//	getch();
// }

//-------------------------------------------------

// #include <graphics.h>
//
// int main() {
//     initwindow(800, 600);
//
//     // Bendera
//     setcolor(WHITE);
//     line(650, 50, 650, 175);
//     rectangle(650, 50, 775, 88);
//     setfillstyle(SOLID_FILL, RED);
//     floodfill(651, 51, WHITE);
//
//     rectangle(650, 88, 775, 126);
//     setfillstyle(SOLID_FILL, WHITE);
//     floodfill(651, 89, WHITE);
//
//     // Atap
//     line(100, 200, 400, 50);
//     line(400, 50, 700, 200);
//     line(700, 200, 100, 200);
//     setfillstyle(SOLID_FILL, BROWN);
//     floodfill(400, 55, WHITE);
//
//     // Dinding
//     rectangle(150, 210, 650, 500);
//     setfillstyle(SOLID_FILL, BLUE);
//     floodfill(151, 211, WHITE);
//
//     // Pintu
//     rectangle(180, 250, 325, 500);
//     setfillstyle(SOLID_FILL, RED);
//     floodfill(181, 251, WHITE);
//
//     // Jendela
//     rectangle(400, 250, 625, 400);
//     setfillstyle(SOLID_FILL, YELLOW);
//     floodfill(401, 251, WHITE);
//
//     setcolor(BLACK);
//     line(400, 325, 625, 325);
//     line(510, 250, 510, 400);
//
//     getch();
// }

//--------------------------------------------

// #include <graphics.h>
//
// main () {
//	initwindow(800, 600);
//
//	circle(430, 300, 250);
//
//	getch();
// }

//--------------------------------------------

// #include <graphics.h>
//
// main() {
//	initwindow(800,600);
//
//	setcolor(RED);
//	circle(430,300,250);
//	setfillstyle(SOLID_FILL,BLUE);
//	floodfill(430,300,RED);
//
//	getch();
// }

//-------------------------------------------

// #include <graphics.h>
//
// main() {
//	initwindow(800,600);
//
//	setcolor(RED);
//	circle(430,300,250);
//	setfillstyle(HATCH_FILL,BLUE);
//	floodfill(430,300,RED);
//
//	getch();
// }

//--------------------------------------------

// #include <graphics.h>
//
// main() {
//	initwindow(600,600);
//
//	arc(200,200,0,180,100);
//
//	getch();
// }

//--------------------------------------------

// #include <graphics.h>
//
// main() {
//	initwindow(600,600);
//
//	arc(200,200,90,180,100);
//
//	getch();
// }

//----------------------------------------------

// #include <graphics.h>
//
// main() {
//	initwindow(600,600);
//
//	arc(200,200,0,360,100);
//
//	getch();
// }

//----------------------------------------------

// #include <graphics.h>
// main(){
//
//	initwindow(700,400);
//	for(int i=0; i<700; i++) {
//		circle(100+i, 200, 50);
//		delay(10);
//		cleardevice();
//	}
//	getch();
// }

//------------------------------------------------

// #include <graphics.h>
// main() {
//	initwindow(700,400);
//
//	for(int i=0; i<700; i++) {
//		circle(100, 200+i, 50);
//		delay(10);
//		cleardevice();
//	}
//	getch();
// }

//------------------------------------------------

// #include <graphics.h>
//
// int main() {
//     initwindow(800, 600);
//
//     // Circle (lonceng)
//     circle(228, 168, 10);
//     setfillstyle(SOLID_FILL, YELLOW);
//     floodfill(228, 168, WHITE);
//
//     // Ban depan
//     circle(200, 400, 100);
//     setfillstyle(SOLID_FILL, BLUE);
//     floodfill(200, 400, WHITE);
//
//     // Ban belakang
//     circle(677, 430, 80);
//     setfillstyle(SOLID_FILL, BLUE);
//     floodfill(677, 430, WHITE);
//
//     // Roda gigi belakang
//     circle(677, 430, 20);
//     setfillstyle(SOLID_FILL, WHITE);
//     floodfill(677, 430, WHITE);
//
//     // Roda gigi depan
//     circle(444, 429, 40);
//     setfillstyle(SOLID_FILL, RED);
//     floodfill(444, 429, WHITE);
//
//     circle(444, 429, 20);
//     setfillstyle(SOLID_FILL, WHITE);
//     floodfill(444, 429, WHITE);
//
//     // Tempat duduk
//     ellipse(603, 190, 0, 360, 50, 10);
//     setfillstyle(SOLID_FILL, BROWN);
//     floodfill(603, 190, WHITE);
//
//     // Garis (rangka)
//     line(199, 402, 293, 141); // Rangka depan1
//     line(260, 140, 352, 140); // Rangka depan2
//     line(237, 168, 282, 168); // Rangka depan3
//     line(272, 200, 601, 200); // Rangka tempat duduk
//     line(253, 252, 427, 420); // Rangka sadel depan
//     line(601, 200, 460, 419); // Rangka sadel belakang1
//     line(601, 200, 678, 431); // Rangka sadel belakang2
//     line(678, 431, 462, 431); // Rangka sadel
//     line(440, 389, 671, 412); // Rantai1
//     line(448, 468, 675, 450); // Rantai2
//     line(440, 410, 440, 358); // Sadel1
//     line(426, 358, 466, 358); // Sadel1
//     line(449, 446, 449, 507); // Sadel2
//     line(428, 507, 462, 507); // Sadel2
//
//     getch(); // Wait for a key press
//     closegraph(); // Close the graphics window
//     return 0; // Return success
// }

//-----------------------------------------------------

#include <graphics.h>

void drawBicycle(int offsetX)
{
    // Clear the screen
    cleardevice();

    // Circle (lonceng)
    circle(228 + offsetX, 168, 10);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(228 + offsetX, 168, WHITE);

    // Ban depan
    circle(200 + offsetX, 400, 100);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(200 + offsetX, 400, WHITE);

    // Ban belakang
    circle(677 + offsetX, 430, 80);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(677 + offsetX, 430, WHITE);

    // Roda gigi belakang
    circle(677 + offsetX, 430, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(677 + offsetX, 430, WHITE);

    // Roda gigi depan
    circle(444 + offsetX, 429, 40);
    setfillstyle(SOLID_FILL, RED);
    floodfill(444 + offsetX, 429, WHITE);

    circle(444 + offsetX, 429, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(444 + offsetX, 429, WHITE);

    // Tempat duduk
    ellipse(603 + offsetX, 190, 0, 360, 50, 10);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(603 + offsetX, 190, WHITE);

    // Garis (rangka)
    line(199 + offsetX, 402, 293 + offsetX, 141); // Rangka depan1
    line(260 + offsetX, 140, 352 + offsetX, 140); // Rangka depan2
    line(237 + offsetX, 168, 282 + offsetX, 168); // Rangka depan3
    line(272 + offsetX, 200, 601 + offsetX, 200); // Rangka tempat duduk
    line(253 + offsetX, 252, 427 + offsetX, 420); // Rangka sadel depan
    line(601 + offsetX, 200, 460 + offsetX, 419); // Rangka sadel belakang1
    line(601 + offsetX, 200, 678 + offsetX, 431); // Rangka sadel belakang2
    line(678 + offsetX, 431, 462 + offsetX, 431); // Rangka sadel
    line(440 + offsetX, 389, 671 + offsetX, 412); // Rantai1
    line(448 + offsetX, 468, 675 + offsetX, 450); // Rantai2
    line(440 + offsetX, 410, 440 + offsetX, 358); // Sadel1
    line(426 + offsetX, 358, 466 + offsetX, 358); // Sadel1
    line(449 + offsetX, 446, 449 + offsetX, 507); // Sadel2
    line(428 + offsetX, 507, 462 + offsetX, 507); // Sadel2
}

int main()
{
    initwindow(800, 600);

    for (int offsetX = 0; offsetX > -600; offsetX -= 5)
    {
        drawBicycle(offsetX);
        delay(50);
    }

    getch();
}
