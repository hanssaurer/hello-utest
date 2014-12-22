#ifndef HELLO_H_
#define HELLO_H_

class Hello
{
private:
  const char* myname;
public:
  void greet();
  void setName(const char *name);
  const char *getName();
};

#endif /*HELLO_H_*/