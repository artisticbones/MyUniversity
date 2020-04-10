/*hello.c
 * purse	show the minimal calls needed to use curses
 * outlines	initialize,draw stuff,wait for input,quit
 * copyright@	ChengFeitian
 */
#include <stdio.h>
#include <curses.h>

main()
{
	initscr();	/*turn on curse,send requests*/
	clear();
	move(10,20);	//row10,col20
	addstr("Hello world");	//add a string
	move(LINES-1,0);	//move to LL
	refresh();	//undate the screen
	getch();	//wait for user input
	endwin();	//refresh the tty
}
