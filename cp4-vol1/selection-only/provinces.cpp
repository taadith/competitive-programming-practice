#include <iostream>

using namespace std;

int main() {
    int g,s,c;
    cin >> g >> s >> c;

    int buying_power = (g * 3) + (s * 2) + c;
    
    string victory_card = "";
    if (buying_power >= 8)
        victory_card = "Province";
    else if (buying_power >= 5)
        victory_card = "Duchy";
    else if (buying_power >= 2)
        victory_card = "Estate";
    
    string treasure_card = "";
    if (buying_power >= 6)
        treasure_card = "Gold";
    else if (buying_power >= 3)
        treasure_card = "Silver";
    else
        treasure_card = "Copper";
    
    cout << victory_card;
    if (victory_card != "" && treasure_card != "")
        cout << " or ";
    cout << treasure_card;
    cout << "\n";
    
    return 0;
}