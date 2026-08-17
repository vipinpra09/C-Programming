
#include <stdio.h>
// multiplication
int main() {
    int arr1[3][3]={
        {2,3,4},{5,4,7},{2,9,5}
    };
    int arr2[3][3]={
        {2,3,4},{5,4,7},{2,9,5}
    };
    //mat 1
 int arr[3][3]={0};
 for(int i = 0;i<3;i++){
     for(int j = 0;j<3;j++){
         printf("%d ",arr1[i][j]);
     }
     printf("\n");
 }
 printf("\n");
 //mat 2
 for(int i = 0;i<3;i++){
     for(int j = 0;j<3;j++){
         printf("%d ",arr2[i][j]);
     }
     printf("\n");
 }
 printf("\n");
   
 for(int i =0;i<3;i++){
     for(int j= 0;j<3;j++){
         for(int k = 0;k<3;k++){
             arr[i][j] += arr1[i][k]*arr2[k][j];
         }
     }
 }
 
 for(int i = 0;i<3;i++){
     for(int j = 0;j<3;j++){
         printf("%d ",arr[i][j]);
     }
     printf("\n");
 }
    return 0;
}
