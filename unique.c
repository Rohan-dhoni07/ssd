#include<stdio.h>
//#include<stdbool.h>
void main(){
    int a[7]={1,3,6,1,1,2,3};
    for(int i=0;i<=6;i++){
     //bool flag = false;
int b=0;
    for( int j=i+1;j<=6;j++){
        if(a[i]==a[j]){
            b =1;
        }
    }
    if( b == 0){
        printf("%d",a[i]);
        break;
    }
    }
    }