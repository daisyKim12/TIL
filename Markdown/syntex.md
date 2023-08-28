# Markdown

## Table of Contents
- [Make Links](#make-links)
  - [External Links](#external-links)
  - [Internal Links](#internal-links)
- [Format Codes](#format-codes)
  - [Inline Code](#inline-code)
  - [Code Blocks](#code-blocks)
  - [Syntax Highlighting for Multiple Languages](#syntax-highlighting-for-multiple-languages)
  - [Show Backticks](#show-backticks)


## Make Links

### External Links
Markdown syntax for a hyperlink is square brackets followed by parentheses. The square brackets hold the text, the parentheses hold the link.
```
[Link text Here](https://link-url-here.org)
```

### Internal Links
`Internal link`: Internal Link(or anchor link) directs user from one section of the webpage to another section within the same webpage. It is important to use `relative path` to the page to link into.
```
[Link text Here](/guides/content/editing-an-existing-page)
```
```
[Make Links](#make-links)
```

## Format Codes

### Inline Code
wrap the code with backticks(`)
````
``Array.prototype.map()``
````

### Code Blocks
wrap the code with 3 backticks(`)
````
```
var add2 = function(number) {
  return number + 2;
}
```
````

### Syntex highlighting for mulitple language:
after wraping the code with three backticks append whick language the code is consist of
````
```html
<div class="row">
  <div class="col-md-6 col-md-offset-3">
    <h1>Hello World</h1>
  </div>
</div>
```
````

### Show backticks
To display triple backticks in a fenced code block, wrap them inside quadruple backticks.
`````
````
```
now you can see backticks
```
````
`````
