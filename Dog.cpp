//Matthew Schultz, Giseok Ryu, Ugurcan Demir

#include "Dog.h"

Dog::Dog(int id, char * breed){
  this->id = id;
  this->breed = breed;
}
int Dog::getID(){
  return this->id;
}
Dog::Dog(){
  this->id = 0;
  this->breed = 'a';
}
