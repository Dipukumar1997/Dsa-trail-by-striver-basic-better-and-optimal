#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int max (vector<int> &prices){
    int mini;
    int maxp = 0;
    for (size_t i = 0; i < prices.size(); i++)
    {
        // current it - mininum so i would know how much i earned with diffeence
        int cost_of_differences = prices[i] - mini;

        //so that maxp always be greater than maxp
        maxp = max (maxp,cost_of_differences);

        //keep eye on mini
        mini = min(mini,prices[i]);
    }
    
    return maxp;
}

int main() {
   

    return 0;
}