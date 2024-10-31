#include <curses.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
// DO !NOT! ADD THIS TO AUTOSTART!!
void handle_signal(int signal) {
    if (signal == SIGINT) {
        return;
    }
}

int main() {
    initscr();            // init
    noecho();

    signal(SIGINT, handle_signal);
    signal(SIGQUIT, handle_signal);
    signal(SIGTSTP, handle_signal);
    signal(SIGTERM, handle_signal);

    refresh();

    while (1) {
        int ch = getch();
    }

    endwin();
    return 0;
}

