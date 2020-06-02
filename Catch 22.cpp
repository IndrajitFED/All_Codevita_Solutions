#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,i;
 int f,b,fd,bd,t,c=0,tc=0;
 cin >> n;
  int meters , df , distPerStep,remainingSteps,numFullSteps;
  while(n--)
  {
   cin >> f >> b>> t>> fd>> bd;
   if(fd>0 && bd>0 &&  t>0 && f>0 && b >0)   //Check all are positive
   {
    // Check first that if we make a forward move and we fall in the ditch
     if(fd <= f){
         cout << fd * t<<"F\n";
     }

    // Then Check that if we make a Backward Move and we fall in the ditch
    else if(bd <= (f - b)){
        cout <<(f+f+bd)*t<<"B\n";
    }

    // Else if check both the forward and backward are same then it will go infinite
    else if(f == b){
        cout << "No Ditch\n";
    }

    //Else check that we will fall in the Forward Ditch now calculate the Meters
    else if(f - b > 0){
        meters = 0;
        df = f-b;
        distPerStep = f+b;

        if(((fd-f) % df) == 0){ //Falling in forward Ditch
            numFullSteps = (fd - f) / df;
            meters += numFullSteps * distPerStep + f;
        }
        else{ //Falling with Incomplete Steps
            numFullSteps = (fd - f) / df+1;
            remainingSteps = fd - numFullSteps * df;
            meters += numFullSteps * distPerStep + remainingSteps;
        }
        
        cout << meters * t<<"F\n";
    }

    //Else check that we will fall in the Backward Ditch now calculate the Meters
    else if(b - f > 0){
        meters = f;
        df = b-f;
        distPerStep = f+b;

        if(((bd-b+f) % df) == 0){  //Falling in Backward Ditch
            numFullSteps = (bd - b + f) / df;
            meters += numFullSteps * distPerStep + b;
        }
        else{  //Falling with Incomplete Steps
            numFullSteps = (bd - b + f) / df + 1;
            remainingSteps = bd - numFullSteps * df;
            meters += numFullSteps * distPerStep + remainingSteps + f;
        }
        
        cout << meters * t<<"B\n";
    }

   }
  }
}
