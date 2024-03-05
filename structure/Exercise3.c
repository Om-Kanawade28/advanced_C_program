/*3. Create a structure named Book to store book details like title, author,
 and price.
 Write a C program to input details for three books,
  find the most expensive and the lowest priced books,
   and display their information.*/
#include <stdio.h>

// Define a structure to store book details
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[3];
    int i;
    
    // Input details for three books
    for (i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    
    // Find the most expensive and lowest priced books
    int most_expensive_index = 0;
    int lowest_priced_index = 0;
    
    for (i = 1; i < 3; i++) {
        if (books[i].price > books[most_expensive_index].price) {
            most_expensive_index = i;
        }
        if (books[i].price < books[lowest_priced_index].price) {
            lowest_priced_index = i;
        }
    }
    
    // Display information for the most expensive book
    printf("\nMost expensive book:\n");
    printf("Title: %s\n", books[most_expensive_index].title);
    printf("Author: %s\n", books[most_expensive_index].author);
    printf("Price: $%.2f\n", books[most_expensive_index].price);
    
    // Display information for the lowest priced book
    printf("\nLowest priced book:\n");
    printf("Title: %s\n", books[lowest_priced_index].title);
    printf("Author: %s\n", books[lowest_priced_index].author);
    printf("Price: $%.2f\n", books[lowest_priced_index].price);
    
    return 0;
}
