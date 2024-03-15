#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

unsigned int trans(unsigned char c){
	if('0'<=c && '9'>=c) return (c-0x30);//0x30は'0'の文字コード
	if('A'<=c && 'F'>=c) return (c+0x0A-0x41);//0x41は'A'の文字コード
	if('a'<=c && 'f'>=c) return (c+0x0A-0x61);//0x61は'a'の文字コード
	return 0;
}

int main(void){
	
	int str;
	unsigned int i,j=0;
	//char*str="0xABCDEF12";
	char*str_ptr=str+strlen(str)-1;
	char re;
	
	printf("10進数→16進数 変換\n");
	
	do{//再入力の処理
	
	printf("10進数 0～9を入力してください\n");
	scanf("%d",str);
	
	for(i=0;i<strlen(str);i++){
		j+=trans(*str_ptr--)*(unsigned int)pow(16,i);
	}
	printf("%u\n",j);

	printf("再入力する場合は【1】を入力:");	
	scanf("%d",&re);
	printf("\n");
	} while(re==1);	//1で全体プログラムの再入力を実行
	
	printf("Finished");
	return 0;
}