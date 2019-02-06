//Matthew Schultz, Giseok Ryu, Ugurcan Demir

#ifndef DOGSHELTER_H
#define DOGSHELTER_H
#include <iostream>

class DogShelter{
  private:
    int MaxNumDogs;
    int dogCount;
    Dog shelter[20];
  public:
    ~DogShelter();
    DogShelter(int num);
    int getNumDogs();
    bool addDog(Dog *d);
    bool adopt(int id);

};
#endif
