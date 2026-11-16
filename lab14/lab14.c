#include <stdio.h>
#define MAX 1000
int countLocalMaxima(const int* a, int n) {
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            count++;
        }
    }
    return count;
}
int main(void) {
    int n;
    int a[MAX];
    printf("Введите n: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        printf("Некорректное n (должно быть от 1 до %d)\n", MAX);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int result = countLocalMaxima(a, n);
    printf("Количество локальных максимумов: %d\n", result);
    return 0;
}