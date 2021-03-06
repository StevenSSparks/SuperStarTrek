#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#ifndef WINDOWS
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
#endif

void randomize(void) {
	srand((int)time(NULL));
}

#ifndef WINDOWS
int max(int a, int b) {
	if (a > b) return a;
	return b;
}

int min(int a, int b) {
	if (a < b) return a;
	return b;
}

int getch(void) {
    char chbuf[1];
    struct termios oldstate, newstate;
    fflush(stdout);
	tcgetattr(0, &oldstate);
	newstate = oldstate;
	newstate.c_lflag &= ~ICANON;
	newstate.c_lflag &= ~ECHO;
	tcsetattr(0, TCSANOW,  &newstate);
	read(0, &chbuf, 1);
	tcsetattr(0, TCSANOW, &oldstate);
        return chbuf[0];
}
#endif