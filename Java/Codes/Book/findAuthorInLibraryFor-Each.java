public class Library {
    private Book[] books;

    public boolean findAuthorInLibrary(String author) {
        for (Book book : books) {
            if (book != null && book.getAuthor().equals(author)) {
                return true;
            }
        }
        return false;
    }
}
