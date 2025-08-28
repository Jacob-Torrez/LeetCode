class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size = matrix[0].size();
        
        int left = 0;
        int right = row_size * matrix.size() - 1;

        while (left <= right){
            int mid = left + (right - left) / 2;
            int mid_val = matrix[mid / row_size][mid % row_size];

            if (mid_val == target){
                return true;
            }
            else if (mid_val < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};