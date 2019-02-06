#ifndef DOG_H
#define DOG_H
#include <iostream>

class Dog{
  private:
    int id;
    char * breed;
  public:
    Dog(int id, char * breed);
    int getID();

};

#endif
