#include "Dog.h"

Dog::Dog(int id, char * breed){
  this->id = id;
  this->breed = breed;
}
int Dog::getID(){
  return this->id;
}
