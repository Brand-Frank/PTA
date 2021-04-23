#include<stdio.h>
#include<string.h>

int main(void) {
	//	变量定义
	unsigned int n;
	//unsigned long long int n;	//TODO: 存储不了样例中的数字
	char pinyin[10][10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };//TODO: 字符串的存储方式改进
	char temp[10][10];
	int count_before = 0, count_after = 0;
	unsigned long int n_mid = 0;
	int j = 1;

	//int c= strlen(pinyin[0]);
	//printf("%s", pinyin[0]);

	//	样例输入
	printf("n = ");
	scanf("%d", &n);

	//	拆解求和
	while (n != 0) {
		n_mid += n % 10;
		n /= 10;
		count_before++;	//	计算原始数据的位数
	}

	//	编码对照
	while (n_mid != 0) {
		for (int i = 0; i < strlen(pinyin[i]); i++) {
			//tmp= n_mid %= 10;
			temp[j][i] = pinyin[n_mid % 10][i];
			n_mid /= 10;
			j++;
		}
		count_after++;	//	计算各位求和之后的数字位数
	}

	//	格式输出
	while (count_after != 0) {
		if (count_after > 1) {
			printf("%s ", temp[count_after]);		
		}
		else {
			printf("%s", temp[count_after]);	//	最后一位(count_after=1)
		}
		count_after--;
	}
	printf("n_mid = %d", n_mid);

	return 0;
}