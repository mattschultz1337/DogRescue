
int main(){
  Dog * dog1 = new Dog();
  DogShelter shelter;
  shelter.addDog(dog1);
  shelter.adopt(dog1->id);
  delete dog1;
}
