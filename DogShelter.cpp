#include "DogShelter.h"

DogShelter::DogShelter(int num){
  this->MaxNumDogs = num;
  this->dogCount = 0;
}
bool DogShelter::addDog(Dog *d){
  if(dogCount<MaxNumDogs){
    Dog x(dogCount);
    this->shelter[dogCount] = x;
    dogCount++;
  }
}
bool DogShelter::adopt(int id){
  
}
int DogShelter::getNumDogs(){
  return
}
