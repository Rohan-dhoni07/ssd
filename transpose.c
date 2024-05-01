    #include<stdio.h>
    void main(){
    int a[3][4]={13,20,35,36,76,69,89,67,41,45,60,45,79},i,j,n,p,k,b[3][4];
    for(i=0;i<=2;i++){
    for(j=0;j<=3;j++){
    printf(" %d ",a[i][j]);
    b[i][j]=a[j][i];
    }
    printf("\n");
    }
    printf("The transpose of above matrix\n");
    for(i=0;i<=3;i++){
    for(j=0;j<=2;j++){
    printf(" %d ",b[i][j]);
    }
    printf("\n");
    }
    }