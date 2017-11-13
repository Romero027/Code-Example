#include<stdio.h>



struct Books {

   int   book_id;
};


int main(){
	struct Books book;
	struct Books *book2;
	book.book_id = 0;
	book2 = &book;
	//The following two will print the same address
	printf("%d\n",&book2->book_id);
	printf("%d\n",&((*book2).book_id));

	return 0;
}
