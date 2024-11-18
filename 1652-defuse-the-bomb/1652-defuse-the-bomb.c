int* decrypt(int* code, int codeSize, int k, int* returnSize){
    int* result=malloc(codeSize*sizeof(int));
    int n1,sum;
    if (k>0){
        for (int i=0;i<codeSize;i++){           
            for (int j=1;j<=k;j++){            
                n1=code[(i+j)%codeSize];        
                sum+=n1;
            }
            result[i]=sum;
            n1=0;                               
            sum=0;
        }
    }

    else if(k==0){
        for (int i=0;i<codeSize;i++)
            result[i]=0;                      
    }
    else{
        for (int i=0;i<codeSize;i++){
            for (int j=1;j<=abs(k);j++){
                n1=code[(i+codeSize-j)%codeSize];      
                sum+=n1;
            }
            result[i]=sum;
            n1=0;
            sum=0;
        }   
    }
    *returnSize=codeSize;
    return result;             
}