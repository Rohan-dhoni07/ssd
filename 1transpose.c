    #include<stdio.h>
    void main(){
    int a[3][3]={13,20,35,36,76,69,89,67,41},i,j,n,p,k;
    for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
    printf(" %d ",a[i][j]);
    }
    printf("\n");
    }
    printf("The transpose of above matrix\n");
    for(i=0;i<=2;i++){
    for(j=0;j<=i;j++){
    int temp;
    temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
    }
    }
    for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
    printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    }