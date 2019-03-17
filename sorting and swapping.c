#include <stdio.h>
//swap function takes integer pointer as its parameters so as to swap the values
//at the original address(pass by reference concept)
void swap(int*n1,int*n2) 
{
    int x=0;
    x=*n2;
    *n2=*n1;
    *n1=x;
}

void bubblesort( int inputArray[],int num)
{
    while(1)
    {
        int i=0;
        
        int swappingdone=0; //swappingdone variable declared to show whether
                            //swapping is performed in the iteration or not
        
        
        for(i=0;i<num-1;i++) //(num-1) signifies the comparision to take place between
                             //the desired values(as num=6 but the index numbers are till 5)
        {
            if(inputArray[i]>inputArray[i+1])
            {
                swap(&inputArray[i],&inputArray[i+1]);
                swappingdone=1;
            
            }
        }
       
        if(swappingdone==0) //this shows that futher the elements of the array
                           //cannot be swapped hence the operation is stopped
        {
            break;
        }
    }    
    
}
//display fucntion to display the inputArray
void display(int inputArray[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d ", inputArray[i]);
    }
    printf("\n");
}

int main()
{
    int inputArray[]={-1,20,40,80,-8,-9};
    int num=sizeof inputArray/sizeof inputArray[0];
    
    printf("Input array:\n");
    display(inputArray,num);

    bubblesort(inputArray,num);
    
    printf("Sorted array:\n");
    display(inputArray,num);
    
    return 0;
}