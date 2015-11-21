#include <stdio.h>
#include <stdlib.h>
#define n 10

struct body{
    double p[3]; //position
    double v[3]; //velocity
    double a[3]; //acceleration
    double radius;
    double mass;
    
};

struct body bodies[n];

int main()
{
    
    FILE **fp;
    char filename[20];
    int i, j;
    char str[600];
    
    // Inserir código aqui!!
   
    
    fp = malloc( sizeof(FILE *) * 10);
    
    if( fp != NULL )
    {
        for(i=0; i<10; i++)
        {
            sprintf(filename, "%s%d.txt", "file",i+1);
            
            if( ( fp[i] = fopen(filename, "w") ) == NULL )
            {
                printf("Error: File \"%s\" cannot be opened\n", filename);
                continue;
            }
            
            fprintf( fp[i], "Body %d: ", i);
        
            
            // Insira código aqui!!

        

            
       
            fclose(fp[i]);
        }
    }
    else
    {
        printf("Error: No enough memory\n");
        getchar();
        return 1;
    }
    
    free(fp);
    
    
    //  Insira código aqui também!!
   
    
    return 0;
}
