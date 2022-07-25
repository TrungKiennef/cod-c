#include <stdio.h>
int main(){
	// input num
	int num;
	printf("vui long nhap num=");
	scanf("%d",&num);
	//r = num mod 2
	int r;
	r = num % 2;
	if(r == 0){
		// chay ao neu yes
		printf("number is kirn");
	}else{
		// chay vao neu no
		printf("number is odd");
	}
}
