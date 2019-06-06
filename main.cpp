#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Animal *d = new Dog("Rex", "pets", "mammals", "dog family");

	cout << "Name Dog: " << (d->Name()) << endl;
	cout << "Type Dog: " << (d->Type()) << endl;
	cout << "Class Dog: " << (d->Class()) << endl;
	cout << "Famly Dog: " << (d->Famly()) << endl;


	Animal *c = new Cat("Mimi", "pets", "mammals", "cat family");

	cout << "Name Cat: " << (c->Name()) << endl;
	cout << "Type Cat: " << (c->Type()) << endl;
	cout << "Class Cat: " << (c->Class()) << endl;
	cout << "Famly Cat: " << (c->Famly()) << endl;


	Animal *l = new Lion("Simba", "pets", "mammals", "cat family");

	cout << "Name Lion: " << (l->Name()) << endl;
	cout << "Type Lion: " << (l->Type()) << endl;
	cout << "Class Lion: " << (l->Class()) << endl;
	cout << "Famly Lion: " << (l->Famly()) << endl;

	system("pause");
}