#include <stdio.h>

int SequenciaFibonot(int NUM)
{
  int i,j,ant=0,val=1,soma,cont=0;
  while(1)
  {
	soma = ant + val;
	//2 3 5 8 13 21 34
	for(j = ant+1;j < soma;j++)
	{
	  cont++;
	  if (cont == NUM)
	  	return j;
	}
    val = ant;
    ant = soma;
  }
}

int main()
{
  int K,R;
  scanf("%d",&K);
  R = SequenciaFibonot(K);
  printf("%d\n",R);
}
