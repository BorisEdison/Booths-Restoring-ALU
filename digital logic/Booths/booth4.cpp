#include<stdio.h>
#include<stdlib.h>
#define num 5
int a[num];
int top = -1;

int counter = 5;
int accu[num] = {0};
int plier[num];
int plicand[num];
int q1;
int n1,n2;
int n3;

int negplicand[num];

int count;



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
	
	return;
	
}


void a_m (){
	int carry = 0;
	for(int i = 0 ; i<5; i++){
		
		if(accu[4-i] == 0 && carry==1){
			if(negplicand[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else if(negplicand[4-i] == 1){
				accu[4-i]=0;
				carry = 1;
				}
						
						}
		else if(accu[4-i] == 1 && carry==0){
			if(negplicand[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else if(negplicand[4-i] == 1){
				accu[4-i]=0;
				carry = 1;
				}
						}
		if(accu[4-i] == 0 && carry==0){
			if(negplicand[4-i] == 0){
				accu[4-i] = 0;
				carry = 0;
			}
			else if(negplicand[4-i] == 1){
				accu[4-i]=1;
				carry = 0;
				}
			}
		else if(accu[4-i] == 1 && carry==1){
			if(negplicand[4-i] == 0){
				accu[4-i] = 0;
				carry = 1;
				}
			else if(negplicand[4-i] == 1){
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
			if(plicand[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else{
				accu[4-i]=0;
				carry = 1;
				}
						
						}
		if(accu[4-i] == 1 && carry==0){
			if(plicand[4-i] == 0){
				accu[4-i] = 1;
				carry = 0;
				}
			else{
				accu[4-i]=0;
				carry = 1;
				}
						}
		if(accu[4-i] == 0 && carry==0){
			if(plicand[4-i] == 0){
				accu[4-i] = 0;
				carry = 0;
			}
			else{
				accu[4-i]=1;
				carry = 0;
				}
			}
		if(accu[4-i] == 1 && carry==1){
			if(plicand[4-i] == 0){
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
					
void ars(){
							
	int accu0[num];
	for (int i= 0 ; i<5; i++){
		accu0[i] = accu [i];
	}
	for(int i=0; i <4 ; i++){
		accu[i+1] = accu0 [i];
	}

	int plier0[num];
	for (int i= 0 ; i<5; i++){
		plier0[i] = plier[i];
	}
	
	plier [0]= accu0[4];
	for(int i=0; i <4 ; i++){
		
		plier[i+1] = plier0 [i];
		}

	q1= plier0[4];

}

// MAIN FUNCTION
int main(){
	
	printf("Enter two decimal numbers between 0 and 15 you want to multiply: ");
	scanf("%d %d",&n1,&n2);
	if((n1>15 || n1<-15) || (n2>15 || n2 <-15)){
		printf("Invalid input");
		exit(0);
	}
	
	if(n1>0){
		dtb(n1);
	}
	else{
		int n11;
		n11 = -1*n1;
		dtb(n11);
	}
	
	
	
	// converting binary to decimal;
	if(1){
		printf("plicand: ");
		for(int i = 0 ; i<5; i++){
			plicand[i] = pop();
			printf("%d\t",plicand[i]);
		
		}
		printf("\n");
		if(n1<0){
			int nplicand[num];
			for(int i = 0; i<5; i++){
				if(plicand[i] == 0){
					nplicand[i] = 1;
				}
				else{
					nplicand[i] = 0;
					}
				}
			
			printf("nplicand ");
			for(int i = 0; i<5;i++){
				printf("%d\t",nplicand[i]);
				}
			printf("\n");
			int carry = 1;
			for(int i= 0 ; i<5 ; i++){
				if(nplicand[4-i] == 0 && carry==1){
					nplicand[4-i] = 1;
					carry = 0;
					}
				if(nplicand[4-i] == 1 && carry==0){
					nplicand [4-i] = 1;
					carry = 0;
					}
				if(nplicand[4-i] == 0 && carry==0){
					nplicand [4-i] = 0;
					carry = 0;
					}
				if(nplicand[4-i] == 1 && carry==1){
					nplicand [4-i] = 0;
					carry = 1;
					}
				}
			printf("\n");
			printf("nplicand: ");
			for(int i = 0 ; i<5; i++){
	
				printf("%d\t",nplicand[i]);
		
				}
			printf("\n");
			
			for(int i =0 ; i<5; i++){
				plicand[i] = nplicand[i];
				}
			for(int i =0 ; i<5; i++){
				printf("%d ",plicand[i]);
				}
				printf("\n");
				
				
			}
			
		}
	printf("\n");
	
	if(1){
		top = -1;
		if(n2>0){
			dtb(n2);
		}
		else{
			int n22;
			n22 = n2;
			dtb(n22);
		}
		printf("plier: ");
		for(int i = 0 ; i<5; i++){
			plier[i] = pop();
			printf("%d\t",plier[i]);
		
		}
		printf("\n");
		if(n2<0){
			int nplier[num];
			for(int i = 0; i<5; i++){
			if(plier[i] == 0){
				nplier[i] = 1;
			}
			else{
				nplier[i] = 0;
				}
			}
			printf("nplier: ");
			for(int i = 0; i<5;i++){
				printf("%d\t",nplier[i]);
				}
				printf("\n");
			int carry = 1;
			for(int i= 0 ; i<5 ; i++){
				if(nplier[4-i] == 0 && carry==1){
					nplier[4-i] = 1;
					carry = 0;
					}
				if(nplier[4-i] == 1 && carry==0){
					nplier [4-i] = 1;
					carry = 0;
					}
				if(nplier[4-i] == 0 && carry==0){
					nplier [4-i] = 0;
					carry = 0;
					}
				if(nplier[4-i] == 1 && carry==1){
					nplier [4-i] = 0;
					carry = 1;
					}
				}
			printf("\n");
			printf("nplier: ");
			for(int i = 0 ; i<5; i++){
	
				printf("%d\t",nplier[i]);
		
				}
				printf("\n");
			
			for(int i =0 ; i<5; i++){
				plier[i] = nplier[i];
				}
				
			}
			printf("plier: ");
			for(int i =0 ; i<5; i++){
				printf("%d\t",plier[i]);
				}
				printf("\n");
				
			}
	


	
	
	printf("\n");
	for(int i = 0; i<5; i++){
		if(plicand[i] == 0){
			negplicand[i] = 1;
		}
		else{
			negplicand[i] = 0;
		}
	}
	printf("1's Complement of multiplicand: ");
	for(int i = 0; i<5;i++){
		printf("%d\t",negplicand[i]);
	}
	int carry = 1;
	for(int i= 0 ; i<5 ; i++){
		if(negplicand[4-i] == 0 && carry==1){
			negplicand[4-i] = 1;
			carry = 0;
		}
		if(negplicand[4-i] == 1 && carry==0){
			negplicand [4-i] = 1;
			carry = 0;
		}
		if(negplicand[4-i] == 0 && carry==0){
			negplicand [4-i] = 0;
			carry = 0;
		}
		if(negplicand[4-i] == 1 && carry==1){
			negplicand [4-i] = 0;
			carry = 1;
		}
	}
	printf("\n");
	printf("2's Complement of multiplicand: ");
	for(int i = 0 ; i<5; i++){
	
		printf("%d\t",negplicand[i]);
		
	}
	printf("\n");
	printf("----------------------------------------------------------------------------");
	printf("\n");
	printf("Counter \tAccumulator \t \tMultiplier \t \tQ(-1) \t \t Operation\n\n");
	
	printf("----------------------------------------------------------------------------");
	printf("\n");
	q1=0;
	while(counter>-1){
		
		printf("%d \t \t",counter);
		if( counter == 5 ){
				for(int i=0; i<5; i++){
				printf("%d ",accu[i]);
				}
				printf("\t \t");
				
				for(int i=0; i<5; i++){
				printf("%d ",plier[i]);
				}
				printf("\t \t");
				printf("%d \t \t ",q1);
		
				
				printf("Initial Condition\n");
			
				printf("----------------------------------------------------------------------------");
				
				counter--;
				printf("\n");
				continue;
			
		}
		
		
			if(plier[4] == 1 && q1 == 0){
				a_m();
				for(int i=0; i<5; i++){
					printf("%d ",accu[i]);
					}
				printf("\t \t");
				for(int i=0; i<5; i++){
				printf("%d ",plier[i]);
				}
				printf("\t \t");
		
				printf("%d \t \t ",q1);
		
			
				printf("A <- A - M");
				printf("\n");
				printf("  \t \t");
				ars();
				for(int i=0; i<5; i++){
					printf("%d ",accu[i]);
					}
				printf("\t \t");
				for(int i=0; i<5; i++){
				printf("%d ",plier[i]);
				}
				printf("\t \t");
				printf("%d \t \t ",q1);
		
			
				printf("Arithmetic Right Shift");
				
				}
			else if(plier[4] == 0 && q1 == 1){
				am();
				for(int i=0; i<5; i++){
					printf("%d ",accu[i]);
					}
				printf("\t \t");
				for(int i=0; i<5; i++){
				printf("%d ",plier[i]);
				}
				printf("\t \t");
				printf("%d \t \t ",q1);
		
			
				printf("A <- A + M");
				printf("\n");
				printf("  \t \t");
				ars();
				for(int i=0; i<5; i++){
					printf("%d ",accu[i]);
					}
				printf("\t \t");
				for(int i=0; i<5; i++){
				printf("%d ",plier[i]);
				}
				printf("\t \t");
				printf("%d \t \t ",q1);
		
			
				printf("Arithmetic Right Shift");
				
				}
				
			else if((plier[4] == 1 && q1 == 1) || (plier[4] == 0 && q1 == 0) ){
				
				ars();
				for(int i=0; i<5; i++){
					printf("%d ",accu[i]);
					}
				printf("\t \t");
				for(int i=0; i<5; i++){
				printf("%d ",plier[i]);
				}
				printf("\t \t");
		
				printf("%d \t \t ",q1);
		
			
				printf("Arithmetic Right Shift");
				
				
					
			}
			printf("\n");
			printf("----------------------------------------------------------------------------");
			printf("\n");
			counter--;
		}
		
		int deci[10];
		for(int i=0;i<5;i++){
			deci[i]=accu[i];
		}		
		for(int i=0; i<5;i++){
			deci[i+5]=plier[i];
		}
		
		
		if(deci[0]==1){
				int negdeci[10];
				for(int i = 0; i<10; i++){
					if(deci[i] == 0){
					negdeci[i] = 1;
					}
				else{
					negdeci[i] = 0;
					}
				}
				int carry = 1;
	
				for(int i= 0 ; i<10 ; i++){
				if(negdeci[9-i] == 0 && carry==1){
					negdeci[9-i] = 1;
					carry = 0;
					}
				if(negdeci[9-i] == 1 && carry==0){
					negdeci [9-i] = 1;
					carry = 0;
					}
				if(negdeci[9-i] == 0 && carry==0){
					negdeci [9-i] = 0;
					carry = 0;
					}
				if(negdeci[9-i] == 1 && carry==1){
					negdeci [9-i] = 0;
					carry = 1;
					}
				}
				printf("\n");
				
				
				int j= 1;
				int dec=0,d;
				for(int i=0;i<10;i++){
					d = negdeci[9-i]*j;
					dec = dec+d;
					j=j*2;
		
					}
				printf("\ndecimal value of Quotient: -%d",dec);
		
				}
		else{
				int j= 1;
				int dec=0,d;
				for(int i=0;i<10;i++){
					d = deci[9-i]*j;
					dec = dec+d;
					j=j*2;
		
					}
				printf("\ndecimal value of Quotient: %d",dec);
		
		}

	}

	

