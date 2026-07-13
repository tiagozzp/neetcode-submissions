class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < (n - 1); i++) {
            arr[i] = 0;
            for (int k = i + 1; k < n; k++) {
                if (arr [k] > arr [i]) {
                    arr [i] = arr [k];
                }
            }
        }
        arr[n-1] = -1;
        return arr;
    }
};