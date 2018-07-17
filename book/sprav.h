#include <stdio.h>
#include <malloc.h>

struct sprav_zap
{
	char *name;
	char *number;
	struct sprav_zap *next;
};

struct sprav
{
	struct sprav_zap *head;
	struct sprav_zap *teil;
}; 

struct sprav *sprav_start();
int sprav_add(struct sprav*, char*, char*);
struct sprav_zap *sprav_poisk(struct sprav*, char*);
int sprav_remove(struct sprav*, struct sprav_zap*);
int sprav_list(struct sprav*);
int sprav_clear(struct sprav*);
