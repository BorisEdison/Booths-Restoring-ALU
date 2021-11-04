#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int a[5],b[5];
int ans[5];

int carry = 0;
void addf(){
	printf("\n\nPerforming Addition");
	int carry = 0;
	printf("\nA\t");
	for(int i=0;i<5;i++){
		printf("\t%d",a[i]);
	}
	printf("\nB\t");
	for(int i=0;i<5;i++){
		printf("\t%d",b[i]);
	}
	carry =0;
	for (int i =4; i>=0 ; i--){
		if( a[i] == 0 && carry ==0 && b[i] ==0){ // 000
			ans[i]=0;
			carry = 0;

			}
		else if( a[i] == 0 && carry ==0 &&b[i] ==1){//001
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 1 && carry ==0 && b[i] ==0){//100
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 1 && carry ==0 &&b[i] ==1){//101
			ans[i]=0;
				carry = 1;

			}
		else if( a[i] == 0 && carry ==1&& b[i] ==0){//010
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 0 && carry ==1 &&b[i] ==1){//011
			ans[i]=0;
			carry = 1;

			}
		else if( a[i] == 1 && carry ==1&& b[i] ==0){//110
			ans[i]=0;
			carry = 1;

			}
		else if( a[i] == 1 && carry ==1&& b[i] ==1){//111
			ans[i]=1;
			carry = 1;

			}

		}
	
		printf("\nOutput: ");
			for(int i=0; i<5;i++){
				printf("\t%d",ans[i]);
				}
		
		
	
}
void subf(){
	int isb[5];
		printf("\n\nPerforming Subtraction");

	for(int i = 0; i<5; i++){
		if(b[i] == 0){
			isb[i] = 1;
			}
		else{
			isb[i] = 0;
			}
		}
	
	printf("\n1'complement");
	for(int i = 0; i<5; i++){
		printf("\t%d",isb[i]);
	}
	int Ssb[5];

	int carry = 1;
			for(int i= 0 ; i<5 ; i++){
				if(isb[4-i] == 0 && carry==0){
					Ssb[4-i] = 0;
					carry = 0;
					}
				if(isb[4-i] == 1 && carry==0){
					Ssb [4-i] = 1;
					carry = 0;
					}
				if(isb[4-i] == 0 && carry==1){
					Ssb [4-i] = 1;
					carry = 0;
					}
				if(isb[4-i] == 1 && carry==1){
					Ssb [4-i] = 0;
					carry = 1;
					}
				}
		
	printf("\n2's complement");
	for(int i = 0; i<5; i++){
		printf("\t%d",Ssb[i]);
	}
	carry = 0;
	for (int i =4; i>=0 ; i--){
		if( a[i] == 0 && carry ==0 && Ssb[i] ==0){ // 000
			ans[i]=0;
			carry = 0;

			}
		else if( a[i] == 0 && carry ==0 && Ssb[i] ==1){//001
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 1 && carry ==0 && Ssb[i] ==0){//100
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 1 && carry ==0 && Ssb[i] ==1){//101
			ans[i]=0;
				carry = 1;

			}
		else if( a[i] == 0 && carry ==1&& Ssb[i] ==0){//010
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 0 && carry ==1 && Ssb[i] ==1){//011
			ans[i]=0;
			carry = 1;

			}
		else if( a[i] == 1 && carry ==1 && Ssb[i] ==0){//110
			ans[i]=0;
			carry = 1;

			}
		else if( a[i] == 1 && carry ==1 && Ssb[i] ==1){//111
			ans[i]=1;
			carry = 1;

			}

		}
	
	
	
	printf("\nOutput: ");
			for(int i=0; i<5;i++){
				printf("\t%d",ans[i]);
				}
		
	
}

void incAf(){
		printf("\n\nPerforming Increment of A");

	int carry = 1;
	for(int i= 0 ; i<5 ; i++){
		if(a[4-i] == 0 && carry==0){
			ans[4-i] = 0;
			carry = 0;
			}
		if(a[4-i] == 1 && carry==0){
			ans[4-i] = 1;
			carry = 0;
			}
		if(a[4-i] == 0 && carry==1){
			ans[4-i] = 1;
			carry = 0;
			}
		if(a[4-i] == 1 && carry==1){
			ans[4-i] = 0;
			carry = 1;
			}
		}
		printf("\nOutput: ");
			for(int i=0; i<5;i++){
				printf("\t%d",ans[i]);
				}
		
}

void decAf(){
	int dec[5]={1,1,1,1,0};
		printf("\n\nPerforming Decrement of A");

	int carry = 1;
	for (int i =4; i>=0 ; i--){
		if( a[i] == 0 && carry ==0 && dec[i] ==0){ // 000
			ans[i]=0;
			carry = 0;

			}
		else if( a[i] == 0 && carry ==0 && dec[i] ==1){//001
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 1 && carry ==0 && dec[i] ==0){//100
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 1 && carry ==0 && dec[i] ==1){//101
			ans[i]=0;
				carry = 1;

			}
		else if( a[i] == 0 && carry ==1&& dec[i] ==0){//010
			ans[i]=1;
			carry = 0;

			}
		else if( a[i] == 0 && carry ==1 && dec[i] ==1){//011
			ans[i]=0;
			carry = 1;

			}
		else if( a[i] == 1 && carry ==1 && dec[i] ==0){//110
			ans[i]=0;
			carry = 1;

			}
		else if( a[i] == 1 && carry ==1 && dec[i] ==1){//111
			ans[i]=1;
			carry = 1;

			}

		}
		printf("\nOutput: ");
			for(int i=0; i<5;i++){
				printf("\t%d",ans[i]);
				}
		
	
}

void traAf(){
		printf("\n\nTransfering value of A to B");

	for(int i =0; i<5; i++){
		ans[i]=a[i];
	}
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",ans[i+1]);
				}
		
}

void compaf(){
	printf("\n\nPerforming Complement of A");

	int isa[5];

	for(int i = 0; i<5; i++){
		if(a[i] == 0){
			isa[i] = 1;
			}
		else{
			isa[i] = 0;
			}
		}
		
	
		
		printf("\nOutput: ");
		for(int i=0; i<4;i++){
			printf("\t%d",isa[i+1]);
			}
		
	
}


void compbf(){
		printf("\n\nPerforming Complement of B");

	int isb[5];

	for(int i = 0; i<5; i++){
		if(b[i] == 0){
			isb[i] = 1;
			}
		else{
			isb[i] = 0;
			}
		}
		
	
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",isb[i+1]);
				}
		
}

void andf(){
		printf("\n\nPerforming AND operation on A and B");

	for(int i= 0 ; i<5 ; i++){
		if(a[4-i] == 0 && b[4-i]==0){
			ans[4-i] = 0;
			}
		if(a[4-i] == 1 && b[4-i]==0){
			ans[4-i] = 0;
			}
		if(a[4-i] == 0 && b[4-i]==1){
			ans[4-i] = 0;
			}
		if(a[4-i] == 1 && b[4-i]==1){
			ans[4-i] = 1;
			}
		}
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",ans[i+1]);
				}
		
	
}

void orf(){
			printf("\n\nPerforming OR operation on A and B");

	for(int i= 0 ; i<5 ; i++){
		if(a[4-i] == 0 && b[4-i]==0){
			ans[4-i] = 0;
			}
		if(a[4-i] == 1 && b[4-i]==0){
			ans[4-i] = 1;
			}
		if(a[4-i] == 0 && b[4-i]==1){
			ans[4-i] = 1;
			}
		if(a[4-i] == 1 && b[4-i]==1){
			ans[4-i] = 1;
			}
		}
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",ans[i+1]);
				}
		
	
}


void nandf(){
			printf("\n\nPerforming NAND operation on A and B");

	for(int i= 0 ; i<5 ; i++){
		if(a[4-i] == 0 && b[4-i]==0){
			ans[4-i] = 1;
			}
		if(a[4-i] == 1 && b[4-i]==0){
			ans[4-i] =1;
			}
		if(a[4-i] == 0 && b[4-i]==1){
			ans[4-i] = 1;
			}
		if(a[4-i] == 1 && b[4-i]==1){
			ans[4-i] = 0;
			}
		}
	
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",ans[i+1]);
				}
		
}


void norf(){
		printf("\n\nPerforming NOR operation on A and B");

	for(int i= 0 ; i<5 ; i++){
		if(a[4-i] == 0 && b[4-i]==0){
			ans[4-i] = 1;
			}
		if(a[4-i] == 1 && b[4-i]==0){
			ans[4-i] = 0;
			}
		if(a[4-i] == 0 && b[4-i]==1){
			ans[4-i] = 0;
			}
		if(a[4-i] == 1 && b[4-i]==1){
			ans[4-i] = 0;
			}
		}
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",ans[i+1]);
				}
		
	
}


void xorf(){
		printf("\n\nPerforming EXOR operation on A and B");

	for(int i= 0 ; i<5 ; i++){
		if(a[4-i] == 0 && b[4-i]==0){
			ans[4-i] = 0;
			}
		if(a[4-i] == 1 && b[4-i]==0){
			ans[4-i] = 1;
			}
		if(a[4-i] == 0 && b[4-i]==1){
			ans[4-i] = 1;
			}
		if(a[4-i] == 1 && b[4-i]==1){
			ans[4-i] = 0;
			}
		}
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",ans[i+1]);
				}
		
	
}

void xnorf(){
		printf("\n\nPerforming EXNOR operation on A and B");

	for(int i= 0 ; i<5 ; i++){
		if(a[4-i] == 0 && b[4-i]==0){
			ans[4-i] = 1;
			}
		if(a[4-i] == 1 && b[4-i]==0){
			ans[4-i] = 0;
			}
		if(a[4-i] == 0 && b[4-i]==1){
			ans[4-i] = 0;
			}
		if(a[4-i] == 1 && b[4-i]==1){
			ans[4-i] = 1;
			}
		}
	
	printf("\nOutput: ");
			for(int i=0; i<4;i++){
				printf("\t%d",ans[i+1]);
				}
		
}


void incBf(){
			printf("\n\nPerforming Increment of B");

	int carry = 1;
	for(int i= 0 ; i<5 ; i++){
		if(b[4-i] == 0 && carry==0){
			ans[4-i] = 0;
			carry = 0;
			}
		if(b[4-i] == 1 && carry==0){
			ans[4-i] = 1;
			carry = 0;
			}
		if(b[4-i] == 0 && carry==1){
			ans[4-i] = 1;
			carry = 0;
			}
		if(a[4-i] == 1 && carry==1){
			ans[4-i] = 0;
			carry = 1;
			}
		}
		printf("\nOutput: ");
			for(int i=0; i<5;i++){
				printf("\t%d",ans[i]);
				}
		
}

void decBf(){
	printf("\n\nPerforming Deccrement of B");

	int dec[5]={1,1,1,1,0};
	int carry = 1;
	for (int i =4; i>=0 ; i--){
		if( b[i] == 0 && carry ==0 && dec[i] ==0){ // 000
			ans[i]=0;
			carry = 0;

			}
		else if( b[i] == 0 && carry ==0 && dec[i] ==1){//001
			ans[i]=1;
			carry = 0;

			}
		else if( b[i] == 1 && carry ==0 && dec[i] ==0){//100
			ans[i]=1;
			carry = 0;

			}
		else if( b[i] == 1 && carry ==0 && dec[i] ==1){//101
			ans[i]=0;
				carry = 1;

			}
		else if( b[i] == 0 && carry ==1&& dec[i] ==0){//010
			ans[i]=1;
			carry = 0;

			}
		else if( b[i] == 0 && carry ==1 && dec[i] ==1){//011
			ans[i]=0;
			carry = 1;

			}
		else if( b[i] == 1 && carry ==1 && dec[i] ==0){//110
			ans[i]=0;
			carry = 1;

			}
		else if( b[i] == 1 && carry ==1 && dec[i] ==1){//111
			ans[i]=1;
			carry = 1;

			}

		}
	printf("\nOutput: ");
			for(int i=0; i<5;i++){
				printf("\t%d",ans[i]);
				}
		
}


int main(){
	int op[4];
	printf("Enter binary number A: ");
	for(int i = 0; i<4; i++){
		scanf("%d",&a[i+1]);
	}
	a[0]=0;
	
	printf("Enter binary number B: ");
	for(int i = 0; i<4; i++){
		scanf("%d",&b[i+1]);
	}
	b[0]=0;
	printf("\nAddition: 0000");
	printf("\nSubtration: 0001");
	printf("\nIncrement A: 0010");
	printf("\nDecrement A: 0011");
	printf("\nIncrement B: 0100");
	printf("\nDecrement B: 0101");
	printf("\nTransfer A: 0110");
	printf("\nCompliment A: 1000");
	printf("\nCompliment B: 1001");
	printf("\nAND: 1010");
	printf("\nOR: 1011");
	printf("\nNAND: 1100");
	printf("\nNOR: 1101");
	printf("\nXOR: 1110");
	printf("\nXNOR: 1111");
	printf("\nExit: 0111");


	
	printf("\n\nEnter the binary code for objectcode: ");
	
	for(int i = 0;i<4; i++){
		scanf("%d",&op[i]);
	}
	
	int a=op[0];
	int b=op[1];
	int c=op[2];
	int d=op[3];
	
	while(1){
		if(a==0 && b == 0 && c == 0 && d == 0){
			
			addf();
			
		}
		else if(a==0 && b == 0 && c == 0 && d == 1){
			subf();
			
		}
		else if(a==0 && b == 0 && c == 1 && d == 0){
			incAf();
			
		}
		else if(a==0 && b == 0 && c ==1 && d == 1){
			decAf();
		}
		else if(a==0 && b == 1 && c == 0 && d == 0){
			incBf();
		}
		else if(a==0 && b == 1 && c == 0 && d == 1){
			decBf();
		}
		else if(a==0 && b == 1 && c == 1 && d == 0){
			traAf();
		}
		else if(a==0 && b == 1 && c == 1 && d == 1){
			prinf("THANK YOU HAVE A NICE DAY!! ")
			exit(0);
		}
		else if(a==1 && b == 0 && c == 0 && d == 0){
			compaf();
		}
		else if(a==1 && b == 0 && c == 0 && d == 1){
			compbf();
		}
		else if(a==1 && b == 0 && c == 1 && d == 0){
			andf();
		}
		else if(a==1 && b == 0 && c == 1 && d == 1){
			orf();
		}
		else if(a==1 && b == 1 && c == 0 && d == 0){
			nandf();
		}
		else if(a==1 && b == 1 && c == 0 && d == 1){
			norf();
		}
		else if(a==1 && b == 1 && c == 1 && d == 0){
			xorf();
		}
		else if(a==1 && b == 1 && c == 1 && d == 1){
			xnorf();
		}
		else{
			printf("***Enter correct object code*** ");
		}
		printf("\n\nEnter the binary code for objectcode: ");
	
		for(int i = 0;i<4; i++){
			scanf("%d",&op[i]);
			}
		a=op[0];
		b=op[1];
		c=op[2];
		d=op[3];
	
		
	}
	
	
	return 0;
}


