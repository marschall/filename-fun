
#include <stdio.h>

int main(void)
{
    char invalid[] = {0xE4, 0x00};
    char nfc[] = {0xC3, 0xA4, 0x00};
    char nfd[] = {0x61, 0xCC, 0x88, 0x00};
    char *strings[] = {invalid, nfc, nfd};
    FILE *fd;
    int i;
    for (i = 0; i < 3; ++i)
        {
            fd = fopen(strings[i], "w");
            if (fd != NULL)
                {
                fclose(fd);
                }
        }
    return 0;
}

