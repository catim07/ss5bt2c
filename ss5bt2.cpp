#include<stdio.h>
int main(){
	int a,b;
	a=31;
	printf("moi ban doan so: ");
	do{
		scanf("%d",&b);
		if(a!=b){	
		printf("sai roi hahahah: ");
	}
	}while(a!=b);
	printf("ban doan dung so cua toi roi 10 diem!");
	return 0;
}
