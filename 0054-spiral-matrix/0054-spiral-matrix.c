/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** m, int s, int* cs, int* r) {
    *r = s * cs[0];
    int* ans = malloc((*r) * sizeof(int));
    int top = 0, bottom = s - 1, left = 0, right = cs[0] - 1, index = 0;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans[index++] = m[top][i];
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            ans[index++] = m[i][right];
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans[index++] = m[bottom][i];
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans[index++] = m[i][left];
            }
            left++;
        }
    }
    return ans;
}