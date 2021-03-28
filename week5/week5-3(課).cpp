#include <stdio.h>
int main()
{
    char line[5][10]{"decline", "proper", "majority", "bullet", "shop"};
    for(int i=0; i<5; i++){
        printf("%s\n", line[i]);
    }
}
