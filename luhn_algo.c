#include <stdio.h>
#include <string.h>
int main(void){
    printf("Enter the Card Number: ");
    char crdNum[20];
    scanf("%s", crdNum);
    int nums[16] = {0};
    for(int i=0; i<16; i++){
        if(i%2==1){
            nums[i] = (crdNum[i] - '0');
        }
        else{
            nums[i] = (crdNum[i] - '0') * 2;
            for (;;) {
                if(nums[i] > 9){
                char t[3];
                sprintf(t, "%d", nums[i]);
                nums[i] = (t[0] - '0') + (t[1] - '0');
                }
                else{
                    break;
                }
            }
        }
    }
    int ttc = 0;
    for(int k = 0; k < 16; k++){
        ttc = ttc+nums[k];
    }
    if(ttc%10==0){
        printf("valid");
    }else{
        printf("invalid");
    }
}
