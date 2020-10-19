#include <stdio.h>

int main(){

    enum company {AMAZON,FLIPKART,IBM,COUSERA = 10 ,DELL};
    enum company Top = AMAZON;
    enum company LAST = DELL;
    printf("First Company %d\n" ,Top);
    printf("Last Company %d\n" ,LAST);
    return 0 ;

}