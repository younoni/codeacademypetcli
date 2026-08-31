#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "MagicPet.hpp"
#include <iostream>
#include <vector>
#include <memory> // for smart pointers
using namespace std;

int main() {
  Dog myDog;
  myDog.setName("cat");
  myDog.getName();
  myDog.setAge(3);
  myDog.getAge();
  //dog part
  Cat myCat;
  myCat.setName("dog");
  myCat.getName();
  myCat.setAge(3);
  myCat.getAge();
  // cat part
  MagicPet myMagicPet;
  myMagicPet.setName("magic pet");
  //magic pet
  vector<Pet*> pets;
  pets.push_back(&myDog);
  pets.push_back(&myCat);
  pets.push_back(&myMagicPet);
  // adding objects in index
  for(Pet* pet : pets){
    pet -> makeSound();
    MagicPet* magicPetPtr = dynamic_cast<MagicPet*>(pet);
    if (magicPetPtr) {
      magicPetPtr -> doTrick();
    }

  }


  return 0;
}
