#include <iostream>

int main() {
    int n;
    std::size_t found;
    std::cin >> n;

    std::string p;
    for(int i = 0; i < n; i++) {
        std::cin >> p;
        found = p.find('+');
        if (found == std::string::npos)
            std::cout << "skipped\n";
        else
            std::cout << atoi(p.substr(0,found).c_str()) + atoi(p.substr(found + 1).c_str()) << "\n";
    }

}