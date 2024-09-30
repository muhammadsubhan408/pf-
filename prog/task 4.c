#include <stdio.h>
int main(){
	int purchase;
	int membership;
	char discount_eligibility ;
	printf("enter purchase amount=");
	scanf("%d", &purchase);
	printf("do you have membership?(press 1 if you do and 0 if you dont)");
	scanf("%d", &membership);
	discount_eligibility=(purchase>=100 && membership) ? 'y' : 'N';
	printf("discount_eligibility=%c\n",discount_eligibility);
	return 0;	
}



