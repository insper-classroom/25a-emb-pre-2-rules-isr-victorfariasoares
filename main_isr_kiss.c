#include "asf.h"

volatile int g_cnt = 0;
//int batata;

// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.
void btn_callback(void) {
  
  if (g_cnt >= 8)
    g_cnt = 0;

  g_cnt = 2;

  
}

void main(void) {
  char g_str[10];
  // ...
  printf("btn pressed \n");

  int i = 0;
  for (i = 0; i < g_cnt; i++) {
    g_str = 1;
    g_str[i] = '*';
    g_str[i + 1] = NULL;
    delay_ms(50);
    gfx_mono_draw_string(g_str, 0, 0, &sysfont);
  }

  //batata = batata + 1;
  while (1) {
  }
}
