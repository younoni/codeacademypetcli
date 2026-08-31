# Virtual Pet Simulation in C++

This project is a simple virtual pet simulator built with C++ to demonstrate object-oriented programming concepts such as abstraction, inheritance, polymorphism, and interfaces.

## Features

- **Pet Base Class:** Abstract class with attributes like `name` and `age`, and basic behaviors.
- **Dog and Cat Classes:** Inherit from `Pet` and implement their own `makeSound()` methods.
- **MagicPet Class:** Inherits from both `Pet` and a `SpecialAbility` interface, and can perform unique tricks.
- **Polymorphism:** Uses a vector of `Pet*` to store and interact with different pet types.
- **Dynamic Casting:** Identifies and calls special abilities for magic pets.

## How to Run

1. Clone the repository.
2. Compile all `.cpp` files together, for example:
