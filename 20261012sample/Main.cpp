#include <iostream>
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main(void)
{
	Dog dog("ポチ");
	cout << dog.GetName() << endl;

	dog.Speak();

	Cat cat("タマ");
	cout << cat.GetName() << endl;

	cat.Speak();
}