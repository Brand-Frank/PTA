#include<stdio.h>

int main(void) {
    int i = 0, j = 0;   //计数
    int n;
    //     while(1){
    //         if(!scanf("%d:", &n) && n>=1000 && n<=0)
    //             printf("Please input an legal integer num:\n");
    //         }
    scanf("%d", &n);
    //if (scanf("%d", &n)) {};  //  PTA限制输入
    
    //初始输入为偶数
    if (n % 2 == 0) {
        //int i = 0;
        while (n != 1) {
            n /= 2;
            i++;
            //中间出现奇数后处理
            if (n % 2 == 1) {
                while (n != 1) {
                    n = (n * 3 + 1) / 2;
                    i++;
                    if (n % 2 == 0) //出现偶数，退出循环
                        break;
                }
            }
        }
        printf("%d", i);
    }
    else {
        //int j = 0;
        //奇数处理
        while (n != 1) {
            n = (n * 3 + 1) / 2;
            j++;
            //中间出现偶数后处理：即2^n时才会进入偶数处理
            if (n % 2 == 0) {
                while (n != 1) {
                    n /= 2;
                    j++;
                    if (n % 2 == 1) //  若/2后出现奇数，则退出循环计数
                        break;
                }
            }
        }
        printf("%d", j);
    }
    return 0;
}
