/*
A group of friends are playing cards. Only numeric cards are in consideration along 
with the joker card (equivalent to 0) 12 the symbols in the cards 
are not taken into account. Each player will receive a set of 
cards. The rule of game is to rearrange the set of cards to the 
possible number sequence. Player with the set of cards forming the 
smallest number wins the game. The sequence of cards should not 
start with a joker card. Task is to write a program for developing
the logic of the game considering the set of cards as a number.

Example 1: 
Input: 
3421 -> Value of Card Set
Output:
1234 -> Prints the lowest number matching the set criteria

*/
#include <iostream>
#include <algorithm>

using namespace std;

string findSmallestNumber(string cardSet) {
    sort(cardSet.begin(), cardSet.end());
    
    // If the smallest number is '0', swap it with the first non-zero digit
    if (cardSet[0] == '0') {
        for (int i = 1; i < cardSet.length(); i++) {
            if (cardSet[i] != '0') {
                swap(cardSet[0], cardSet[i]);
                break;
            }
        }
    }
    
    return cardSet;
}

int main() {
    string cardSet;
    cin >> cardSet; // Taking input as a string to preserve digits
    
    string smallestNumber = findSmallestNumber(cardSet);
    cout << smallestNumber << endl;
    
    return 0;
}
/*
A group of friends are playing cards. Only numeric cards are in consideration along 
with the joker card (equivalent to 0) 12 the symbols in the cards 
are not taken into account. Each player will receive a set of 
cards. The rule of game is to rearrange the set of cards to the 
possible number sequence. Player with the set of cards forming the 
smallest number wins the game. The sequence of cards should not 
start with a joker card. Task is to write a program for developing
the logic of the game considering the set of cards as a number.

Example 1: 
Input: 
3421 -> Value of Card Set
Output:
1234 -> Prints the lowest number matching the set criteria

*/
#include <iostream>
#include <algorithm>

using namespace std;

string findSmallestNumber(string cardSet) {
    sort(cardSet.begin(), cardSet.end());
    
    // If the smallest number is '0', swap it with the first non-zero digit
    if (cardSet[0] == '0') {
        for (int i = 1; i < cardSet.length(); i++) {
            if (cardSet[i] != '0') {
                swap(cardSet[0], cardSet[i]);
                break;
            }
        }
    }
    
    return cardSet;
}

int main() {
    string cardSet;
    cin >> cardSet; // Taking input as a string to preserve digits
    
    string smallestNumber = findSmallestNumber(cardSet);
    cout << smallestNumber << endl;
    
    return 0;
}
