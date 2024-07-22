// ..................
// All in One Program : Function based 
// 1. Calculator(+,*,-,/,%)
// 2. Interest (CI,SI,P,L, P%, L%)
// 3. Measurement
// 4. Shapes 
// 5. Exit / Restart / Stop 
// ....................

#include<conio.h>
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
void run()
{
    int ch,chh, decision;

    printf("\n\n------------------------------------------------------------------------------------------------------\n");
    printf("                                              Unit World\n");
    printf("------------------------------------------------------------------------------------------------------\n");
    printf("1. Calculator \n2. Interest \n3. Measurement \n4. Shapes \n5. Exit / Restart / Stop ");
    printf("\n---------------------------- \n"); 
    printf("Enter your choice..?\n");
    printf ("(;_;) --> ");
    scanf("%d",&ch);

    switch (ch)
    {
        // Calculator
        case 1:
        {
          Calc();
          // One();
          break;
        }

        // Interest 
         case 2: 
         {
            

         }
            default:
            ReStart();
        }
    }


//   child Case restart 
            // void ChildReStart()
            //     {
            //     int  ch=0;
            //         printf("------------------------\n");
            //         printf("Wrong input... \n");
            //         printf("Do you want to Continue..?(1/0) \n");
            //         scanf("%d",&ch);
            //         if(ch==1){
            //             case1();
            //         }
            //         if(ch==0){
            //             printf("------------------------\n");
            //             printf("Thanx for your time\n");
            //             printf("------------------------\n");
            //             // exit();
            //         }
            //     }


// Parent Case RESTART 
    void ReStart()
    {
       int  ch=0;
        printf("\n------------------------\n");
        // printf("Wrong input... \n");
        printf("Do you want to Continue..?(1/0) \n");
        scanf("%d",&ch);
        if(ch==1){
            run();
        }
        if(ch==0){
            printf("------------------------\n");
            printf("Thanx for your time\n");
            printf("------------------------\n");
            // exit();
        }
    }





// CASE 1 ASK 

 void One()
    {
      
      
       int  ch=0;
        printf("\n------------------------\n");
        // printf("Wrong input... \n");
        printf("Do you want to Continue..?(1/0) \n");
        scanf("%d",&ch);
        if(ch==1){
            Calc();
        }
        if(ch==0){
            printf("------------------------\n");
            printf("Thanx for your time\n");
            printf("------------------------\n");
            // exit();
        }
    }











          void Calc()
          {
 
                    int ch=0;
                    printf("\n\n----------------------------------\n");
                    printf("Welcome in our calculator word\n");
                    printf("----------------------------------\n");
                    printf("Our Service :\n");
                    printf("--------------\n");
                    printf("1. Add               2. Minus \n3. Multiply          4. Divide\n5. Modulus           6. Square\n7. Cube              8. Root\n9. Temperature      10. Trignometric \n11. Exit()");
                    printf("\n------------------------------- \n"); 
                    printf("\nPlease enter your choice....\n");
                    printf ("--> ");
                    scanf("%d",&ch);
                    switch (ch)
                    {
                        // Add 
                        case 1 :
                        {
                            int a,b;
                            printf ("....Addition....\n");
                            printf("Enter 1st number : ");
                            scanf("%d", &a);
                            printf("Enter 2nd number : ");
                            scanf("%d", &b);
                            printf("Answer : ->  %d",(a+b));
                            One();
                            break;
                            
                        }

                        // Minus 
                        case 2 :
                        {
                            int a,b,s;
                            printf ("....Minus....\n");
                            printf("Enter 1st number : ");
                            scanf("%d", &a);
                            printf("Enter 2nd number : ");
                            scanf("%d", &b);
                            printf("Answer : -> %d",(a-b));
                              One();
                            break;
                        }

                        // Multiply
                        case 3 :
                        {
                            printf ("....Multiply....\n");
                            int a,b;
                            printf("Enter 1st number : ");
                            scanf("%d", &a);
                            printf("Enter 2nd number : ");
                            scanf("%d", &b);
                            printf("Answer : -> %d",(a*b));
                              One();
                            break;
                        }
                        // Divide 
                        case 4:
                        {
                            printf ("....Divide....\n");
                            int a,b,s;
                            printf("Enter 1st number : ");
                            scanf("%d", &a);
                            printf("Enter 2nd number : ");
                            scanf("%d", &b);
                            printf("Answer : -> %d",(a/b));
                             One();
                            break;
                        }

                        // Modulus 
                        case 5:
                        {
                            printf ("....Modulus....\n");
                            int a,b;
                            printf("Enter 1st number : ");
                            scanf("%d", &a);
                            printf("Enter 2nd number : ");
                            scanf("%d", &b);
                            printf("Answer : -> %d",(a%b));
                              One();
                            break;
                        }

                        // Square 
                        case 6:{
                            printf ("....Square....\n");
                            int a;
                            printf("Enter a number : ");
                            scanf("%d", &a);
                            printf("Answer : -> %d",(a*a));
                              One();
                            break;
                        }

                        // Cube 
                        case 7:{
                            printf ("....Cube....\n");
                            int a;
                            printf("Enter a number : ");
                            scanf("%d", &a);
                            printf("Answer : -> %d",(a*a*a));
                              One();
                            break;
                        }
  
                        // root 
                        case 8:
                        { 
 
                            ch=0;
                            int a;
                            
                            printf ("....Root.... \n");
                            printf("1. Square root \n2. Cube root");
                            printf("\nPlease enter yv     ou choice....\n");
                            scanf("%d", &ch);
                            if(ch==1){
                                // square root 
                                printf("Enter the number : \n");
                                scanf("%d",&a);
                                printf("Answer --> %d", sqrt(a)); 
                                  One();
                                // restart option
                            }
                            else
                            if( ch==2){
                                // Cube root 
                                printf("Enter the number : \n");
                                scanf("%d",&a);
                                printf("Answer --> %d", cbrt(a)); 
                                  One();
                                // restart option
                            }
                            else
                            {
                              // retry option 
                              //  .........
                                One();

                                }
                                

                        }


                        // Temp. 
                        case 9:
                            {
                                ch=0;
                                float f,c;
                                
                                printf ("....Temperature.... \n");
                                printf("1. °F to °C \n2. °C to °F");
                                printf("\nPlease enter you choice....");
                                scanf("%d", &ch);
                                if(ch==1){
                                    // F to C  
                                    printf("Enter the Fahrenheit : ");
                                    scanf("%f",&f);
                                    printf("Answer --> %f°C", (((f - 32) * 5 / 9))); 
                                    // retry option
                                      One();
                                }
                                else
                                if( ch==2){
                                    // C to F 
                                    printf("Enter the number : ");
                                    scanf("%f",&c);
                                    printf("Answer --> %f°F", (((c*9)/5)+32)); 
                                    // retry option
                                      One();
                                }
                                else
                                {
                                // retry option 
                                //  .........
                                  One();

                                    }
                                    
                        }

                        // Trignometric 
                        case 10 :
                        {
                                ch=0;
                                printf ("....Trignometric.... \n");
                                printf("1. Normal Trigno \n2. Inverse Trigno");
                                printf("\nPlease enter you choice....");
                                scanf("%d", &ch);
                                if(ch==1){
                                    //Normal Trig
                                    ch=0;

                                  
                                        float d, r;  
                                        const float PI = 3.14159;  
                                        r = d * (PI / 180.0);  

                                        printf("1. sin               2. cos \n3. tan          4. cot\n5. sec           6. cosec\n7. Exit() \n");
                                        printf("Please Enter your choice \n");
                                        printf("--> ");
                                        scanf("%d",&ch);

                                        switch (ch)
                                        {

                                            case 1: {

                                                    printf("Enter angle in degree\n");  
                                                    scanf("%f", &d);  
                                                    printf("Answer --> Sin(%f) = %f\n", d, sin(r));
                                                      ReStart(); 
                                                    break; 
                                                    
                                            }
                                            case 2: {

                                                    printf("Enter angle in degree\n");  
                                                    scanf("%f", &d);  
                                                    printf("Answer --> Cos(%f) = %f\n", d, cos(r));
                                                      ReStart();  
                                                    break; 
                                                    
                                            }
                                            case 3: {

                                                    printf("Enter angle in degree\n"); 
                                                    scanf("%f", &d);  
                                                    printf("Answer --> Tan(%f) = %f\n", d, tan(r));
                                                      ReStart();  
                                                    
                                                    break; 
                                            }
                                            case 4: {

                                                    printf("Enter angle in degree\n"); 
                                                    scanf("%f", &d);  
                                                    printf("Answer --> Cot(%f) = %f\n", d, 1/tan(r));
                                                      ReStart();
                                                    break; 
                                                    
                                            }
                                            case 5: {

                                                    printf("Enter angle in degree\n"); 
                                                    scanf("%f", &d);  
                                                    printf("Answer --> Sec(%f) = %f\n", d, 1/cos(r)); 
                                                      ReStart();
                                                    
                                                    break; 
                                            }
                                            case 6: {

                                                    printf("Enter angle in degree\n");  
                                                    scanf("%f", &d);  
                                                    printf("Answer --> Cosec(%f) = %f\n", d, 1/sin(r));
                                                          ReStart();  
                                                    
                                                    break; 
                                            }
                                            case 7:
                                            {
                                                // exit();  
                                                ReStart();
                                            }
                                            default:{
                                                  ReStart();
                                            }
                                        }
                                    
                                    
                                    
                                          

                                                 One();
                                }

                                else
                                if( ch==2){
                                    // Inverse trigno 
                                    float d;



                                    // retry option
                                }
                                else
                                {
                                // retry option 
                                //  .........

                             }
                                    

                        }

                        // Exit 
                        case 11:{
                          One();
                        //   ReStart();
                        }

                        default:
                        {
                            printf("Wrong Attempt....");
                        }  
                    }
                    

                        
            }
          

void main()
{
    run();
}
    
    

