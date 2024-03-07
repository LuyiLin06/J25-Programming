public class BookDetails {
  String title, author, isbn;
  int numberOfPages;
  boolean isKorean;

  public Book(){
    this.title = "Book";
    this.author = "Author X";
    this.numberOfPages = 0;
    this.inKorean = false;
    this.ibn = "XXXXXXXXXXXXX"
  }
  
  public Book (String title){
    this.title = title;
    this.author = "Author X";
    this.numberOfPages = 0;
    this.inKorean = false;
    this.ibn = "XXXXXXXXXXXXX";
  }

  public Book (String title, int numberOfPages){
    this.title = title;
    this.author = "Author X";
    this.numberOfPages = numberOfPages;
    this.inKorean = false;
    this.ibn = "XXXXXXXXXXXXX";
  }
}
