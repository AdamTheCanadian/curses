#include <iostream>
#include <curses.h>
#include <menu.h>
#include <time.h>

int main() {
  WINDOW* win1 = initscr();
  while (1) {
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    /* Need to make sure to print at the same position, or the screen will fill up with text,
     * we will be printing at the end of each line every iteration */
    mvprintw(0, 0, "Current time is: %s", asctime (timeinfo));
    refresh();
  }
  getch();
  endwin();
  return 0;
}
