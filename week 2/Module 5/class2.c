#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int choco = n;
    int pack = n;

    for (i = 0; pack >= 4; i++)
    {
        choco += (pack / 4);
        pack = (pack / 4) + (pack % 4);
    }

    printf("%d", choco);
}