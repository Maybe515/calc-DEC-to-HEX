#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

unsigned int trans(unsigned char c){
	if('0'<=c && '9'>=c) return (c-0x30);//0x30��'0'�̕����R�[�h
	if('A'<=c && 'F'>=c) return (c+0x0A-0x41);//0x41��'A'�̕����R�[�h
	if('a'<=c && 'f'>=c) return (c+0x0A-0x61);//0x61��'a'�̕����R�[�h
	return 0;
}

int main(void){
	
	int str;
	unsigned int i,j=0;
	//char*str="0xABCDEF12";
	char*str_ptr=str+strlen(str)-1;
	char re;
	
	printf("10�i����16�i�� �ϊ�\n");
	
	do{//�ē��͂̏���
	
	printf("10�i�� 0�`9����͂��Ă�������\n");
	scanf("%d",str);
	
	for(i=0;i<strlen(str);i++){
		j+=trans(*str_ptr--)*(unsigned int)pow(16,i);
	}
	printf("%u\n",j);

	printf("�ē��͂���ꍇ�́y1�z�����:");	
	scanf("%d",&re);
	printf("\n");
	} while(re==1);	//1�őS�̃v���O�����̍ē��͂����s
	
	printf("Finished");
	return 0;
}