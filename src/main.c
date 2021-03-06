#include <stdbool.h>
#include "protocol.h"
#include "screen.h"
#include "terminal.h"
#include "connect.h"

extern padByte splash[];
unsigned char already_started=0;

void main(void)
{
  screen_init();
  terminal_init();
  ShowPLATO(splash,1282);
  terminal_initial_position();
  connect();
  io_init();
  for (;;)
    {
      keyboard_main();
      io_main();
    }
}
