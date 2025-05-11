#include<stdio.h>
struct profile {
    char Name[60];
    short Age;
    char Job[50];
    short height,D,M,Y;
};
void main() {
    struct profile P;
    printf("What's your name?\nName:");
    scanf("%s",&P.Name);
    printf("What's your age?\nAge:");
    scanf("%u",&P.Age);
    printf("What's your Job?\nJob:");
    scanf("%s",&P.Job);
    printf("What's your height?(in cm)\nHeight:");
    scanf("%u",&P.height);
    printf("What's your date of birth?\nDay:");
    scanf("%u",&P.D);
    printf("Month:");
    scanf("%u",&P.M);
    printf("Year:");
    scanf("%u",&P.Y);
    printf("Profile:\nName:%s",P.Name);
    printf("\nAge:%u\n",P.Age);
    printf("Height:%u\n",P.height);
    printf("Date of birth:%u/%u/%u\n",P.D,P.M,P.Y);
    printf("Job:%s\n",P.Job);
}
