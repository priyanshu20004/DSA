class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        
   int n = nums.size();

    // Initialize first and last index
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {

        // If x is different, continue
        if (x != nums[i])
            continue;
        
        // If first occurrence found
        if (first == -1)
            first = i;
        
        // Update last occurrence
        last = i;
    }
    vector<int> res = {first, last};
    return res;
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int x = 5;
    vector<int> res = searchRange(nums, x);
    cout << res[0] << " " << res[1];
    return 0;
        
    }
};