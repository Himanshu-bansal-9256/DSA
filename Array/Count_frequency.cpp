#include <iostream>
#include <vector>
using namespace std;

int frequency(int arr[100], int n)
{
   vector<int> count(n,0);
   for(int i  = 0 ; i<n; i++){
    count[arr[i]-1]++;

   }
   for(int i = 0 ; i < n; i++){
    cout<<i+1<<" "<<count[i]<<endl;
   }
   return 0;
   

}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int result = frequency(arr, n);
    cout << result << endl;
}
