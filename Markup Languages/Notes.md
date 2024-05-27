# Markup Languages: HTML

## What is a Markup Language?

- A **markup language** is a system for annotating a document in a way that is syntactically distinguishable from the text.

- These annotations describe the document's structure and presentation.

## HTML (HyperText Markup Language)

- **HTML** is the standard markup language used to create web pages.

- It is used to structure content on the web and format text, images, and other multimedia.

### Basic Structure of an HTML Document

```html

<!DOCTYPE html>

<html>

<head>

    <title>Page Title</title>

</head>

<body>

    <h1>This is a Heading</h1>

    <p>This is a paragraph.</p>

</body>

</html>

```

### Key Components

1\. **DOCTYPE Declaration**: Defines the document type and HTML version (`<!DOCTYPE html>`).

2\. **HTML Element (`<html>`)**: The root element that wraps all content on the page.

3\. **Head Element (`<head>`)**: Contains meta-information about the document, such as the title and links to stylesheets.

4\. **Title Element (`<title>`)**: Sets the title of the webpage, displayed on the browser tab.

5\. **Body Element (`<body>`)**: Contains the actual content of the webpage, such as text, images, links, etc.

### Common HTML Tags

- **Headings**: `<h1>` to `<h6>` for different levels of headings.

- **Paragraph**: `<p>` for paragraphs of text.

- **Links**: `<a href="URL">` for hyperlinks.

- **Images**: `<img src="URL" alt="description">` for embedding images.

- **Lists**:

  - **Ordered List**: `<ol>` with `<li>` for list items.

  - **Unordered List**: `<ul>` with `<li>` for list items.

- **Tables**: `<table>`, `<tr>` (table row), `<th>` (table header), and `<td>` (table data) for creating tables.

### Attributes

- Attributes provide additional information about HTML elements.

- Example: `<img src="image.jpg" alt="An image">` 

  - `src`: Specifies the path to the image.

  - `alt`: Provides alternative text for the image.

### Forms

- Used to collect user input.

- Basic elements include `<form>`, `<input>`, `<textarea>`, `<button>`, `<select>`, and `<option>`.

```html

<form action="/submit-form" method="post">

    <label for="name">Name:</label>

    <input type="text" id="name" name="name">

    <input type="submit" value="Submit">

</form>

```

### Semantic HTML

- Uses elements that clearly describe their meaning in a human- and machine-readable way.

- Examples: `<article>`, `<section>`, `<nav>`, `<header>`, `<footer>`, `<aside>`, and `<main>`.

## Importance of HTML

- HTML is the backbone of all web content.

- It ensures content is structured correctly for accessibility and search engine optimization (SEO).

- Provides the foundation for CSS (Cascading Style Sheets) and JavaScript, which enhance the presentation and interactivity of web pages.

## Further Reading

- [MDN Web Docs: HTML](https://developer.mozilla.org/en-US/docs/Web/HTML)

- [W3Schools HTML Tutorial](https://www.w3schools.com/html/)

- [HTML Living Standard](https://html.spec.whatwg.org/)

```

Feel free to modify or expand these notes based on your specific needs.
