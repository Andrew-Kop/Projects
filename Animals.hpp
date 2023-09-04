#pragma once
#include <iostream>
#include <string>

class Animal {
public:
	unsigned int legs = 0;
	void voice();
	std::string name;
	std::string mom;
	std::string dad;
};

class Mammal :public Animal {
public:
	unsigned int legs = 4;
};

class Birds : public Animal {
	unsigned int legs = 2;
	void voice() {
		std::cout << "chirik" << "\n";
	}
};

class Dog : public Mammal {
public:
	void voice() {
		std::cout << "Woof" << "\n";
	}
	Dog(std::string _name){
		name = _name;
	}
	Dog operator + (const Dog & mom) {
		Dog Res("Gav");
		Res.mom = mom.name;
		Res.dad = name;
		return Res;
	}
};

class Calibri : public Birds {
	void voice() {
		std::cout << "Few" << "\n";
	}
};

