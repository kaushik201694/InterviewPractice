#include <iostream>
#include "Header.h"

using namespace std;

int pair1() {
	
	pair<int, string> p1;
	p1 = { 23, "tenma" };
	log2(p1);

	pair<int, string> p2 = p1;
	p2.first = 34;
	log2(p1);
	log2(p2);

	return 0;
}
