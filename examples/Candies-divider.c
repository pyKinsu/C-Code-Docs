#include <stdio.h>

int main()
{
    int candy;
    int friend;
    int leftover, got;

    printf("Enter no of candies: ");
    scanf("%d", &candy);

    printf("Enter no of friends: ");
    scanf("%d", &friend);

    got = candy / friend;
    leftover = candy % friend;

    printf("Each friend will get %d candies\n", got);
    printf("Leftover candies = %d", leftover);

    return 0;
}
