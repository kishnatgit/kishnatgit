#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct items
{
    char items[30];
    float price;
    int qnt;
};

struct orders
{
    char customer[30];
    char date[20];
    int numberofitems;
    struct items itm[50];
};

void GenerateBillHeader(char name[30], char date[20])
{
    printf("\n\n");
    printf("\t    KK. RESTAURANT");
    printf("\n\t   -----------------");
    printf("\nDate: %s", date);
    printf("\nInvoice To: %s", name);
    printf("\n------------------------------------------");
    printf("\nItems\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n------------------------------------------");
    printf("\n\n");
}

void GenerateBillBody(char item[30], int qnt, float price)
{
    printf("%s\t\t", item);
    printf("%d\t\t", qnt);
    printf("%.2f\t\t", qnt * price);
    printf("\n");
}

void GenerateBillFooter(float total)
{
    printf("\n");
    float dis = (0.1 * total);
    float net_total = total - dis;
    float CGST = 0.09 * net_total, grand_total = net_total + (2 * CGST);
    printf("------------------------------------------");
    printf("\nSub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%s\t\t\t%.2f", "%", dis);
    printf("\n\t\t\t\t----------");
    printf("\nNet Total\t\t\t%.2f", net_total);
    printf("\nCGST @9%s\t\t\t%.2f", "%", CGST);
    printf("\nSGST @9%s\t\t\t%.2f", "%", CGST);
    printf("\n------------------------------------------");
    printf("\nGrand Total\t\t\t%.2f", grand_total);
    printf("\n------------------------------------------");
}

void main()
{
    struct orders ord;
    struct orders order;
    int choice, total = 0;
    char name[30];
    time_t t;
    FILE *fp;
    char savebill;
    char repeat = 'y';
    while (repeat == 'y')
    {
        printf("\n\n\t============ KK. RESTAURANT ============");
        printf("\n\nPlease Select Your Preferred Operation: ");
        printf("\n\n1. Generate Invoice");
        printf("\n2. Show All Invoices");
        printf("\n3. Search Invoices\n");
        printf("4. Exit\n\n\n");
        printf("Your Choice: ");
        scanf("%d", &choice);
        printf("\n\n\n");
        fgetc(stdin);
        switch (choice)
        {
        case 1:
            system("CLS");
            printf("Please Enter The Name of The Customer: ");
            fgets(ord.customer, 30, stdin);
            ord.customer[strlen(ord.customer) - 1] = 0;
            strcpy(ord.date, __DATE__);
            printf("Enter The Number Of Items: ");
            scanf("%d", &ord.numberofitems);
            fgetc(stdin);
            for (int i = 0; i < ord.numberofitems; i++)
            {
                printf("Enter The Item %d: ", i + 1);
                fgets(ord.itm[i].items, 20, stdin);
                printf("Quantity: ");
                scanf("%d", &ord.itm[i].qnt);
                printf("Price: ");
                scanf("%f", &ord.itm[i].price);
                fgetc(stdin);
                total += ord.itm[i].qnt * ord.itm[i].price;
            }
            GenerateBillHeader(ord.customer, ord.date);
            for (int i = 0; i < ord.numberofitems; i++)
            {
                GenerateBillBody(ord.itm[i].items, ord.itm[i].qnt, ord.itm[i].price);
            }
            GenerateBillFooter(total);
            printf("\nDo You Want to Save This Invoice [Y/N]:\t");
            scanf("%s", &savebill);
            if (savebill == 'y')
            {
                fp = fopen("RestaurantBill.txt", "ab");
                fwrite(&ord, sizeof(struct orders), 1, fp);
                if (fwrite != 0)
                    printf("\nSuccessfully Saved");
                else
                    printf("\nError Saving");
                fclose(fp);
                printf("\n\n\n");
            }
            fflush(stdin);
            break;

        case 2:
            system("CLS");
            fp = fopen("RestaurantBill.txt", "r");
            printf("\n\t***** Your Previous Invoices *****\n");
            printf("%s", fread(&order, sizeof(struct orders), 1, fp));
            {
                float tot = 0;
                GenerateBillHeader(order.customer, order.date);
                for (int i = 0; i < order.numberofitems; i++)
                {
                    GenerateBillBody(order.itm[i].items, order.itm[i].qnt, order.itm[i].price);
                    tot += order.itm[i].qnt * order.itm[i].price;
                }
                GenerateBillFooter(tot);
            }
            fclose(fp);
            printf("\n\n\n");
            break;

        case 3:
            system("CLS");
            printf("Enter name of the Customer: ");
            fgets(name, 30, stdin);
            name[strlen(name) - 1] = 0;
            fp = fopen("RestaurantBill.txt", "r");
            fread(&order, sizeof(struct orders), 1, fp);
            {
                float tot = 0;
                if (!strcmp(order.customer, name))
                {
                    GenerateBillHeader(order.customer, order.date);
                    for (int i = 0; i < order.numberofitems; i++)
                    {
                        GenerateBillBody(order.itm[i].items, order.itm[i].qnt, order.itm[i].price);
                        tot += order.itm[i].qnt * order.itm[i].price;
                    }
                    GenerateBillFooter(tot);
                }
                else
                    printf("Sorry No Invoice Found!");
            }
            fclose(fp);
            printf("\n\n\n");
            break;

        case 4:
            system("cls");
            printf("\n\n\n");
            printf("----Exitting From the Program!!----");
            printf("\n\n\n");
            // exit(0);
            break;

        default:
            printf("Sorry Invalid Choice!!");
        }
        printf("\nDo You Want to Perform Operation Again:[y/n] ");
        scanf("%c", &repeat);
        if (repeat != 'y')
            break;
    }
    printf("\n\n\n");
    printf("----Exitting From the Program!!----");
    printf("\n\n\n");
}