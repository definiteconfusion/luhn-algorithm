#include <stdio.h>
#include <string.h>
int main(void){
    // Gets the card number from the user
    printf("Enter the Card Number: ");
    // Creates a char array of size 20
    char crdNum[20];
    // Scans the card number from the user and stores it in the crdNum array
    scanf("%s", crdNum);
    // Creates an integer array of size 16 and initializes all the elements to 0
    int nums[16] = {0};

    for(int i=0; i<16; i++){
        // Checks if the index is odd
        if(i%2==1){
            // Stores the integer value of the card number in the nums array
            nums[i] = (crdNum[i] - '0');
        }
        // Checks if the index is even
        else{
            // Stores the integer value of the card number in the nums array
            nums[i] = (crdNum[i] - '0') * 2;
            for (;;) {
                // Checks if the number is greater than 9
                if(nums[i] > 9){
                // Converts the number to a string
                char t[3];
                sprintf(t, "%d", nums[i]);
                // Adds the two digits of the number
                nums[i] = (t[0] - '0') + (t[1] - '0');
                }
                else{
                    break;
                }
            }
        }
    }
    // Initializes the total to 0
    int ttc = 0;
    // Adds all the elements of the nums array
    for(int k = 0; k < 16; k++){
        // Adds the elements of the nums array
        ttc = ttc+nums[k];
    }
    // Checks if the total is divisible by 10
    if(ttc%10==0){
        printf("valid");
    }else{
        printf("invalid");
    }
}
