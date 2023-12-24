#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, a_len, s_len, t_len;
    cin >> n;

    string a,s,t;
    for(int i = 1; i <= n; i++) {
        cin >> a >> s >> t;
        a_len = a.size();
        s_len = s.size();
        t_len = t.size();

        int d = 0;
        for(int i = 0; i < a_len; i++) {
            d += s.find(a.at(i)) * pow(s_len, a_len - i - 1);
        }

        string answer = "";
        while(d != 0) {
            answer = t.at(d % t_len) + answer;
            d /= t_len;
        }

        cout << "Case #" << i << ": " << answer << "\n";
    }


}