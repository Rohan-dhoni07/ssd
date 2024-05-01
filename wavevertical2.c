    #include<stdio.h>
    #include<limits.h>
    int main(){
    int i,j,a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},max=0;
    for( int i=0;i<3;i++){
    for(j=0;j<=3;j++){
    if(j%2==0){
    int k=2;
    printf("%d ",a[k][j]);
    k--;
    }
    else {
    for(int j=0;j<4;j++){
    printf("%d ",a[i][j]);}   
    }
    }
    printf("\n");
    }
    }