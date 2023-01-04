#include <stdio.h>

  int shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
      
        for (int j = gap; j < n; j += 1)
        {
          
            int temp = arr[j];
  
        
            int i;            
            for (i = j; i >= gap && arr[i - gap] > temp; i -= gap)
                arr[i] = arr[i- gap];
              
    
            arr[i]=temp;
        }
    }
    return 0;
}
  
int main()
{
     int a[20],n,i;
     printf("Enter the number of elements\n");
     scanf("%d",&n);
     printf("Elements is: \n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     shellSort(a,n);
     for(i=0;i<n;i++)
     {
        printf("%d\t",a[i]);
     }
    return 0;
}
