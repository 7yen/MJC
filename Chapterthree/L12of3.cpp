#include<stdio.h>
/*
  switch���  ��ʾ�����·ݵļ��� 
*/
 int main(void)
 {
 	int sw;
 	printf("�������·ݣ�"); 
 	scanf("%d",&sw);
 	
 	char season;
 	switch(sw) {
 		case 3:
 		   printf("%d���Ǵ���",sw);
 	       break;
	    case 4: 
 	       printf("%d���Ǵ���",sw); 	
 	       break;
 	    case 5: 
 	       printf("%d���Ǵ���",sw); 	
 	       break;
 	    case 6: 
 	       printf("%d�����ļ�",sw); 	
 	       break;
	    case 7:
           printf("%d�����ļ�",sw); 	
           break;
        case 8:
           printf("%d�����ļ�",sw);  	
           break;
        case 9:
           printf("%d�����＾",sw); 	
           break;
        case 10:
           printf("%d�����＾",sw); 	
           break;
        case 11:
           printf("%d�����＾",sw);  	
           break;   
        default:
           printf("%d���Ƕ���",sw); 	
           break;
	}  
 	return (0);
} 
