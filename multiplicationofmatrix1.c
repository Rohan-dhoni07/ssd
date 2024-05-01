#include<stdio.h>
int main(){
int r,c,x,y; 
    printf("Enter no of rows and column of first and second matrix respectively");
    scanf("%d %d %d",&r,&c,&y);
    printf("Enter the elements of first matrix");
    int a[r][c],b[c][y];
    for( int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&a[i][j]);
            }
            }
    printf("\n");
    printf("Enter the elements of second matrix");
    for( int i=0;i<c;i++){
    for(int j=0;j<y;j++){
    scanf("%d",&b[i][j]);
            }
            }
            int res [r][y];
 for( int i=0;i<r;i++){
for(int j=0;j<y;j++){
    res[i][j]=0;
    for(int k=0;k<c;k++){
res[i][j]+= a[i][k]*b[k][j];
}
}
printf("\n");
 }
for( int i=0;i<r;i++){
for(int j=0;j<y;j++){
printf("%d ",res[i][j]);
}
printf("\n");}
return 0;
}