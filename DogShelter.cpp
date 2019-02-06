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
Dog DogShelter::findDog(int id){
  for(int i=0;i<getNumDogs();i++){
    if(this->shelter[i]->id==id){
      return this->shelter[i];
    }
  }
  return NULL;
}
bool DogShelter::adopt(int id){
  Dog * d = this->findDog(id);
  if(d==NULL)return false;
  fstream fptr;
  fptr.open("adopted.log", fstream::app);
  fptr<<d->id<<"\t"<<d->breed<<std::endl;
  fptr.close();
  return true;
}
DogShelter::~DogShelter(){
  delete this->shelter;
}
int DogShelter::getNumDogs(){
  return this->dogCount;
}
