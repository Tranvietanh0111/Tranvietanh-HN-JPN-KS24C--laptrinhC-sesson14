#include <stdio.h>
#include <string.h>

int main() {
    char arr[50] = "alo ban ban khoe khong";
    int count = 0;
    printf("Chuoi ban dau: %s\n", arr);
    for (int i = 0; i < strlen(arr); i++) {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}

