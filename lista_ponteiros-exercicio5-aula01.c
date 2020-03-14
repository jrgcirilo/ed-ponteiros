int main()
{
    

int i;
    
float media=0, *pmedia, nota[30];
    
pmedia=&media;

for(i=0;i<10;++i){
    	
scanf("%f",&nota[i]);                    
     
}
    
    
    

for(i=0;i<10;++i){
    	
*pmedia+=nota[i];                    
	 
}
    
    

*pmedia/= 10;
    
    

printf("A media e: %f\n",media);
printf("O endereco da media e: %d\n",&media);
printf("O endereco apontado pelo ponteiro e e: %d\n",pmedia);

}

