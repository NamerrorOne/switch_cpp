#include <stdio.h>

main() {
	int day;
	printf("Place number of day:   ");
	scanf("%i", &day);
	
	switch(day) {
		case 1: {
			printf("mon");
			break;
		} 	
		case 2: {
			printf("tue");
			break;
		} 
		case 3: {
			printf("wed");
			break;
 		} 	
		case 4: {
			printf("thursday");
			break;
		} 
		case 5: {
			printf("friday");
			break;
		} 	
		case 6: {
			printf("saturday");
			break;
		} 
		case 7: {
			printf("sunday");
			break;
		} 
		default: {
			printf("wrong type of data");
			break;
		} 	
	}
}
