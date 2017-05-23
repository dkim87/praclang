
class Book(object):
    """
    hello world!
    """

    def __init__(self, num, title, author):
        self.num = num
        self.title = title
        self.author = author

    def print_info(self):
        print("num / title / author = ", self.num , self.title , self.author)

def swap_book(book1, book2):
    tmp = book1.num
    book1.num = book2.num
    book2.num = tmp

def main():
    bk1 = Book(1, "Hello", "Deon")
    bk2 = Book(2, "World", "Kim")
    swap_book(bk1, bk2)
    bk1.print_info()
    bk2.print_info()

main()

