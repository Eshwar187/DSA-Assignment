#include<stdio.h>
#include <string.h>

struct Type{
    char type_of_friends[20];
    char name_of_common_friends[50];
    int places_visited_together;
};
struct Friends{
    char name[20];
    char pet_name[20];
    char phn_no[20];
    struct Type fnd;
};
int main(){
    int i,n ;
    printf("Enter the number of friends to add:");
    scanf("%d",&n);
    struct Friends fnds[n];
    for(i=0;i<n;i++){
        //Name
        printf("Enter Friend Name:");
        scanf("%s",&fnds[i].name);

        //Pet name
        printf("Enter Pet Name:");
        scanf("%s",&fnds[i].pet_name);

        //Phone number
        printf("Enter Phone Number:");
        scanf("%s",&fnds[i].phn_no);

        //Types of friends(School, College or Area friend)
        printf("Enter Type of friend:");
        scanf("%s",&fnds[i].fnd.type_of_friends);

        //Name of common friends
        printf("Enter Name. of Common Friends:");
        scanf("%s",&fnds[i].fnd.name_of_common_friends);

        //Places visited together
        printf("Enter No. of Places Visited Together:");
        scanf("%d",&fnds[i].fnd.places_visited_together);
        printf("\n");

    }
    // Printing Name
    printf("S.No.\tName\t\tPet Name\tPhone Number\tType of Friend\tName of common friends\tNo. of places visited together\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%d\n", i + 1, fnds[i].name, fnds[i].pet_name, fnds[i].phn_no, fnds[i].fnd.type_of_friends, fnds[i].fnd.name_of_common_friends, fnds[i].fnd.places_visited_together);
    }
    return 0;
}



