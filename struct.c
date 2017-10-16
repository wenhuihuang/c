#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
void printBook(struct Books *book);
int main()
{
	struct Books book1;
	struct Books book2;

	//书1
	strcpy(book1.title, "c programming");
	strcpy(book1.author, "nuha ali");
	strcpy(book1.subject, "c programming tutorial");
	book1.book_id = 12321;

	//书2
	strcpy(book2.title,"js高级程序设计");


	/* printf("book1 书名:%s\n", book1.title);
	printf("book1 作者:%s\n", book1.author); */

	printBook(&book1);
	printBook(&book2);

	return 0;
}
void printBook(struct Books *book)
{
	printf("书名：%s\n",book->title);
}
