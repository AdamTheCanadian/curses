#include <iostream>
#include <curses.h>
#include <menu.h>
#include <time.h>

int main() {
  /* If multiple functions need to update the window we need to keep a pointer
   * to the window so we can pass it around */
  WINDOW* win1 = initscr();
  while (1) {
    /* Print at the current cursor position */
    struct timespec spec;
    clock_gettime(CLOCK_REALTIME, &spec);

    mvprintw(0, 0, "Hello World %lld %lld", spec.tv_sec);
    refresh();
  }
  getch();
  endwin();
  return 0;
}
