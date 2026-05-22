#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // brtue force approach
    vector<int>arr;
        for(int i = 0 ; i < m ; i++){
            arr.push_back(nums1[i]);
        }
        for(int j = 0 ; j < n ; j++){
            arr.push_back(nums2[j]);
        }
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < m+n;i++){
            nums1[i]=arr[i];
        }
    // optimal approach
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }
        else{
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    
    merge(nums1, m, nums2, n);
    
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
