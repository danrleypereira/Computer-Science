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
    
    
    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%lf",&bodies[i].p[j]);
            scanf("%lf",&bodies[i].v[j]);
            scanf("%lf",&bodies[i].a[j]);
            
        }
        scanf("%lf",&bodies[i].radius);
        scanf("%lf",&bodies[i].mass);
    }
    
    
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
            
            
            for(j=0; j<3; j++)
            {
                fprintf( fp[i], "%.1lf ", bodies[i].p[j]);
                fprintf( fp[i], "%.1lf ", bodies[i].v[j]);
                fprintf( fp[i], "%.1lf ", bodies[i].a[j]);
            }
            
            fprintf( fp[i], "%.1lf ", bodies[i].radius);
            
            
            fprintf( fp[i], "%.1lf ", bodies[i].mass);
            
            
            
            
            
            fclose(fp[i]);
        }
    }
    else
    {
        printf("Error: No enough memory\n");
        getchar();
        return 1;
    }
    
    //free(fp);
    
    
    //fp = malloc( sizeof(FILE *) * 10);
    
    if( fp != NULL )
    {
        for(i=9; i>=0; i--)
        {
            sprintf(filename, "%s%d.txt", "file",i+1);
            
            if( ( fp[i] = fopen(filename, "r") ) == NULL )
            {
                printf("Error: File \"%s\" cannot be opened\n", filename);
                continue;
            }
            
            if( fgets (str, 600, fp[i])!=NULL )
            {
                
                printf("%s",str);
                printf("\n");
            }
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
    
    
    
    return 0;
}
