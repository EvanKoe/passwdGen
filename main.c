#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *generate(int n)
{
    srand(time(NULL));
    char *tmp = malloc(n);
    for (int i = 0; i < n; ++i) {
	tmp[i] = rand() % (126 - 33) + 33;
	if (tmp[i] == 96)
	    ++tmp[i];
    }
    return (tmp);
}

void help(void)
{
    printf("This is a random password generator\n");
    printf("USAGE\n\t./pass length\n\t");
    printf("This program returns the security level ");
    printf("of the generated password (in percent)\n");
    exit (0);
}

int main(int ac, char **av)
{
    int n = 10;
    char *pswd;
    int e;

    if (ac == 2) {
	if (av[1][0] == '-' && av[1][1] == 'h')
	    help();
	else
	    n = atoi(av[1]);
    }
    e = (n * (100 / 16) > 100) ? 100 : n * (100 / 16);
    pswd = generate(n);
    printf("Your password : %s", pswd);
    exit (e);
}
