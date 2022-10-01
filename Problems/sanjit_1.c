#include<stdio.h> 
#include<math.h>
int reversal(int n){ 
    int temp=n; 
    int k =0; 
    int rev=0;
    while(temp>=1){ 
        temp=temp/10; 
        k++;
    } 
    for(int i = k; i>=1; i--){  
        int temp = n%10;
        rev=rev+(int)pow(10,i-1)*temp;  
        //printf("%d\n", rev);
        n=n/10;  
    }

     return rev;
}
int main(){ 
    int n; 
    scanf("%d" , &n); 

    int a[n];
    int i;
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    { 
        int rev=reversal(a[i]);
          
        if(rev==a[i])
        {   
            printf("True\n");
        }
    
        else
        { 
            printf("False\n");
        }

    }
  

    
    
}