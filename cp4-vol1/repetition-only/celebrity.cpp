#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare a string variable to store each line of input
    string line;

    // Read input lines until the end of the input stream is reached
    while (getline(std::cin, line)) {
        // Print the line
        cout << line << endl;
    }

    return 0;
}
