.gitattributes
======

<https://github.com/github/linguist>



被下面属性标记为true的，github将不进行语言统计。

| .gitattributes属性分类   |            | 说明                                     | 举例                                    |
| ------------------------ | ---------- | ---------------------------------------- | --------------------------------------- |
| `linguist-language`      | 语言       | 将一种语言识别为另一种语言               | `*.rb linguist-language=Java`           |
| `linguist-vendored`      | 供应商代码 | 标记不是自己编写的供应商代码，如js库文件 | `jquery.js linguist-vendored`           |
| `linguist-generated`     | 生成的代码 |                                          |                                         |
| `linguist-documentation` | 文档       |                                          | `project-docs/* linguist-documentation` |
| `linguist-detectable`    | 可检测的   |                                          |                                         |

注意：

1. 等号前后是不能有空格的！
2. 对于  `jquery.js linguist-vendored=true`这种属性值为布尔值的，好像只有使用 `jquery.js linguist-vendored`这种形式才有用。



>## Overrides
>
>Linguist supports a number of different custom override strategies for language definitions and file paths.
>
>### Using gitattributes
>
>Add [a `.gitattributes` file](https://git-scm.com/docs/gitattributes) to your project and use standard git-style path matchers for the files you want to override using the `linguist-documentation`, `linguist-language`, `linguist-vendored`, `linguist-generated` and `linguist-detectable`attributes. `.gitattributes` will be used to determine language statistics and will be used to syntax highlight files. You can also manually set syntax highlighting using [Vim or Emacs modelines](https://github.com/github/linguist#using-emacs-or-vim-modelines).
>
>When testing with a local installation of Linguist, take note that the added attributes will not take effect until the `.gitattributes` file is committed to your repository.
>
>File and folder paths inside `.gitattributes` are calculated relative to the position of the `.gitattributes` file.
>
>```
># Example of a `.gitattributes` file which reclassifies `.rb` files as Java:
>*.rb linguist-language=Java
>```
>
>#### Vendored code
>
>Checking code you didn't write, such as JavaScript libraries, into your git repo is a common practice, but this often inflates your project's language stats and may even cause your project to be labeled as another language. By default, Linguist treats all of the paths defined in [`vendor.yml`](https://github.com/github/linguist/blob/master/lib/linguist/vendor.yml) as vendored and therefore doesn't include them in the language statistics for a repository.
>
>Use the `linguist-vendored` attribute to vendor or un-vendor paths:
>
>```
>special-vendored-path/* linguist-vendored
>jquery.js linguist-vendored=false
>```
>
>#### Documentation
>
>Just like vendored files, Linguist excludes documentation files from your project's language stats. [`documentation.yml`](https://github.com/github/linguist/blob/master/lib/linguist/documentation.yml) lists common documentation paths and excludes them from the language statistics for your repository.
>
>Use the `linguist-documentation` attribute to mark or unmark paths as documentation:
>
>```
>project-docs/* linguist-documentation
>docs/formatter.rb linguist-documentation=false
>```
>
>#### Generated code
>
>Not all plain text files are true source files. Generated files like minified JavaScript and compiled CoffeeScript can be detected and excluded from language stats. As an added bonus, unlike vendored and documentation files, these files are suppressed in diffs. [`generated.rb`](https://github.com/github/linguist/blob/master/lib/linguist/generated.rb) lists common generated paths and excludes them from the language statistics of your repository.
>
>Use the `linguist-generated` attribute to mark or unmark paths as generated.
>
>```
>Api.elm linguist-generated=true
>```
>
>#### Detectable
>
>Only programming languages are included in the language statistics. Languages of a different type (as defined in [`languages.yml`](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml)) are not "detectable" causing them not to be included in the language statistics.
>
>Use the `linguist-detectable` attribute to mark or unmark paths as detectable:
>
>```
>*.kicad_pcb linguist-detectable=true
>*.sch linguist-detectable=true
>tools/export_bom.py linguist-detectable=false
>```



举例：<https://github.com/github/linguist/issues/4590>

>1. Create a file named `.gitattributes` in the root of your project
>
>2. Add the following lines to the `.gitattributes` file:
>
>```
>/BibliotecaGames.Entities/* linguist-vendored=true
>/BibliotecaGames.BLL/* linguist-vendored=true
>```
>
>3. Modify a file in your project to force GitHub to detect the new `.gitattributes` file 