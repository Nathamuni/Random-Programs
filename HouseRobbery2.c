#include<stdio.h>
#include<math.h>
int main(){
	int amt[200];
	int len,i=0,sum=0;
	scanf("%d",&len);
	printf("\n\n enter elements\n" );
	while(i<len) 
		scanf("%d",&amt[i++]);
	for(i=1;i<=len;i++){
		if(len ==1) 
			sum+= amt[0];
			
		else if(len == 2){
		
//			sum += (amt[0] + amt[1] + abs(amt[0] - amt[1]));
//			sum /= 2;
			if(amt[0]> amt[1])
			sum = amt[0];
			else 
			sum = amt[1];
		}
		else if(i == len){
			sum += amt[i-1];
		}
		    
		else if(i ==len-1) {
			if(amt[i] > amt[i-1]){
				sum+= amt[i];
			}
			else sum += amt[i-1];
		}
		
		else if( amt[i] + amt[i+2] > amt[i-1] + amt[i+1]){
			sum += amt[i] + amt[i+2];
				i+=4;
		}
		else if(amt[i] + amt[i+2] < amt[i-1] + amt[i+1]){
			sum += amt[i-1]+amt[i+1];
			i+=2;
		}
	}
	printf("total rob amount can be %d",sum);
	return 0;
}
