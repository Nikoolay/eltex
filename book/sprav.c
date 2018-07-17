#include "sprav.h"
#include <string.h>

struct sprav *sprav_start()
{	
	struct sprav *new_sprav = calloc(1, sizeof(struct sprav));
	return new_sprav;
}

int sprav_add(struct sprav *t, char *name, char *number)
{
	struct sprav_zap *new_zap = malloc(sizeof(struct sprav_zap));
	new_zap->name = name;
	new_zap->number = number;
	new_zap->next=NULL;
	if(t->head !=NULL)
	{
		t->teil->next=new_zap;
		t->teil=new_zap;
		return 0;
	}
	else
	{
		t->head=new_zap;
		t->teil=new_zap;
		return 0;
	}
	return 1;
}

struct sprav_zap *sprav_poisk(struct sprav *t, char *name)
{
	if (t->head ==NULL) return NULL;
	struct sprav_zap *zap;
	zap=t->head;
	while(1)
	{
		if(strstr(zap->name, name)!=NULL || strstr(zap->number, name)!=NULL)
		{
			
			printf("%s %s\n", zap->name, zap->number);
			//return zap;
		}
		
		if(zap->next==NULL) return NULL;
		else zap=zap->next;
	} 
}

int sprav_remove(struct sprav *t, struct sprav_zap *remove_zap)
{
	if(t->head==NULL) return 1;
	struct sprav_zap *zap;
	if(t->head==remove_zap)
	{
	t->head=remove_zap->next;
	free(remove_zap->name);
	free(remove_zap->number);
	free(remove_zap);
	return 0;
	}
	else
	{
		zap=t->head;
		while(1)
		{
			if(zap->next==NULL) return 1;
			else if(zap->next==remove_zap)
			{
				zap->next=remove_zap->next;
				free(remove_zap->name);
				free(remove_zap->number);
				free(remove_zap);
				return 0;
			}
			else  zap= zap->next;
		}
	}
	return 1;
}

int sprav_list(struct sprav *t)
{
	if(t->head==NULL) return 1;
	struct sprav_zap *zap;
	zap=t->head;
	while(1)
	{
		printf("%s %s\n",zap->name, zap->number);
		if(zap->next==NULL) return 0;
		else zap=zap->next;
	}
	return 1;
}

int sprav_clear(struct sprav *t)
{
	if(t->head==NULL)
	{
		free(t);
		return 0;
	}
	struct sprav_zap *zap;
	struct sprav_zap *anon_zap;
	zap=t->head;
	while(1)
	{
		if(zap->next==NULL)
		{
			free(zap->name);
			free(zap->number);
			free(zap);
			free(t);
			return 0;
		}
		else
		{
			anon_zap=zap;
			zap=zap->next;
			free(anon_zap->name);
			free(anon_zap->number);
			free(anon_zap);
		}
	}
	return 1;
}
