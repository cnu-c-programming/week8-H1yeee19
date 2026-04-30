#include <stdio.h>
#include <string.h>

   void bubbleSort(char *arr[], int n) {    // 문자열 배열을 버블 정렬하는 함수
        for (int i = 0; i < n-1; i++) {     //
            for (int j = 0; j < n-i-1; j++) {
                if (strcmp(arr[j], arr[j+1]) > 0) {
                    char *temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

int main() {

    char *names[] = {"apple", "mango","ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    bubbleSort(names, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
