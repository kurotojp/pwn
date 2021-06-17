#include <stdio.h>
#include <stdlib.h>

int main(void){
				char *A;
				char *B;
				char *C;
				char *D;
				
				printf("A malloc(0x10)\n");
				printf("B malloc(0x10)\n");
				printf("free(A)\n");
				printf("free(B)\n");
				printf("C malloc(0x10)\n");

				A = (char*)malloc(0x10);
				B = (char*)malloc(0x10);
				C = (char*)malloc(0x10);
				
				printf("A address: %p \n", A);
				printf("B address: %p \n", B);
				printf("C address: %p \n", C);

				free(A);
				free(B);
				free(C);
				

				D = (char*)malloc(0x10);
				printf("C address: %p \n", C);


				return 0;
}
