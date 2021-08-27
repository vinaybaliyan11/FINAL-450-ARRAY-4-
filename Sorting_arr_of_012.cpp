#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
            swap(arr[low++],arr[mid++]);
        else if(arr[mid] == 1)
            mid++;
        else
            swap(arr[mid],arr[high--]);
    }
    cout << "Sorted array: ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
return 0;
}