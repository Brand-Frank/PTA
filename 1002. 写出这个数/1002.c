#include<stdio.h>
#include<string.h>

int main(void) {
	//	��������
	unsigned int n;
	//unsigned long long int n;	//TODO: �洢���������е�����
	char pinyin[10][10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };//TODO: �ַ����Ĵ洢��ʽ�Ľ�
	char temp[10][10];
	int count_before = 0, count_after = 0;
	unsigned long int n_mid = 0;
	int j = 1;

	//int c= strlen(pinyin[0]);
	//printf("%s", pinyin[0]);

	//	��������
	printf("n = ");
	scanf("%d", &n);

	//	������
	while (n != 0) {
		n_mid += n % 10;
		n /= 10;
		count_before++;	//	����ԭʼ���ݵ�λ��
	}

	//	�������
	while (n_mid != 0) {
		for (int i = 0; i < strlen(pinyin[i]); i++) {
			//tmp= n_mid %= 10;
			temp[j][i] = pinyin[n_mid % 10][i];
			n_mid /= 10;
			j++;
		}
		count_after++;	//	�����λ���֮�������λ��
	}

	//	��ʽ���
	while (count_after != 0) {
		if (count_after > 1) {
			printf("%s ", temp[count_after]);		
		}
		else {
			printf("%s", temp[count_after]);	//	���һλ(count_after=1)
		}
		count_after--;
	}
	printf("n_mid = %d", n_mid);

	return 0;
}