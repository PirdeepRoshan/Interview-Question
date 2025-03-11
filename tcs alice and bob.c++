/*
Alice and Bob are batch mates and Alice got placed in a well-reputed product-based company and his friend Bob is demanding a pizza party from him. Alice is ready for giving party and he ordered N pizzas from the nearest restaurant. Now pizzas can have at most K different flavors (It is not necessary that there should be one pizza of each flavor), numbered from 1 to K such that ⅈ^th pizza can have Ai flavor (1 <= Ai <=k).
Bob is on dieting, and he can only eat pizza of at most k-1 flavors but he can eat as many pizzas of ith flavor and he wanted to choose maximum possible pizzas which are in contiguous sequence to one another such that all pizzas in sequence has atmost k-1 flavors.
For example
6 2            -> here 6 is the number pizzas of and 2 is number of distinct flavors
1 1 1 2 2 1   -> ith pizza has flavor ai
Example 1: 
Input 
6 2            -> Size of input Array and K distinct flavors
1 1 1 2 2 1  -> input array (N Different pizza flavors )
Output 
3
Explanation
Maximum length subarray with at most k-1 distinct flavors is 3 and sub array is 1 1 1
Example 2:
Input:
5 3 -> Size of inputs Arrays and K distinct flavors
1 1 2 2 1 -> input array (N Different Pizza Flavors)
Output
5
Explanation
Since N pizza in total has only 2 flavors so bob can eat all pizza so maximum length of subarray with at most k-1 distinct flavors is 5
*/
#include <iostream>
#include <vector>
using namespace std;

int maxPizzaSequence(vector<int>& pizzas, int N, int K) {
    int maxLen = 0;
    for (int i = 0; i < N; i++) {
        vector<int> count(K + 1, 0);
        int distinctFlavors = 0;
        for (int j = i; j < N; j++) {
            if (count[pizzas[j]] == 0) {
                distinctFlavors++;
            }
            count[pizzas[j]]++;
            if (distinctFlavors > K - 1) {
                break;
            }
            maxLen = max(maxLen, j - i + 1);
        }
    }
    return maxLen;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> pizzas(N);
    
    for (int i = 0; i < N; i++) {
        cin >> pizzas[i];
    }
    
    cout << maxPizzaSequence(pizzas, N, K) << endl;
    return 0;
}
