#include<stdio.h>
void main(void)
{
	int i,j,sum=2;
    for(i=3;i<100;i++){ //1��100�������������Ѷ���sum=2���ʵô�
	  for(j=2;j<i;j++){
			if(i%j==0)break;
			if(i==j+1)sum+=i;
		}
	}
	  printf("%d\n",sum);
}