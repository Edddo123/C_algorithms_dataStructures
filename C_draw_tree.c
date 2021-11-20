#include <stdio.h>

int
main ()
{

  int n;
  scanf ("%d", &n);
  int f = 1;

  for (f = 1; f <= n; f++)
    {

     
      int k = 4, i = 0, j = 0;
      int bottom = n * k;	//length
      int bot = f * k;
      int mid1 = n * k / 2 - 1;	//positions
      int mid2 = n * k / 2;

      int midHeight;
      int height;
      int totalHeight;

      for (i = 0; i < f; i++)
	{
	  totalHeight = totalHeight + 2 * (1 + i);
	}
	 char tree[totalHeight][bottom];

      for (i = 0; i < totalHeight; i++)
	{

	  for (j = 0; j < bottom; j++)
	    {
	      tree[i][j] = ' ';
	    }
	}

      for (i = 0; i < f; i++)
	{
	  height = 2 * (1 + i);
	}

      midHeight = height - 2;
      for (i = 0; i < height; i++)
	{

	  tree[i][mid1] = '^';
	  tree[i][mid2] = '^';
	}

      for (i = 0; i < bot / 2; i++)
	{


	  tree[height - 1][mid1 - i] = '^';
	  tree[height - 1][mid2 + i] = '^';
	}
      for (i = 1; i <= midHeight; i++)
	{
	  tree[i][mid1 - i] = '^';
	  tree[i][mid2 + i] = '^';
	}


      for (i = 0; i < height; i++)
	{

	  for (j = 0; j < bottom; j++)
	    {
	      printf ("%c", tree[i][j]);
	    }
	  printf ("\n");
	}



    }


}
