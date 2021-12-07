#include <iostream>

int main()
{
  int test[2][3][2];
  int i,j,k;
  std::cout<<"Enter 12 values: \n";
  for (i = 0; i < 2; ++i){
      for (k = 0; k < 2; ++k){
        std::cin>>test[i][j][k];
      }
    }
  }
  // Printing values with proper index.
  std::cout<<"\nDisplaying values:\n";
  for (i = 0; i < 2; ++i){
    for (j = 0; j < 3; ++j){
      for (k = 0; k < 2; ++k){
        std::cout<<"test["<<i<<"]["<<j<<"]["<<k<<"] = "<< test[i][j][k] <<"\n";
      }
    }
  }
  return 0;
}
