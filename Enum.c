#include<stdio.h>

/*enum Day{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THRUSDAY, FRIDAY, SATURDAY

};

int main(){

    enum Day today = WEDNESDAY;

    printf("%d", today);

*/
   
typedef enum{
    Success, Failure, Pending


}Status;
void connectStatus(Status status);

int main(){
    Status Status = Pending;

    connectStatus(Status);

    return 0;
}
void connectStatus(Status status){
    switch(status){
        case Success:
         printf("Connection was successful\n");
         break; 
         
        case Failure:
         printf("Could not connect\n");
         break; 

        case Pending:
         printf("Connecting....\n");
         break; 

    }

}