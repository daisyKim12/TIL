# Markdown

## Table of Contents
- [Headings](#headings)
- [Line Breaks](#line-breaks)
- [Emphasis](#emphasis)
- [Italic](#italic)
- [Blockquotes](#blockquotes)
- [Lists](#lists)
  - [Ordered List](#ordered-list)
  - [Unordered List](#unordered-list)
- [Horizontal Rules](#horizontal-rules)
- [Make Links](#make-links)
  - [External Links](#external-links)
  - [Internal Links](#internal-links)
- [Format Codes](#format-codes)
  - [Inline Code](#inline-code)
  - [Code Blocks](#code-blocks)
  - [Syntax Highlighting for Multiple Languages](#syntax-highlighting-for-multiple-languages)
  - [Show Backticks](#show-backticks)

## Headings
To create a heading, add number signs (#) in front of a word or phrase. And number of (#) will indecate heading level.

```
# Heading level 1
## Heading level 2
### Heading level 3
```

## Line Breaks
To create a line break or new line `<br>`, end a line with two or more spaces, and then type return.
```
<br>
```
```
end a line with two or more spaces.
```

## Emphasis
```
I just love **bold text**.
```
```
I just love __bold text__.
```

## Italic
```
Italicized text is the *cat's meow*.
```
```
Italicized text is the _cat's meow_.
```

## Blockquotes
```
> Dorothy followed her through many of the beautiful rooms in her castle.
```

## Lists
You can organize items into ordered and unordered lists. Using Markdown

### Ordered List
```
1. First item
2. Second item
3. Third item
4. Fourth item
```

### Unordered List
```
- First item
- Second item
- Third item
    - Indented item
    - Indented item
- Fourth item
```

## Horizontal Rules
```
---
```

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

### Syntax Highlighting for Multiple Languages:
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

## Line Break

