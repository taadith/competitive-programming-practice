#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string name, study_start, birth;
    int courses;

    for(int i = 0; i < n; i++) {
        cin >> name >> study_start >> birth >> courses;
        if (atoi(study_start.substr(0,4).c_str()) >= 2010)
            cout << name << " eligible\n";
        else if (atoi(birth.c_str()) >= 1991)
            cout << name << " eligible\n";
        else if (courses > 40)
            cout << name << " ineligible\n";
        else
            cout << name << " coach petitions\n";
    }

    return 0;
}