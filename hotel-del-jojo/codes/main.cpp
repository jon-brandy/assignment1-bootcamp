#include <stdio.h>
#include "customer.h"
#include <stdlib.h>
#include <cstdio>

struct Room
{
    char roomTypeId[11];
    char roomTypeName[11];
    char roomTypePrice[11];
};

struct Customer
{
    char customerName[255];
    int customerAge;
    char customerCauseofDeath[255];
    char customerRestingPlace[255];
    char customerDiedYear[20];
    struct Room room;
};


int main(void)
{
    system("Color 0A");
    int option;
    while(option != 0)
    {
        cls();
        printf("Hotel del Jojo");
        printf("1. Add new customer\n");
        printf("2. Read data\n");
        printf("3. Update data\n");
        printf("4. Remove data\n");
        printf("5. Exit\n");
        puts("");
        puts("");
        printf("Choice [1-5] >> ");
        scanf("%d", &option);
        getchar();
        cls();

        switch(option)
        {
            case 1:
                addCustomer();
                break;
            /*
            case 2:
                readCustomer();
                break;
            case 3:
                updateCustomer();
                break;
            case 4:
                removeCustomer();
                break;
            */
            case 5:
                printf(R"EOF(
                

 _   _       _       _       _      _     ___       _       
| | | |     | |     | |     | |    | |   |_  |     (_)      
| |_| | ___ | |_ ___| |   __| | ___| |     | | ___  _  ___  
|  _  |/ _ \| __/ _ \ |  / _` |/ _ \ |     | |/ _ \| |/ _ \ 
| | | | (_) | ||  __/ | | (_| |  __/ | /\__/ / (_) | | (_) |
\_| |_/\___/ \__\___|_|  \__,_|\___|_| \____/ \___/| |\___/ 
                                                  _/ |      
                                                 |__/       
               _               _                  _         
              | |             (_)                | |        
  ___ ___   __| | _____      ___ ______ _ _ __ __| |        
 / __/ _ \ / _` |/ _ \ \ /\ / / |_  / _` | '__/ _` |        
| (_| (_) | (_| |  __/\ V  V /| |/ / (_| | | | (_| |        
 \___\___/ \__,_|\___| \_/\_/ |_/___\__,_|_|  \__,_|        
                                                            

                )EOF");
                break;
        }
    }

    return 0;
}


