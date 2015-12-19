#include <stdio.h>

int main(){
	int A, b;

	void f(){
		int c;
		
		void g(){
			int c;
			c = 30;
			A = b;
			printf("*1*\tA=%d\tb=%d\tc=%d\n", A, b, c);
		}

		printf("*2*\tA=%d\tb=%d\n", A, b);
		
		A = 0; b = 0; c = 0;
		
		g();

		printf("*3*\tc=%d\n", c);
	}

	void g(){
		int A, b;
		A = 3; b = 8;

		f();

		printf("*4*\tA=%d\tb=%d\n", A, b);
	}

	A = 2; b = 3;
	printf("*5*\tA=%d\tb=%d\n", A, b);

	g();

	printf("*6*\tA=%d\tb=%d\n", A, b);

	return 0;
}
