    #include<stdio.h>
    #include<limits.h>
    int main(){
    int r,c,b,temp,x;
    printf("Enter no of rows and column");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of first matrix");
    int a[r][c];
    for( int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&a[i][j]);
    }
    }
    printf("\n");
    // printf("Enter the elements of second matrix");
    // for( int i=0;i<r;i++){
    // for(int j=0;j<c;j++){
    // scanf("%d",&b[i][j]);
    // }}
    for( int i=0;i<r;i++){
    int p =0;
    for(int j=0;j<c;j++){
        b=p;
    p=p+a[i][j];
    }
    if(p>b){
  temp=p;
  x=i+1;
    }
    }
printf("The highest sum of element is %d in %dth row",temp,x);
    return 0;
    }