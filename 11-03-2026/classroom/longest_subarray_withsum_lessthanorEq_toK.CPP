#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumLeK(vector<int>& arr, int k) {
    int n = arr.size();
    int maxLen = 0;
    int sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum > k) {
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    vector<int> arr = {4, 2, 1, 7, 8, 1, 2, 8};
    int k = 8;
    int result = longestSubarrayWithSumLeK(arr, k);
    cout << "Longest subarray with sum <= " << k << " is: " << result << endl;
    return 0;
}
