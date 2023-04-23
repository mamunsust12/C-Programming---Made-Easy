 #include<stdio.h>

	int A;
	int B;

	int Add(int A, int B)
	{
		int result;

		result = A + B;

		return result;
	}

	int main()
	{
		int A, B;
		int answer;
		//A = 5;
		//B = 7;
		answer = Add(A,B);
		printf("%d\n",answer);
		return 0;
	}
