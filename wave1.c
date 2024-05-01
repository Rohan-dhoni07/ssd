    #include<stdio.h>
    #include<limits.h>
    int main(){
    int i,j,a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},max=0;
    for( int i=0;i<3;i++){
  if(i%2!=0){
    for(j=3;j>=0;j--)
     printf("%d ",a[i][j]);}
else 
    for(int j=0;j<4;j++){
printf("%d ",a[i][j]);}   
     printf("\n");
    }
    }