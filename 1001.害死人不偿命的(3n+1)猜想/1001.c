#include<stdio.h>

int main(void) {
    int i = 0, j = 0;   //����
    int n;
    //     while(1){
    //         if(!scanf("%d:", &n) && n>=1000 && n<=0)
    //             printf("Please input an legal integer num:\n");
    //         }
    scanf("%d", &n);
    //if (scanf("%d", &n)) {};  //  PTA��������
    
    //��ʼ����Ϊż��
    if (n % 2 == 0) {
        //int i = 0;
        while (n != 1) {
            n /= 2;
            i++;
            //�м������������
            if (n % 2 == 1) {
                while (n != 1) {
                    n = (n * 3 + 1) / 2;
                    i++;
                    if (n % 2 == 0) //����ż�����˳�ѭ��
                        break;
                }
            }
        }
        printf("%d", i);
    }
    else {
        //int j = 0;
        //��������
        while (n != 1) {
            n = (n * 3 + 1) / 2;
            j++;
            //�м����ż��������2^nʱ�Ż����ż������
            if (n % 2 == 0) {
                while (n != 1) {
                    n /= 2;
                    j++;
                    if (n % 2 == 1) //  ��/2��������������˳�ѭ������
                        break;
                }
            }
        }
        printf("%d", j);
    }
    return 0;
}
