#include<string.h>
#include<stdlib.h>
char find_bin_pattern(int number){
    
    int arr[1000]; 
    int n = 0;
    while (number >= 2){
        arr[n] = number % 2;
        number /= 2;
        n +=1;
    }
    arr[n]=number;
    int count = 0;   
    for (int i = 1; i < n; i++){
        if ((arr[i-1] == 1) && (arr[i] == 0)  && (arr[i+1] == 1))  count+=1; 
    } 
    return count;   
}