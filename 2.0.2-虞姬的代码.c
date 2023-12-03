#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MaxSize 25

void spiral(int n) {
    int matrix[MaxSize][MaxSize];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;
    int direction = 0;
    int i = 0, j = 0;
    while (top <= bottom && left <= right) {
        if (direction == 0) {  // 向右
            for (i = left; i <= right; i++) {
                matrix[top][i] = num++;
            }
            top++;
        }
        else if (direction == 1) {  // 向下
            for (i = top; i <= bottom; i++) {
                matrix[i][right] = num++;
            }
            right--;
        }
        else if (direction == 2) {  // 向左
            for (i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }
        else {  // 向上
            for (i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }

        direction = (direction + 1) % 4;  // 更新方向
    }

    // 输出方阵
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int i = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d阶方阵：\n", i);
        spiral(i);
    }

    return 0;
}