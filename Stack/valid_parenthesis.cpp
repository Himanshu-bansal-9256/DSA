#include <iostream>
#include <stack>
using namespace std;

// bool check(string str){
//     stack<char>st;
//     for(int i = 0 ; i< str.size(); i++){
//         if(st.empty()){
//             st.push(str[i]);
//         }
//         else{
//             if(st.empty()) return false;
//             else{
//                 st.pop();
//             }
//         }
//     }
//     return st.empty();
// }

// 2nd method 

bool check(string str){
    int left = 0 ;
    for(int i = 0 ; i < str.size(); i++){
        if(str[i] == '('){
            left++;
        }
        else{
            if(left==0) return false;
            else{
                left--;
            }
        }
    }
    return left == 0;
}
int main()
{
    // check for valid parenthesis using stack
    string str = "((())))";
    cout<<check(str)<<endl;
    return 0;
}
