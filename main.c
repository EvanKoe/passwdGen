#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *generate(int n)
{
    char *tmp = malloc(n + 1);
    int i = 0;

    for (i; i < n; ++i) {
	tmp[i] = rand() % (126 - 33) + 33;
	if (tmp[i] == 96)
	    ++tmp[i];
    }
    tmp[i] = '\0';
    return (tmp);
}

int help(void)
{
    printf("This is a random password generator\n");
    printf("USAGE\n\t./pass [length (int)]\n");
    printf("This program returns the security level\n");
    printf("of the generated password (in percent)\n");
    printf("You can redirect the output of this program if you\n");
    printf("want to store the generated password !\n");

    return (0);
}

int main(int ac, char **av)
{
    int length = 10;
    int security_level;

    if (ac == 2) {
	    if (av[1][0] == '-' && av[1][1] == 'h')
	        return (help());
    	else if (atoi(av[1]) >= 2)
    	    length = atoi(av[1]);
        else
            return (-1 + printf("Your password must contain at least 2 characters !\n"));
    }
    srand(time(NULL));
    security_level = (length * (100 / 16) > 100) ? 100 : length * (100 / 16);
    printf("%s", generate(length));
    return (security_level);
}
