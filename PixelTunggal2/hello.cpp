#include <winbgim.h>

int main(int argc, char *argv[])
{
    // now, you can run project
    initwindow(300, 300); // init window graphics
    setbkcolor(1);        // set background
    cleardevice();
    setcolor(14);                              // set text color
    outtextxy(50, 100, "Graphics in Dev-C++"); // print text in window graphics

    while (!kbhit())
        delay(1); // pause screen
    return 0;
}