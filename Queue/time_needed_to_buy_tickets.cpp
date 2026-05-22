#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> tickets = {2,6,4,3,7};  
    int k = 2;

    int time = 0;

    for (int i = 0; i < tickets.size(); i++) {
        if (i < k) {
            time += min(tickets[i], tickets[k]);
        }
        else if (i > k) {
            time += min(tickets[i], tickets[k] - 1);
        }
        else {
            time += tickets[k];
        }
    }

    cout << "Time required: " << time << endl;
    return 0;
}
