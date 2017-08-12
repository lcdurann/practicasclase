#include<iostream>
int main(void)
{ int val1=0, val2=0,max=0;
  std::cout<<"primer valor:";
  std::cin>>val1;
  std::cout<<"segundo valor:";
  std::cin>>val2;
  std::cout<<"resultado suma: ";
  std::cout<< val2 +val1<<std::endl;
  std::cout<<"resultado v1-v2: ";
  std::cout<< val1-val2<<std::endl;
  if (val1>val2)
  {
    (max= val1);
  }
  else
    {
    (max=val2);
    }
  std::cout<<"max= "<<std::endl;
  std::cout<<max<<std::endl; 
  
  
  return 0;
}
