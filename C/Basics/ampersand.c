#include<stdio.h>



struct Books {

   int   book_id;
};


int main(){
	struct Books book;

	book.book_id = 0;
	printf("%d\n",book.book_id);
	return 0;
}
