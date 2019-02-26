#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include  <unistd.h>

int main(){
	int r;
	scanf("%d",&r);
	if(r == 0){
		int pid1 = fork();
		if(pid1>0){
			wait(NULL);
		  	int pid2 = fork();
			if(pid2 ==0){
				float a;
                        	scanf("%f",&a);
                        	printf("Perimeter of square is %f and area is %f\n",4*a,a*a);
			}
			else{
				wait(NULL);
			}
		}
		else{
			
			float a;
			scanf("%f",&a);
			printf("Perimeter of circle is %f and area is %f\n",2*3.14*a,3.14*a*a);
		}
	}
}
