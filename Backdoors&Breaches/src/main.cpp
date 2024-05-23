#include <iostream>

#include "cards.h"

int main()
{
	attackCard test("Memory Analysis", "Face ceva!");
	test.addTool("Volatility, to review the memory");
	test.addTool("Velociraptor, to dump the memory");

	test.addDetection("Detection 1");
	test.addDetection("Detection 2");
	test.addDetection("Detection 3");

	test.print();
}