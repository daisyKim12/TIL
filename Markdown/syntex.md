# Markdown

## Table of Contents
* Make Links
* Format Cods



## Make Links
Markdown syntax for a hyperlink is square brackets followed by parentheses. The square brackets hold the text, the parentheses hold the link.
```
[Link text Here](https://link-url-here.org)
```

### Internal Links


### External Links


### Linking to an Internal Page Heading


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
