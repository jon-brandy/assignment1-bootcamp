// CRUD FUNCTION

void cls()
{
    system("cls");
}

void addCustomer()
{
    FILE *fp = fopen("customer.txt", "a");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    
    Customer customerInformation;
    cls();
    printf("Name (lowercase letters): ");
    scanf("[^\n]", customerInformation.customerName);
    getchar();
    printf("Age (0 - 100): ");
    scanf("%d", &customerInformation.customerAge);
    getchar();
    printf("Cause of death (max 255 letters): ");
    scanf("[^\n]", customerInformation.customerCauseofDeath);
    getchar();
    printf("Resting place (max 255 letters): ");
    scanf("[^\n]", customerInformation.customerRestingPlace);
    getchar();
    printf("Room Type (Pantai,Rooftop, Taman, Bar): ");
    scanf("[^\n]", customerInformation.room.roomTypeId);
    getchar();
    puts("");
    puts("");
    printf("Welcome to hotel del Jojo!\n");
    fwrite(&customerInformation, sizeof(Customer), 1, fp);
    fclose(fp);

}

void readData()
{
    FILE *fp = fopen("customer.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    Customer customerInformation;
    cls();
    /*
    printf("|   |   ID      |   Name    |   Age     |   Room    |\n");
    printf("|---|-----------|-----------|-----------|-----------|\n");
    */
}

