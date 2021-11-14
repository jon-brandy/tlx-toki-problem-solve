#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    int arr[225], highest, lowest;
    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &arr[i]);
        highest = arr[1];
        lowest = arr[1];
        for(int i = 1; i <= T; i++)
        {
            if(arr[i] >= highest)
            {
                highest = arr[i];
            }
            else if(arr[i] <= lowest)
            {
                lowest = arr[i];
            }
        }
    }
    printf("%d %d\n", highest, lowest);
    

    return 0;
}
