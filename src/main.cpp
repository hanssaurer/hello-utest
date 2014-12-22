#include "hello.h"
#include <string.h>

int main(int argc, const char* argv[])
{
int success;

  Hello *h = new Hello();
  if (argc > 1) h->setName(argv[1]);
  h->greet();
  if ( strcmp(h->getName(), "Hans") )
  	success = 0;
  else
  	success = 1;

  delete h;
  return success;
}
