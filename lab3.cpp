
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("file.in");
    int n;
    fin >> n;

    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        fin >> weights[i];
    }

    // Sort in descending order
    sort(weights.begin(), weights.end(), greater<int>());

    // Calculate sum of top 5 weights
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += weights[i];
    }

    cout << total << endl;

    fin.close();
    return 0;
}
