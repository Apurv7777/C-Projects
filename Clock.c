#include<stdio.h>
#include<windows.h>
#include<process.h>
#define CLEARSCREEN system("cls")

int main() {
    int h,m,s;
    int d=1000;   //we add a delay  of 1000 ms and we will use it in the funciton sleep
    printf("Set time : \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60){
        printf("Goli beta , masti nahi....");
        exit(0);
    }

    while(1){       //This  is an infinite loop
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }

    printf("\nClock : ");
    printf("\n %02d:%02d:%02d",h,m,s);   //To write the  time in the following format
    Sleep(d);//the function Sleep slows down the while loop and make it more like a real clock
    system("cls");//this clears the screen
    }
    return 0;
}
