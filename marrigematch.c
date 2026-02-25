#include <stdio.h>
#include<stdlib.h>


    void matchinggame(int a[],int b[],int c[][100],int n){
        int choice;
        while (1)
        {
           int flag =0;  
        
        printf("enter your element in array a to match with priority elment with b : \n");
        int eleinA;
        scanf("%d",&eleinA);
        printf("enter your element in array b to match with priority elment with a : \n");
        int eleinB;
        scanf("%d",&eleinB);

        for(int i=0;i<n;i++){
            if(a[i]==eleinA){
                for(int j=0;j<n;j++){
                    if(b[j]==eleinB){
                        
                        c[i][j]=1;
                        flag=1;
                        printf("match found in the array a and b then the element are %d and %d \n",eleinA,eleinB);
                        break;
                    }
                }
                break;
            }
        }
        if(flag == 0){
            printf("no match found ");
        }

         printf("Match another pair? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if(choice == 0)
            break;
    }

}


int main() {
     int n;
        printf("enter the number of elements to store in array a and array b : \n");
        scanf("%d",&n);

        int a[n];
        int b[n];
        int c[n][100];
    
        printf("Enter the elements of array a : \n");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("Enter the elements of array b : \n");
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                c[i][j]=0;
            }
        }
        matchinggame(a,b,c,n);
    return 0;
}