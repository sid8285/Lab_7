#include <stdio.h>
#include <stdlib.h>


void bubbleSort(int Arr[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++) {

                //declaring a global variable to count the amount of swaps done in that specific iteration
                int count = 0;

                //used to count the passes done
                int num = 9;
                
	    //inner loop used to go through the array index for comparison purposes
        for (j = 0; j < n - i - 1; j++) {
		//the comparison process; seeing if the space before is greater than the space after and swapping the value if so
            if (Arr[j] > Arr[j + 1]) {
                int temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;

                //counting every time a variable is swapped
                count = count + 1;
                
                
            }

            //decrementing through the amount of swaps done
            num = num - 1;

        }
                
            //the print statement
            printf("The amount of swaps done in iteration #%d is: %d swaps.\n", num, count);

    }
}


int main(){

    int Arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    bubbleSort(Arr, n);

}