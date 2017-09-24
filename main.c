#include <unistd.h>
#include <stdio.h>


int main(){
	
	system("streamer -o parkingState.jpeg");
	system("git add parkingState.jpeg");
	system("git commit -m 'New parking state !'");

}
