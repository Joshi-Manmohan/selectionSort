#include<stdio.h>
void printArray(int*A,int n){
for(int i = 0;i<n;i++)
{
    printf("%d\n",A[i]);
}
}
void selectionSort(int*A, int n){
int indexofMin , temp;
printf("running selectionSort\n");
for(int i=0;i<n-1;i++)
{
    indexofMin =i;
    for(int j=i+1;j<n;j++)
    {
        if(A[j]<A[indexofMin]){
            if(A[j]<A[indexofMin]){
             indexofMin= j;
            }
        }
    //swap=A[i] & A[index ofMin]
    temp=A[i];
    A[i]=A[indexofMin];
    A[indexofMin]=temp;
    }

}
}
int main(){
int A[]={3,5,2,13,12};
int n=5;
printArray(A, n);
selectionSort(A, n);
printArray(A, n);
return 0;
}

