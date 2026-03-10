#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int>& arr, int k) {
    int maxi = 0;
    int n = arr.size();
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        maxi = max(maxi, sum);
    }
    return maxi;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " is: " << maxSum(arr, k) << endl;
    return 0;
}