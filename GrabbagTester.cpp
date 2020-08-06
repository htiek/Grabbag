#include "GrabbagTester.h"
#include "Grabbag.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

void runPrivateTest(const string& testName,
                    function<void(istream&)> callback) {
    /* Load the grabbag. */
    ifstream input("res/tests/assignment.grabbag", ios::binary);
    Grabbag grabbag(input);

    istringstream source(grabbag.contentsOf(testName));
    callback(source);
}
