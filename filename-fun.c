
#include <stdio.h>

int main(void)
{
    char invalid[] = {0xE4, 0x00};
    char nfc[] = {0xC3, 0xA4, 0x00};
    char nfd[] = {0x61, 0xCC, 0x88, 0x00};
    FILE *fd;
    fd = fopen(nfc, "w");
    if (fd != NULL)
        {
        fclose(fd);
        }
    fd = fopen(nfd, "w");
    if (fd != NULL)
        {
        fclose(fd);
        }
    fd = fopen(invalid, "w");
    if (fd != NULL)
        {
        fclose(fd);
        }
    return 0;
}

