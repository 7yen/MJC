#include<stdio.h>
/*
  switch语句  显示输入月份的季节 
*/
 int main(void)
 {
 	int sw;
 	printf("请输入月份："); 
 	scanf("%d",&sw);
 	
 	char season;
 	switch(sw) {
 		case 3:
 		   printf("%d月是春季",sw);
 	       break;
	    case 4: 
 	       printf("%d月是春季",sw); 	
 	       break;
 	    case 5: 
 	       printf("%d月是春季",sw); 	
 	       break;
 	    case 6: 
 	       printf("%d月是夏季",sw); 	
 	       break;
	    case 7:
           printf("%d月是夏季",sw); 	
           break;
        case 8:
           printf("%d月是夏季",sw);  	
           break;
        case 9:
           printf("%d月是秋季",sw); 	
           break;
        case 10:
           printf("%d月是秋季",sw); 	
           break;
        case 11:
           printf("%d月是秋季",sw);  	
           break;   
        default:
           printf("%d月是冬季",sw); 	
           break;
	}  
 	return (0);
} 
