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

int main(int argc, char *argv[]) {  //argc: argument count, argv: argument variable
    //char *argv[]: 문자열의 주소를 저장하는 포인터 배열, 각 인자는 띄어쓰기로 구분됨.
    // char *argv[] = {"./a.out", "apple", "mango","ant", "banana", "cat", "anaconda"};
    // char *argv[] == char **argv (char 포인터의 배열 == char 포인터에 대한 포인터)

    bubbleSort(argv + 1, argc - 1);  // argv[0]은 프로그램 이름이므로 제외

    for (int i = 1; i < argc; i++) {
        printf("%s\n ", argv[i]);
    }
}
