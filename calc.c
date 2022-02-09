#include <stdio.h>

int main() {
	int a, b, res;
	char c;
	
	while(a != 0) {
		scanf("%d%c%d", &a, &c, &b);

		switch(c) {
			case '+': res = a + b; break;
			case '-': res = a - b; break;
			case '*': res = a * b; break;
			case '/':
		  		switch(b) {
					case 0:  break;
					default: res = a / b; break;
		  		}
			}
	
		if ( b != 0)
		printf("%d\n", res);
		else printf("ERROR!\n");
	}

	return 0;
}

