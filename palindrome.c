#include<stdio.h>
int main(){
	int arr[50], check=0, n, i, count=0;
	printf("Enter a number:");
	scanf("%d", &n);
	while(n>0){
		arr[count] = n%10;
		n=n/10;
		count++;
	}
	for(i=0;i<count;i++){
		if(arr[i] == arr[count-i-1]){
			check = 0;
		}else{
			check = 1;
			break;
		}
	}
	if(check == 1){
		printf("Not palindrome\n");
	}else{
		printf("Palindrome\n");
	}
	return 0;
}
