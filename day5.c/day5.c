#include<stdio.h>
#include<stdlib.h>
int findFrequency(int arr[],int size,int traget){
    int count=0;
        for(int i=0;i<size;i++){
        if(arr[i]==traget){
            count++;
        }
    }
    return count;
}
int main(){
    int array[]={1,2,3,4,2,2,5};
    int size=sizeof(array)/sizeof(array[0]);
    int traget=2;
    int frequency=findFrequency(array,size,traget);
    printf("The frequency of %d in the array is:%d\n",traget,frequency);  
    return 0;
}


