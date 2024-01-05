#include <stdio.h>


unsigned integer_to_float(int x) {
  unsigned int result = 0x00;
  
  unsigned int S = 0x00;
  unsigned int E = 0x00;
  unsigned int M = 0x00;
  int rem = x;

  if(x<0)
  {
    x = -x;
    rem = x;
    S = 0x80<<24;
    printf("ok");
    
  }
  if(!(x^0x01))
  {
    E = ((1<<7)<<23);
    result = S|E;
  }
  else if (!(x^0x00))
  {
    result = S;
  }
  else
{
    while(x^0x01)
    {
      x = x/2;
      E += 1;
    }

    if(E>=23)
    {
      M = (rem>>9)|M;
    }
    else
    {
      M = (rem<<(23-E))|M;
    }

    E = (E + (1<<7) -1)<<23;
    

    result = S|M|E;
  }
  return result;
}


int main(void)
{

    unsigned int k = integer_to_float(0x80000000);

    printf("%d \n", k);

    return 0;
}
