//
// kbd.h
//
// Copyright (c) 2001 Michael Ringgaard. All rights reserved.
//
// Keyboard driver
//

#ifndef KBD_H
#define KBD_H

extern int ctrl_alt_del_enabled;
extern int keymap;

void init_keyboard();

int getch(unsigned int timeout);
int kbhit();
void reboot();

#endif
