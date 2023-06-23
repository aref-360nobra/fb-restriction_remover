#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

    bool res_de;
    system("clear");
    printf("\nHave you any restriction or are you blocked from your account? If there is enter 1 either 0.\n");
    scanf("%d", &res_de);

    if (res_de==1)
    {
        printf("ok, please wait for a while...\n");
        sleep(1);
        printf("Searching on Facebook...\n");
        sleep(2);
        printf("Restriction detected on Facebook. Processing to resolve it. Please be patient... \n");
        sleep(2);
        printf("Sending direct mail to Mark Zuckerberg\n");
        sleep(3);
        printf("Mail sent and ...\n");
        sleep(1);
        printf("Action taken\n");
        sleep(1);
        printf("Processing pending... \n");
        sleep(1);
        for (int i = 0; i <=100; i++)
        {
            printf("Operation Completed - %d%%\n",i);
            sleep(1);
        }
        sleep(1);
        printf("Operation Successful! There is no restriction or blockage on your Facebook account right now.\nBest of luck.\n");
        sleep(1);
        printf("To resolve any Restriction run this code again.\n");
        
    }else{
        printf("As there are no restriction on any social media, then why have you call me?\nSHUTT UP!!!");
    }
    
    return 0;
}
