#include <iostream>
#include "windchillindex.h"

using std::cout;
using std::endl;
using edu::vcccd::vc::csv13::computeWindChillIndex;

int main(int argc, char *argv[]) {
	cout << "The current wind chill index is: "
		<< computeWindChillIndex(16.0, 11.0)
		<< endl;
}