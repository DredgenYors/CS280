#include <iostream>
#include <fstream>
using namespace std;

int writer() {
	ofstream file ("hello.txt");

	file << "hey";

	return 0;
}