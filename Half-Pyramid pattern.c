   #include <stdio.h>    
    void main()  
    {  
        int i, j, rows;  
        printf (" Enter a number to define the rows: \n ");  
        scanf("%d", &rows);  
        printf("\n");  
        for (i = 1; i <= rows; ++i) 
        {  
            for (j = 1; j <= i; ++j) 
            {  
                printf ("* ");  
            }  
            printf ("\n");   
        }  
              
    }  
	

