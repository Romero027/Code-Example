#include<iostream>
class Animal
{
	public:
  		void eat() { std::cout << "I'm eating generic food."<<std::endl; }
};

class Cat : public Animal
{
	public:
  		void eat() { std::cout << "I'm eating a rat."<<std::endl; }
};


void print(Animal *A){
	A->eat();
}



int main(){


	Animal *animal = new Animal;
	Cat *cat = new Cat;

	animal->eat(); // outputs: "I'm eating generic food."
	cat->eat();    // outputs: "I'm eating a rat."

	print(cat);// outputs: "I'm eating generic food."				
	print(animal);// outputs: "I'm eating generic food."
}