#include <stdio.h>
    //function prototypes
    void inputCustomerDetails(char customerID[], char customerName[], int *unitConsumed);
    float calculateCharges( int unitConsumed);
    float applydiscount(float totalamount);
    float minimumbill(float bill);
    

  int main(){
    char customerID[1000];
    char customerName[50];
    int unitConsumed;
    float totalamounttopay;
    //Input customer details
    inputCustomerDetails(customerID, customerName, &unitConsumed);
    //Calculate charges
    totalamounttopay = calculateCharges(unitConsumed);
    //Apply discount 
    totalamounttopay = applydiscount(totalamounttopay);
    //Apply minimum bill
    totalamounttopay = minimumbill(totalamounttopay); 
    
    //Display outputs  
    printf("\n●●●ELECTRICITY BILL DETAILS●●●\n");
    printf("Enter ID: %s\n",customerID);
    printf("Enter Name: %s\n",customerName);
    printf("Enter Unit Consumed: %d\n",unitConsumed);
    printf("Total Amount is %.2f\n",totalamounttopay); 
    
  return 0;
  }
  void inputCustomerDetails(char customerID[], char customerName[], int *unitConsumed){
     printf("Enter ID: ");
     scanf("%s", customerID);
     printf("Enter Name: ");
     scanf("%s", customerName);
     printf("Enter Unit Consumed: ");
     scanf("%d", unitConsumed);
  }
  float calculateCharges(int unitConsumed){
     float chargesperUnit;
     if(unitConsumed < 200){
       chargesperUnit = 1.20;
     }else if(unitConsumed < 400){
       chargesperUnit = 1.50;
     }else if(unitConsumed < 600){
       chargesperUnit = 1.80;
     }else {
       chargesperUnit = 2.00;
     }
     
     return unitConsumed * chargesperUnit;
  }
  float applydiscount(float totalamount){
    if(totalamount > 400){
      totalamount *= 0.85;
    }
    return totalamount;
  }
  float minimumbill(float bill){
    if(bill < 100){
      bill = 100;
    }
    return bill;
  }