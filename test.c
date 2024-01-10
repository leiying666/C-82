#include"contact.h"
void menu()
{
	printf("***********通讯录***********\n");
	printf("******1.add      2.del   ***\n");
	printf("******3.search   4.modify***\n");
	printf("******5.show     6.sort  ***\n");
	printf("******7.save     0.exit  ***\n");
}
int main()
{
	struct Contact con;//里面包含size，data指针，capacity
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			//销毁通讯录，释放内存
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
