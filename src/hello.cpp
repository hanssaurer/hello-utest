#include "Hello.h"
#include <iostream>
using namespace std;

void Hello::greet()
{
  if (myname)
    cout << "Hello " << myname << ", nice to meet you!" << endl;
  else
    cout << "Hello unknown!"  << endl;

}

void Hello::setName(const char* name)
{
  myname = name;
}

const char*  Hello::getName()
{
  return myname;
}
