 #include<stdio.h>


	void swap(int a,int b)
	{
	    int temp;

	    temp=a;
	    a=b;
	    b=temp;

		printf("After Swap : a = %d and b = %d\n",a,b);
	}

	int main()
	{
		int a=10,b=20;

		printf("Before Swap: a = %d and b = %d\n",a,b);

        swap(a,b);


		return 0;
	}
