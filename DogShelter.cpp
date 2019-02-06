//Matthew Schultz, Giseok Ryu, Ugurcan Demir

#include "DogShelter.h"

DogShelter::DogShelter(int num){
  this->shelter = new Dog*[num];
  this->MaxNumDogs = num;
  this->dogCount = 0;
}
bool DogShelter::addDog(Dog *d){
  if(dogCount<MaxNumDogs){
    d->id = dogCount;
    this->shelter[dogCount] = d;
    dogCount++;
    return true;
  }
  return false;
}
bool DogShelter::adopt(int id){
  
  return false;
}
DogShelter::~DogShelter(){
  delete this->shelter;
}
int DogShelter::getNumDogs(){
  return this->dogCount;
}
