#include <stdio.h>
int main()
 {
    int n, i;  
    scanf("%d", &n);
    int arr[n];   
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int currentSum = 0;
    int maxSum = arr[0];
    for(i = 0; i < n; i++)
     {
        currentSum += arr[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
        if(currentSum < 0)
            currentSum = 0;
    }
    return 0;
}
