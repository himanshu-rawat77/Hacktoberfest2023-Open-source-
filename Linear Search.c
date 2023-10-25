#include<stdio.h>

int LinearSearch(int a[], int z);


int main()
{
    int n;
    int arr[] = { 23, 45, 65, 34};

    printf("Enter Number to be found : ");
    scanf("%d", &n);

    LinearSearch(arr, n);

}


int LinearSearch(int a[], int z)
{
        for (int i = 0; i<4; i++)
        {
             if (a[i] == z)
                {
                   printf("Found\n");
                   return 0;
                }
    
        }
    printf("Not Found\n");
    return 1;
}