# Hello World

[中文说明](https://github.com/yansheng836/hello-world/blob/master/README.md)  [English](https://github.com/yansheng836/hello-world/blob/master/README-en.md)

这是我的第一个github仓库，我使用该仓库来熟悉github的工作流，尝试github的一些功能。在学习过程中会记录一些github的使用技巧。

---
## 各种语言的Hello World程序

来源：[24种编程语言的Hello World程序](https://www.runoob.com/w3cnote/hello-world-programs-of-24-programing-language.html)，详见：[HelloWorld-all文件夹](https://github.com/yansheng836/hello-world/blob/master/HelloWorld-all)

## Code of Conduct

[![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-v1.4%20adopted-ff69b4.svg)](code-of-conduct.md)

如果你想要参与贡献必要准遵守我们的[行为准则](code-of-conduct.md)；如果你发现有人违反该准则，可以通过[我的邮箱](yansheng0063@163.com)联系我。

## Contributing

Our goal is for this project to reflect community best practices, so we'd love your input! Got a question or an idea? Check out our [contributing guidelines](CONTRIBUTING.md) for ways to offer feedback and contribute.

## License

<div style="text-align:left"><img src="https://img.shields.io/github/license/yansheng836/hello-world.svg"/></div>

This software is licensed under the MIT License. [View the license](https://github.com/yansheng836/hello-world/blob/master/LICENSE).

## Github pages

2019年7月22日11:07:27 添加 

[https://yansheng836.github.io/hello-world/](https://yansheng836.github.io/hello-world/)

## .gitattributes--纠正项目语言显示

自动统计语言，将最多的语言作为该项目的语言（即个人仓库列表中显示的语言），这是github的一个特点，gitee就没有。

- 该仓库的语言识别（2019年9月6日）：
  项目主页：![nMjrpn.jpg](https://s2.ax1x.com/2019/09/06/nMjrpn.jpg)
  仓库列表显示：![nQSDET.jpg](https://s2.ax1x.com/2019/09/06/nQSDET.jpg)

- Bootstrap仓库的语言识别：
  ![nMzs1A.jpg](https://s2.ax1x.com/2019/09/06/nMzs1A.jpg)

如果你的github仓库的语言统计（显示/识别）有问题，例如你项目使用的主要的语言是HTML，但是因为你使用了[Bootstrap](https://github.com/twbs/bootstrap)框架（非CDN方式），默认情况下，github可能会识别到你的仓库中的JavaScript代码比较多，因此会将你的项目识别成一种不是你想要的语言(JavaScript)，那有没有办法进行”自定义“呢？github会告诉你：有！你可以通过`.gitattributes`文件强制github将项目语言识别成你想要的语言，具体介绍可参考：[github/linguist项目](https://github.com/github/linguist)，下面只是简单介绍。


> 需要注意的问题：

- 这些规则仅仅是为了github显示你想要的“项目语言显示棒”，但是不改变语言的属性。这样说你可能不太明白，就拿上面的例子来说：当你设置好`.gitattributes`文件对应的属性时，项目会显示为HTML，但是你点开语言前面的小点，会进到项目语言统计列表中，这里仍然会显示项目使用的各种文件，比如Bootstrap框架的CSS/JS文件。
- 这里只是说`.gitattributes`文件有这个功能，但是该文件的作用却远不止于此，详见：[git 官方 gitattributes文档(English)](https://git-scm.com/docs/gitattributes).


主要有5种类型的属性可以设置，github会读取你设置的属性值，然后有选择的识别某语言的显示。需要注意的是，关于语言的识别github是有一套默认的机制的，例如它会将一些有特征的文档文件（详见：[documentation.yml](https://github.com/github/linguist/blob/master/lib/linguist/documentation.yml)）识别为文档，不统计这种语言。更多默认设置可参考：<https://github.com/github/linguist/blob/master/lib/linguist/vendor.yml>。


因此如果你需要自定义，github的建议是`Override`，即重写(或者说是覆盖)默认的设置。


注：下表非官方文档，仅供参考。

| .gitattributes属性分类   | 分类         | 简单说明                                                     | 举例                                    |                                                              |
| ------------------------ | ------------ | ------------------------------------------------------------ | --------------------------------------- | ------------------------------------------------------------ |
| `linguist-language`      | 语言转化     | 将一种语言识别为另一种语言                                   | `*.rb linguist-language=Java`           | [`languages.yml`](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml) |
| `linguist-vendored`      | 供应(商)代码 | 标记供应商文件，把使用的库文件标记为供应商代码（即不是自己编写的），如jQuery库文件 | `jquery.js linguist-vendored`           | [`vendor.yml`](https://github.com/github/linguist/blob/master/lib/linguist/vendor.yml) |
| `linguist-generated`     | 生成的代码   | 标记一些生成的文件，如压缩的js默认被忽略                     | Api.elm linguist-generated=true         | [`generated.rb`](https://github.com/github/linguist/blob/master/lib/linguist/generated.rb) |
| `linguist-documentation` | 文档         | 标记一些文档                                                 | `project-docs/* linguist-documentation` | [`documentation.yml`](https://github.com/github/linguist/blob/master/lib/linguist/documentation.yml) |
| `linguist-detectable`    | 可检测的     | 标记某文件是否检测为语言，默认（各种常见语言）都可检测，为false时，不进行语言检测 | export_bom.py linguist-detectable=false | [`languages.yml`](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml) |

> 注意：

1. 等号前后是不能有空格的！如果文件`.gitattributes`文件有错误，git add 或者git commit 时会给出提示，github上面也会有相应提示。
2. 对于  `jquery.js linguist-vendored=true`这种属性值为布尔值的，好像只有使用 `jquery.js linguist-vendored`这种形式才有用。


举例：<https://github.com/github/linguist/issues/4590>

>1. Create a file named `.gitattributes` in the root of your project
>
>2. Add the following lines to the `.gitattributes` file:
>
>   ```
>   /BibliotecaGames.Entities/* linguist-vendored=true
>   /BibliotecaGames.BLL/* linguist-vendored=true
>   ```
>
>3. Modify a file in your project to force GitHub to detect the new `.gitattributes` file


github技巧推荐：

- <https://blog.csdn.net/u012702547/article/details/99543925>
- <https://www.cnblogs.com/iamzhanglei/p/6177961.html>

GitHub 词汇表:<https://help.github.com/cn/articles/github-glossary>

## docsify

> 一个神奇的文档网站生成器。

<https://docsify.js.org/#/zh-cn/>
