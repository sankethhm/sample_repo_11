#include<stdio.h>
struct stu_info
{
	int id;
	char name[20];
	char address[100];
};
int main()
{
	struct stu_info s1 = {1234,"YASH","Mysore"};
	struct stu_info *ptr=&s1;
	printf("sizeof struct=%zu\n",sizeof(s1));
	printf("id=%d\n",s1.id);
	printf("name=%s\n",s1.name);
	printf("address=%s\n",s1.address);
	printf("%d\n",(*ptr).id);
	printf("%d\n",ptr->id);
	printf("%s\n",(*ptr).name);
	printf("%s\n",ptr->name);

}
