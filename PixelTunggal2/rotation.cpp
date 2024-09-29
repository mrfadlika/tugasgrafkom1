#include <graphics.h>
#include <iostream>
#include <cmath>
#include <cstdio> 

int main() {
    initwindow(600, 600);

    int x = 70, y = 70;
    putpixel(x, y, WHITE);

    double sudut = 45.0;
    double radian = sudut * M_PI / 180.0;

    int x_rot = round(x * cos(radian) - y * sin(radian));
    int y_rot = round(x * sin(radian) + y * cos(radian));

    putpixel(x_rot, y_rot, RED);

    char buffer[50];

    sprintf(buffer, "x_rot: %d", x_rot);
    outtextxy(50, 100, buffer);

    sprintf(buffer, "y_rot: %d", y_rot);
    outtextxy(50, 120, buffer);

    getch();
    closegraph();
}
