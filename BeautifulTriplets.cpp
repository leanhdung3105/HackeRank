#include <iostream>
#include<vector>
#include<map>
using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
    map<int, int> mp;
    int result = 0;
    for (int a : arr) {
        mp[a] += 1;
        result += mp[a-d]*mp[a-2*d];
    }
    return result;
}

int main() {
    int n; 
    int d;
    cin >> n >> d;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item; cin >> arr_item;
        arr[i] = arr_item;
    }

    int result = beautifulTriplets(d, arr);

    cout << result << "\n";


    return 0;
}
