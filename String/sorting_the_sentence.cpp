#include <iostream>
#include <vector>
using namespace std;

 string sortSentence(string s) {
        vector<string> arr(10);
        string temp = "";
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                arr[pos] = temp;
                temp.clear();
                count++;
            }
        }
        // handle the last word
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        arr[pos] = temp;
        temp.clear();
        count++;
        string ans;
        for (int i = 1; i <= count; i++) {
            ans += arr[i] + ' ';
        }
        ans.pop_back();
        return ans;
    }

int main()
{

    string s;
    getline(cin, s);
    cout << sortSentence(s);
}