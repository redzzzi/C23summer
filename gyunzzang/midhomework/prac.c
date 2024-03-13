#include <stdio.h>

void modifyArray(int arr[]) {
    arr[0] = 999;  // 배열의 첫 번째 요소를 변경
}

int main() {
    int myArray[3] = {1, 2, 3};
    modifyArray(myArray);

    // 이제 myArray[0]은 999로 변경되어 있습니다.
		printf("myArray[0] is %d\n", myArray[0]);
    return 0;
}
