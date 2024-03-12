#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        if (matrix.empty() || matrix[0].empty()) {
            return result;  // Handle empty matrix case
        }

        int direction = 0;
        int top = 0;
        int bottom = matrix.size();
        int left = 0;
        int right = matrix[0].size();

        while (top < bottom && left < right) {
            if (direction == 0) {
                for (int j = left; j < right; j++) {
                    result.push_back(matrix[top][j]);
                }
                top++;
            } else if (direction == 1) {
                for (int i = top; i < bottom; i++) {
                    result.push_back(matrix[i][right - 1]);
                }
                right--;
            } else if (direction == 2) {
                for (int j = right - 1; j >= left; j--) {
                    result.push_back(matrix[bottom - 1][j]);
                }
                bottom--;
            } else if (direction == 3) {
                for (int i = bottom - 1; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }

            direction = (direction + 1) % 4;
        }

        return result;
    }
};
