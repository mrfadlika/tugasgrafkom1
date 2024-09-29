#include <graphics.h>
#include <iostream>

int main() {
    initwindow(600, 600);

    int x = 70, y = 70;
    putpixel(x, y, WHITE);

    int translasiX = 150, translasiY = 150;
    int tx = x + translasiX;
    int ty = y + translasiY;

    putpixel(tx, ty, RED);
    

    getch();
}
