#include "Hello.h"

int main(int argc, const char* argv[])
{
  Hello *h = new Hello();
  h->setFormal(true);
  h->greeting();
  delete h;
  return 0;
}
