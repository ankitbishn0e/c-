
#include<stdio.h>
struct student {
	char name[20];
	int roll_no;
	float marks;
};
void display(struct student s1) {
	printf("\nName :%s",s1.name);
	printf("\nRoll_no :%d",s1.roll_no);
	printf("\nMarks :%f",s1.marks);
}
int main(){
	struct student s1;
	printf("enter name:");
	scanf("%s",s1.name);
	 printf("enter roll no:");
        scanf("%d",&s1.roll_no);
	 printf("enter marks:");
        scanf("%f",&s1.marks);
	display(s1);
	return 0;
}


