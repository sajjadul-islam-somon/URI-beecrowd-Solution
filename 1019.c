#include <stdio.h>

int main()
{
    int seconds;
    scanf("%d", &seconds);
    
    int hours = seconds/3600;                       // declaring hours [I didn't declare it in the 1st line]
    seconds = seconds - (hours * 3600);
    
    int minutes = seconds/60;                       // declaring minutes [I didn't declare it in the 1st line]
    seconds = seconds - (minutes * 60);
    
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}

