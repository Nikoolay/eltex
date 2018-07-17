#include "sprav.h"


int main()
{
	struct sprav *new_sprav;
	char *name, *number;
	int action=-1;
	printf("действия: 0-выход, 1-добавить, 2-удалить, 3-поиск, 4-список, 5-очистить, 6-новая книга");
	while(1)
	{
		printf("Действие:\n");
		scanf(" %d",&action);
		switch(action)
		{
			case 0:
			{
				return 0;
				break;
			}
			case 1:
			{
				name=malloc(10*sizeof(char));
				number=malloc(4*sizeof(char));
				printf("Введите имя и номер:\n");
				scanf(" %s %s",name, number);
				if(sprav_add(new_sprav, name, number)==0)
				printf("добавлено\n");
				break;
			}
			case 2:
			{
				name=malloc(10*sizeof(char));
				printf("введите имя: \n");
				scanf(" %s", name);
				if(sprav_remove(new_sprav, sprav_poisk(new_sprav, name))==0)
				printf("удалено.\n\n\n");
				free(name);
				break;
			}
			case 3:
			{
				name=malloc(10*sizeof(char));
				printf("Введите имя или номер");
				scanf(" %s", name);
				if(sprav_poisk(new_sprav, name)!=NULL)
				printf("Найдено");
				free(name);
				break;
			}
			case 4:
			{
				if(sprav_list(new_sprav)==0)
				printf("весь список\n");
				break;
			}
			case 5:
			{
				if(sprav_clear(new_sprav)==0)
				printf("Очищенно\n");
				break;
			}
			case 6:
			{
				new_sprav=sprav_start();
				printf("инициализировано");
				break;
			}
			default: break;
		}
	}
	return 1;
}
