public class Library {
    private Book[] books;

    public boolean findStartingAuthor(String startingAuthor) {
        for (Book book : books) {
            if (book != null && book.getAuthor().startsWith(startingAuthor)) {
                return true;
            }
        }
        return false;
    }
}
