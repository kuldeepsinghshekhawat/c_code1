#include<stdio.h>
int main()
{   //while(1)=continue read
    char input;
    float inchestofoot=.083333;
    float kmstomiles=0.621371;
    float cmstoinches=0.393701;
    float poundtokgs=0.453992;
    float inchestometers=0.0254;
    float first,second;
    while(1){
        printf("Enter the input char 1.kmstomiles\n 2.inchestofoot\n 3.cmstoinches\n 4.poundtokgs\n 5.inchestometers\n");
        scanf("%c",&input);
        
            
            
          //printf("Enter the quantity of Second:");
            //scanf("%f",&second);
        switch(input)
        {
            case 'q':
            printf("Quit the program...");
            goto end;
            break;
            case '1':
            printf("Enter the quantity of first:");
            scanf("%f",&first);
            second=first*inchestofoot;
            printf("%f kms is equal to miles %f\n",first,second);
            break;
            
            case '2':
            printf("Enter the quantity of first:");
            scanf("%f",&first);
            second=first* kmstomiles;
            printf("%f inches is equal to foot %f\n",first,second);
            break;
            
            case '3':
            printf("Enter the quantity of first:");
            scanf("%f",&first);
            second=first*cmstoinches;
            printf("%f cms is equal to inches %f\n",first,second);
            break;
            
            case '4':
            printf("Enter the quantity of first:");
            scanf("%f",&first);
            second=first*poundtokgs;
            printf("%f pounds is equal tokgs  %f\n",first,second);
            break;
            
            case '5':
            printf("Enter the quantity of first:");
            scanf("%f",&first);
            first*inchestometers;
            printf("%f inches is equal to meters %f\n",first,second);
            break;
            
            default:
            //printf("This is ");
            break;
        }

    }end:
        return 0;
}