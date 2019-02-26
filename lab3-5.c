#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

void createprocess(int no);
void waitlooper(int);

void main(){
    pid_t child_pid, wpid;
   
    printf("Parent = %d , Child = %d\n ",getppid(),getpid());

   for (int id=0; id<3; id++) {

      if ((child_pid = fork()) == 0) {
          printf("Parent = %d , Child = %d\n ",getppid(),getpid());
          if(id==1){
   
            createprocess(2);
            
         }else if(id==2){

              createprocess(1);

         }
         waitlooper(2);
         exit(0);       
     }
    }


   waitlooper(5); 
     
}
  
void waitlooper(int n){           //wait generator
for(int j=1; j<n;j++)
	wait(NULL);
}
   
   

void createprocess(int no){
  pid_t  wpid;
  for (int j=0; j<no; j++) {

         if ((wpid = fork()) == 0) {
                       printf("Parent = %d , Child = %d \n",getppid(),getpid());
                       if(no==1){
                            
                            createprocess(2);
                           
                       }
                       exit(0);  
        }
  }
  waitlooper(3);
}
