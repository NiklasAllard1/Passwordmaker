#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void losenval(int langd, char *svar)
{

    const char tecken[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    for(int i = 0; i < langd; i++)
    {
        svar[i] = tecken[rand() % (sizeof(tecken) - 1)];
        
    }
    svar[langd] = '\0';
}

int main()
{
int lang;

printf("Hur långt lösenord vill du ha? (max 15)\n");
scanf("%d", &lang);

srand(time(NULL));

if (lang > 15)
{
    printf("Lösenordet är för långt, försök igen!\n");
    return 1;
}
char losenord[16];
losenval(lang, losenord);
printf("Här är ditt nya lösenord: %s\n", losenord);

return 0;
}

