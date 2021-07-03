#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

void _8ball(){
    string question, response;
    cout << "\nHi! I am the 8ball. Ask me anything you want!\n\n";
    cin >> question;
    string responses[8] = {"Yes!", "No!", "Absolutely!", "Nope!", "Maybe.", "It is possible.", "If you try hard enough, yes!"};
    //int x = rand() % 8 + 0;
    srand(time(0));
    response = responses[rand() % 8];
    cout << response;
}

int main() {
    _8ball();
    return 0;
}