#include<stdio.h>
#include<stdlib.h>
#define num 5

int a[num];
int top = -1;

int negvisor[num];          // for 2's complement of dividend

int accu[num] = {0};
int counter = 5;
int vidend[num];
int visor[num];
int carry;

int n1,n2;

void push (int x){
	if ( top == 4){
		return ;
		
	}
	top = top + 1;
	a[top] = x;
	return;
}
int pop ( void ){
	int rvalue;
	if ( top == -1){
		return 1;
	}
	rvalue = a[top];
	top-- ;
	return (rvalue);
}
void dtb(int n) {
	top = -1;
	int r;
	int n5 = n;
	for(int i = 0;i<5; i++){
		r = n5%2;
		n5 = n5/2;
		push(r);
		
		}
	}
void l_s(){
	int accu0[num];
	int vidend0[num];
	for(int i = 0; i<5; i++){
		accu0[i] = accu[i];
	}
	
	for ( int i = 0; i<5; i++){
		vidend0[i] = vidend[i];
	}
	
	for(int i = 0; i<4; i++){
		vidend[3-i]=vidend0[4-i];
		
	}
	accu[4] = vidend0[0];
	for (int i= 0 ;i<4 ; i++){
		accu[3-i] = accu0[4-i];
	}
}

void a_m (){
	int carry = 0;
	for(int i = 0 ; i<5; i++){
		
		if(accu[4-i] == 0 && carry==1){
			if(negvisor[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else{
				accu[4-i]=0;
				carry = 1;
				}
						
						}
		else if(accu[4-i] == 1 && carry==0){
			if(negvisor[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else{
				accu[4-i]=0;
				carry = 1;
				}
						}
		if(accu[4-i] == 0 && carry==0){
			if(negvisor[4-i] == 0){
				accu[4-i] = 0;
				carry = 0;
			}
			else{
				accu[4-i]=1;
				carry = 0;
				}
			}
		else if(accu[4-i] == 1 && carry==1){
			if(negvisor == 0){
				accu[4-i] = 0;
				carry = 1;
				}
			else{
				accu[4-i]=1;
				carry = 1;
				}
			}
		}
}

void am (){
	int carry = 0;
	for(int i = 0 ; i<5; i++){
		
		if(accu[4-i] == 0 && carry==1){
			if(visor[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else{
				accu[4-i]=0;
				carry = 1;
				}
						
						}
		if(accu[4-i] == 1 && carry==0){
			if(visor[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else{
				accu[4-i]=0;
				carry = 1;
				}
						}
		if(accu[4-i] == 0 && carry==0){
			if(visor[4-i] == 0){
				accu[4-i] = 0;
				carry = 0;
			}
			else{
				accu[4-i]=1;
				carry = 0;
				}
			}
		if(accu[4-i] == 1 && carry==1){
			if(visor[4-i] == 0){
				accu[4-i] = 0;
				carry = 1;
				}
			else{
				accu[4-i]=1;
				carry = 1;
				}
			}
		}
}

int main(){
	printf("Enter dividend and divisor: ");
	scanf("%d %d",&n1,&n2);
	
	if( (n1 > 17 || n1<0) || (n2>17 || n2<0)){
		printf("Invalid input :(");
		exit(0);
	}
	
	dtb(n1);
	
	for(int i = 0; i<5; i++){
		vidend[i] = pop();
	}
	
	printf("\nDividend: ");
	for(int  i = 0; i<5; i++){
		printf("%d ",vidend[i]);
	}
	printf("\n");
	
	top = -1;
	dtb(n2);
	for( int i = 0 ; i<5 ; i++){
		visor[i] = pop();
	}
	
	printf("\nDivisor : ");
	for(int  i = 0; i<5; i++){
		printf("%d ",visor[i]);
	}
	printf("\n");
	
	            
	for(int i =0 ; i<5; i++){    // for 1's complement of divisor
		if(visor[i]==0){
			negvisor[i] = 1;
		}
		else{
			negvisor[i] =0;
		}
	}
	printf("\n1's complement of divisor: ");
	for( int i = 0 ; i<5; i++){
		printf("%d ",negvisor[i]);
	}
	printf("\n");
	carry = 1;
	for(int i= 0 ; i<5 ; i++){
		if(negvisor[4-i] == 0 && carry==1){
			negvisor[4-i] = 1;
			carry = 0;
			}
		if(negvisor[4-i] == 1 && carry==0){
			negvisor [4-i] = 1;
			carry = 0;
			}
		if(negvisor[4-i] == 0 && carry==0){
			negvisor [4-i] = 0;
			carry = 0;
			}
		if(negvisor[4-i] == 1 && carry==1){
			negvisor [4-i] = 0;
			carry = 1;
			}
		}
	
	printf("\n2's complement of divisor: ");
	for(int i = 0; i<5 ; i++){
		printf("%d ",negvisor[i]);
	}
	printf("\n");

	
	
	printf("---------------------------------------------------------------------------------------");
	printf("\n");
	printf("Counter \tAccumulator \t \t Dividend \t \t Operation\n");
	
	printf("---------------------------------------------------------------------------------------");
	while(counter>=0){
		
		if(counter == 5){
			printf("\n%d \t \t",counter);
			for(int i = 0; i<5; i++){
				printf("%d ",accu[i]);
				
			}
			printf(" \t \t ");
			for(int i = 0 ; i< 5 ; i++){
				printf("%d ",vidend[i]);
			}
			printf(" \t \t ");
			printf("Initial Condition");
			printf("\n");
			counter --;
			printf("---------------------------------------------------------------------------------------");
		}
		printf("\n%d \t \t",counter);
		
		l_s();
		
		for(int i = 0; i<5; i++){
				printf("%d ",accu[i]);
				
			}
		printf(" \t \t ");
		
		for( int i = 0; i<4 ; i++){
			printf("%d ",vidend[i]);
			
		}
		printf("_");
		
		printf(" \t \t ");
		
		printf("Shift Left");
		printf("\n  \t \t");
		
		for(int i =0 ; i<5; i++){
			printf("%d ",negvisor[i]);
		}	
		printf(" \t \t ");
		
		for(int i = 0 ; i< 5 ; i++){
			printf("  ");
			
			}	
		printf(" \t \t ");
		
		printf("A <- A - M");
		
		printf("\n  \t \t");
		
		for(int i =0 ; i<5; i++){
			printf("_ ");
		}	
		printf(" \t \t ");
		
		for(int i = 0 ; i< 5 ; i++){
			printf("  ");
			
			}	
		printf(" \t \t ");
		

		
		a_m();                           // A-M
		printf("\n  \t \t");
		
		for(int i =0 ; i<5 ; i++){
			printf("%d ",accu[i]);
		}
	
		printf("\n  \t \t");
		
		for(int i =0 ; i<5; i++){
			printf("  ");
		}	
		printf(" \t \t ");
		
		if(accu[0] == 1){           // if number is negative
			vidend[4] = 0;
			for(int i = 0 ; i< 5 ; i++){
				printf("%d ",vidend[i]);
			
				}	
			printf(" \t \t ");
		
			printf("MSB = 1, Set Q(0) = 0");
		}
		else{
			vidend[4] = 1;
			for(int i = 0 ; i <5 ; i++){
				printf("%d ",vidend[i]);
			}
			printf(" \t \t ");
			printf("MSB = 0, Set Q(0) = 1");
		}
		
		if(accu[0]==1){
			am();
		
			printf("\n");
			printf("\n  \t \t");
		
			for(int i =0 ; i<5 ; i++){
				printf("%d ",visor[i]);
				}
		
			printf(" \t \t ");
		
			for(int i = 0 ; i< 5 ; i++){
				printf("  ");
			
				}
			printf(" \t \t ");
			printf("Restore: A <- A + M");
		
			printf("\n  \t \t");
		
			for(int i =0 ; i<5; i++){
				printf("_ ");
				}	
			printf(" \t \t ");
		
			for(int i = 0 ; i< 5 ; i++){
				printf("  ");
				
				}	
			printf(" \t \t ");
		
			printf("\n  \t \t");
		
			for(int i =0 ; i<5 ; i++){
				printf("%d ",accu[i]);
				}
		
			printf(" \t \t ");
			for(int i = 0 ; i< 5 ; i++){
				printf("%d ",vidend[i]);
			
				}
			
			printf(" \t \t ");
			printf("Restored value");
			}
		
		
		
				
		printf("\n");
		printf("---------------------------------------------------------------------------------------");
		counter --;
	}
	
		int rem[5],divi[5];
	for(int i=0;i<5;i++){
		rem[i]=accu[i];
	}
	
	for(int i=0;i<5;i++){
		printf("%d",accu[i]);
	}


	
	for(int i=0;i<5;i++){
		divi[i]=vidend[i];
	}
	int j=1,dec=0,d;
	for(int i=0;i<5;i++){
		d=rem[4-i]*j;
		dec = dec+d;
		j=j*2;
		
	}
	
	printf("\ndecimal value of remainder: %d",dec);
	j= 1;
	dec=0;
	for(int i=0;i<5;i++){
		d=divi[4-i]*j;
		dec = dec+d;
		j=j*2;
		
	}
	printf("\ndecimal value of Quotient: %d",dec);
}

