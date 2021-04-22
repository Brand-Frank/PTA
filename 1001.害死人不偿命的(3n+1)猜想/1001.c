#include<stdio.h>
#include<stdbool.h>
bool odd(int n);
bool even(int n);

int main(void) {
    int i = 0, j = 0;
    int n;
    //     while(1){
    //         if(!scanf("%d:", &n) && n>=1000 && n<=0)
    //             printf("Please input an legal integer num:\n");
    //         }
         scanf("%d", &n);
    //if (scanf("%d", &n)) {};
    //初始输入为偶数
    if (even(n)) {
        //         for(int i = 1; n==1; i++)
        while (n != 1) {
            n /= 2;
            i++;
        }
        //         return i;
        printf("%d", i);
    }
    else {
        //奇数处理
        while (n != 1 || !odd(n)) {
            n = (n * 3 + 1) / 2;
            j++;
        }
        //中间出现偶数后处理
        while (n != 1) {
            n /= 2;
            j++;
        }
        //         return j;
        printf("%d", j);
    }
}

bool odd(int n) {
    if (n % 2 == 1)
        return 1;
    else
        return 0;
}
bool even(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
