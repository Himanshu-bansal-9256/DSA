#include<iostream>
using namespace std;

int main(){
    // char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
    
    //  i can print these array by both the mothesds
    // cout<<arr<<endl;

    // for(int i = 0 ; arr[i] != '\0' ; i++){
    //     cout<<arr[i];
    // }

    // char arr[20];
    // cin>>arr; 
    // // cout<<arr<<endl;

    // arr[2]='\0'; // null character
    // cout<<arr<<endl;


    // string s = "Hello World";
    // cout<<s<<endl; // Hello World
    // cin>>s; // himanshu basnal
    // cout<<s<<endl; // himanshu

    // so remove this problem we have getline function
    // string s1;
    // getline(cin, s1);
    // cout<<s1<<endl; // himanshu basnal
    // cout<<s1.size(); // 15 including space

    // append 
    string s1 = "Himanshu ";
    string s2 = "Basnal";
    cout<<s1+s2<<endl; // Himanshu Basnal
    string s3 = s1.append(s2);
    cout<<s3<<endl; // Himanshu Basnal
}