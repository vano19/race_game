#include "matrix.h"
#include "play.h"

int main(int argc, char *argv[])
{
    race::Play play;
    thread Thread(&race::Play::controKeyboardl, &play);
    play.start();
    Thread.join();
    return 0;
}

