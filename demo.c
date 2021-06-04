#include<stdio.h>
#include <math.h>
int functionName(); // declaration
int main(){
    // How to define function in the c language
    functionName(); //calling of function
    return 0;


}
 int functionName(){
    //function body
    // print the table in c 
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        /* code */
        int tableTotal = i*num;
        printf("%d x %d = %d",i,num,tableTotal)
        return tableTotal;
    }
    

}
