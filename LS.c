// Linear Search.
# include<stdio.h>

int main()
{
    int i,Key,a[20],flag = 0;
    for(i=0 ; i<7 ; i++){
        scanf("%d",&a[i]);
    }
      printf("Enter the Key to found \n");
       scanf("%d",&Key);
       for(i=0;i<7;i++){
            if(Key == a[i]){
              flag = 1;
              break;
        }
       }
        if(flag == 1){
            printf("Key is found");
        }
        else {
            printf("key is not found");
        }

    
    return 0;
}