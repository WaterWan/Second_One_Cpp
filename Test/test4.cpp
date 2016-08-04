#include<stdio.h>
int StringFind(const char *pSrc, const char *pDst) ;

int main(){  
	char * t = "1234flower";
	printf("%d", StringFind(t, "flowet"));
	getchar();
	return 0;
}  



int StringFind(const char *pSrc, const char *pDst)  
{  
    int i, j;  
    for (i=0; pSrc[i]!='\0'; i++)  
    {  
        if(pSrc[i]!=pDst[0])  
            continue;         
        j = 0;  
        while(pDst[j]!='\0' && pSrc[i+j]!='\0')  
        {  
            j++;  
            if(pDst[j]!=pSrc[i+j])  
            break;  
        }  
        if(pDst[j]=='\0')  
            return i;  
    }  
    return -1;  
}   
