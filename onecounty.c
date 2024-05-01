    #include<stdio.h>
    #include<limits.h>
    int main(){
    int i,j,a[3][4]={1,0,1,1,0,1,0,1,1,0,0,1},max=0;
    for( int i=0;i<3;i++){
        int count=0;
    for(int j=0;j<4;j++){
    if(a[i][j]==1){
    count++;
    }
    }
    if(max<count)
    max=count;
    }
    printf("%d",max);
    return 0;
    }