#include <iostream>
#include "List.h"

int main()
{
	List lista1;

	lista1.add(1);
	lista1.add(2);
	lista1.add(5);
	lista1.add(3);

	lista1.print();

	lista1.remove(2);

	lista1.print();

	lista1.remove(3);

	lista1.print();

	lista1.remove(3);

	lista1.print();
	lista1.print();
	lista1.print();

	lista1.remove(1);

	lista1.print();

	lista1.remove(5);

	lista1.print();
	return 0;
}