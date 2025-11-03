// // Enter the address(house no.,street,city,pin) of a person using structure and display it of 5 people// Enter the address(house no.,street,city,pin) of a person using structure and display it of 5 people



// #include <stdio.h>#include <stdio.h>

// #include <string.h>#include <string.h>



// struct address {// Forward declaration of the printAddress function

//     int houseno;

//     char street[50];struct address {

//     char city[50];    int houseno;

//     int pin;    char street[50];

// };    char city[50];

//     int pin;

// void printAddress(struct address add);};



// void main() {void main()

//     struct address add[5];{

//     int i;    struct address adds[5];

//         printf("enter the information of 1st people\n");

//     // Input information for 5 people    scanf("%d",adds[0].houseno);

//     for(i = 0; i < 5; i++) {    scanf("%s",adds[0].street);     

//         printf("\nEnter the information of person %d:\n", i+1);    scanf("%s",adds[0].city);

//         printf("House No: ");    scanf("%d",adds[0].pin);

//         scanf("%d", &add[i].houseno);    

//         printf("Street: ");    printf("the information of 2nd people is\n");

//         scanf("%s", add[i].street);         scanf("%d",adds[1].houseno);

//         printf("City: ");    scanf("%s",adds[1].street); 

//         scanf("%s", add[i].city);    scanf("%s",adds[1].city);

//         printf("PIN: ");    scanf("%d",adds[1].pin);

//         scanf("%d", &add[i].pin);    printf("the information of 3rd people is\n");

//     }    scanf("%d",adds[2].houseno);

//     scanf("%s",adds[2].street);

//     // Display information using the printAddress function    scanf("%s",adds[2].city);

//     printf("\nDisplaying all addresses:\n");    scanf("%d",adds[2].pin);

//     for(i = 0; i < 5; i++) {

//         printAddress(add[i]);    printf("the information of 4th people is\n");

//     }    scanf("%d",adds[3].houseno);

// }

//     scanf("%s",adds[3].street);

// void printAddress(struct address add) {    scanf("%s",adds[3].city);

//     printf("\nAddress Information:\n");    scanf("%d",adds[3].pin);

//     printf("House No: %d\n", add.houseno);

//     printf("Street: %s\n", add.street);

//     printf("City: %s\n", add.city);

//     printf("PIN: %d\n", add.pin);    printf("the information of 5th people is\n");

// }    scanf("%d",adds[4].houseno);
//     scanf("%s",adds[4].street);
//     scanf("%s",adds[4].city);
//     scanf("%d",adds[4].pin);
//     printaddress(adds[0]);
//     printaddress(adds[1]);
//     printaddress(adds[2]);
//     printaddress(adds[3]);
//     printaddress(adds[4]);

// }

// void printaddress(struct address add)
// {
//     printf("the adress is %d %s %s %d\n",add.houseno,add.street,add.city,add.pin);
// }
