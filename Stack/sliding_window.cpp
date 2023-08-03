#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> slidingWindowMax(const vector<int>& nums, int k) {
    vector<int> resul   t;
    priority_queue<pair<int, int>> window;  // Max heap

    // Create the initial sliding window
    for (int i = 0; i < k; i++) {
        window.push({nums[i], i});
    }
    result.push_back(window.top().first);

    // Slide the window and update the result
    for (int i = k; i < nums.size(); i++) {
        window.push({nums[i], i});
        while (window.top().second <= i - k) {
            window.pop();  // Remove elements outside the window
        }
        result.push_back(window.top().first);
    }
    return result;
}
int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = slidingWindowMax(nums, k);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
