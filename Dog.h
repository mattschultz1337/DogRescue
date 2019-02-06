//Matthew Schultz, Giseok Ryu, Ugurcan Demir

#ifndef DOG_H
#define DOG_H
#include <iostream>

class Dog{
  private:
    int id;
    char * breed;
  public:
    Dog();
    Dog(int id, char * breed);
    int getID();

};

#endif
