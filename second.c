#include<stdio.h>
#include <string.h>
struct Product{
    char name[200];
    char ID[200];
    float price;
};
int main(){
    int i , n;
    printf("Enter the number of products: ");
    scanf("%d",&n);
    struct Product pdt[n];


    for(i=0;i<n;i++){

        printf("Enter details for product %d\n",i+1);

        //Product Name
        printf("Product Name:");
        scanf("%s",&pdt[i].name);

        //Product ID
        printf("Product ID: ");
        scanf("%s",&pdt[i].ID);

        //Product Price
        printf("Price:");
        scanf("%f",&pdt[i].price);
        
        printf("\n");
    }

    printf("Product Details:\n");

    for(i=0;i<n;i++){
        printf("Product Name:%s , Product ID:%s , Price:%.2f\n",pdt[i].name,pdt[i].ID,pdt[i].price);
    }
    float totalCost = 0;
    float maxPrice = pdt[0].price;
    float minPrice = pdt[0].price;
    int maxIndex = 0;
    int minIndex = 0;
//For max and min 
    for (int i = 1; i < n; i++) {
        totalCost += pdt[i].price;
        if (pdt[i].price > maxPrice) {
            maxPrice = pdt[i].price;
            maxIndex = i;
        }
        if (pdt[i].price < minPrice) {
            minPrice = pdt[i].price;
            minIndex = i;
        }
    }
//Calculate total cost
    totalCost += pdt[0].price;

    printf("\nMost Expensive Product: %s, Product ID: %s, Price: %.2f\n", pdt[maxIndex].name, pdt[maxIndex].ID, pdt[maxIndex].price);
    printf("Least Expensive Product: %s, Product ID: %s, Price: %.2f\n", pdt[minIndex].name, pdt[minIndex].ID, pdt[minIndex].price);
    printf("\nTotal Cost of All Products: %.2f\n", totalCost);

    return 0;
}