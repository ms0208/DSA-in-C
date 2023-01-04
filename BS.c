// Binary Search
# include<stdio.h>

int BinarySearch(int a[],int n, int data) {
    int l=0 , r = n-1,mid;
    while(l<=r){
          mid = (l+r)/2;
        if(data == a[mid]){
            return mid;
        }
        else if(data < a[mid]){
            r = mid -1;
        }
        else {
            l = mid + 1;
        }
    } if (l>r){
       return -1 ; 
    }
    }
int main() {
   int i , Key , a[20] ;
   for(i=0 ; i< 7; i++){
      scanf("%d",&a[i]);
   }

   printf("Enter the key to found\n");
   scanf("%d",&Key);
   printf("Key is found %d",BinarySearch(a,7,Key));
   return 0;
   
}
