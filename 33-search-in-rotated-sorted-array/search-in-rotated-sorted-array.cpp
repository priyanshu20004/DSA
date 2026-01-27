class Solution {
public:
    
int search(vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        // Check each element one by one
        if (arr[i] == key)
            return i;
    }
    // Key not found
    return -1;
}
};