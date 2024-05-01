#include<stdio.h>                           
    int main(){                                          
    int r,c;                            
    printf("Enter no of rows and column");
    scanf("%d %d",&r,&c);   
    printf("Enter the elements of first matrix");
    int a[r][c],b[r][c];    
    for( int i=0;i<r;i++)   {
    for(int j=0;j<c;j++)    {
    scanf("%d",&a[i][j]);
   b[j][i]= a[i][j];    
    }
    }
    printf("\n The Entered matrix is\n");
    for( int i=0;i<r;i++)   {
    for(int j=0;j<c;j++)    {
      printf(" %d",a[i][j]);}
      printf("\n");
    }printf("\n The transpose matrix is\n");  
        for( int i=0;i<c;i++){
        for(int j=0;j<r;j++){
        scanf("%d ",b[i][j]);
        }
        }
for( int i=0;i<r;i++)   {
    for(int j=0;j<c;j++)    {
      int temp =a[i][j];
      




    }