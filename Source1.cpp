#include <stdio.h>
//!
//! This function realise a bubble-sorting
//!
int main()
{
	int a[31]; /** The array a */ 
	for (int i=0; i<30;i++)
	{
		a[i]=30-i; 
		printf("%d\t",a[i]);
	}
	printf("\n");
	/**
	* The process of permutation of array a
	*/
	for (int i=30;i>0;i--)
	{
		if (a[i-1]>a[i])
		{
			int t=a[i-1];  /** integer variable t */
			a[i-1]=a[i];   /** integer 1 element of array a */
			a[i]=t;        /** integer 2 element of array a */
		}
		printf("%d\t",a[i]); //! a printing function.
	}
	printf("\n");
}