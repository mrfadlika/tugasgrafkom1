#include <graphics.h>
#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    initwindow(600, 600);

    int x = 70, y = 70;
    putpixel(x, y, WHITE); 

    double scaleX = 0.5;
    double scaleY = 1.3;

    int x_scaled = round(x * scaleX);
    int y_scaled = round(y * scaleY);

    putpixel(x_scaled, y_scaled, RED);

    char buffer[50];
    sprintf(buffer, "x_scaled: %d", x_scaled);
    outtextxy(50, 100, buffer);

    sprintf(buffer, "y_scaled: %d", y_scaled);
    outtextxy(50, 120, buffer);

    getch();
    closegraph();
}
