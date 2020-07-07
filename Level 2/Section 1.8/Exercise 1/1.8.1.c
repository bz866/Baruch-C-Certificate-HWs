//Define the max length of the Description
#ifndef MAX_Description_len
#define MAX_Description_len 50
#endif

#include <stdio.h>
#include <string.h>

struct Article{
	int Article_Number;
	float Quantity;
	char Description[MAX_Description_len];
};

void Print(struct Article* article_ptr){
	/* 
	Print out contents within Article struct
	*/ 
	printf("The Article Number is: %d; \n", article_ptr->Article_Number);
	printf("The Quantity is: %.4f; \n", article_ptr->Quantity);
	printf("The Description is: %s; \n", article_ptr->Description);
}

int main(int argc, char const *argv[]){
	struct Article article_ptr;

	void Print(struct Article* article_ptr);

	//Initalize values in the article
	printf("Enter the article number as an int: \n");
	scanf("%d", &article_ptr.Article_Number);
	printf("Enter the Quantity as a float: \n");
	scanf("%f", &article_ptr.Quantity);
	printf("Enter the article descrition as string: \n");
	scanf("%s", article_ptr.Description);

	Print(&article_ptr); //Print out elements in the struct 
	return 0;
}
