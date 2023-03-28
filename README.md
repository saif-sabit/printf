# Implementation of Printf in C

This is a simple implementation of the printf function in C. It is a project for ALX curriculum.

## Usage

The function is called `_printf` and it takes a format string and an arbitrary number of arguments. The format string is a string that contains zero or more directives. Each directive is introduced by a percent sign (`%`) and ends with a conversion specifier. The conversion specifier is a character that specifies the type of conversion to be applied. The `_printf` function writes output to stdout, the standard output stream.

The `_printf` function returns the number of characters printed (excluding the null byte used to end output to strings).

## Format Specifiers

The following conversion specifiers are supported:

Specifier | Output
--------- | ------
`c` | Character
`s` | String of characters
`%` | Percent sign
`d` | Signed decimal integer
`i` | Signed decimal integer
`b` | Unsigned binary
`u` | Unsigned decimal integer
`o` | Unsigned octal
`x` | Unsigned hexadecimal integer (lowercase)
`X` | Unsigned hexadecimal integer (uppercase)
`S` | String of non-printable characters (preceded by `\x`)
`p` | Pointer address
`r` | Reversed string
`R` | Rot13 string

## Compilation

The `_printf` function is compiled with the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c

a.out
```

## Example

```
_printf("Let's try to printf a simple sentence.\n");
_printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
```

## Output

```
Let's try to printf a simple sentence.
Character:[H]
String:[I am a string !]
```


## Authors

* **Asim S. Abdelgadir** - [Sudagoarth Co.Ltd](https://www.google.com/search?q=sudagoarth) - [ Twitter](https://twitter.com/asimsharf) - [Linkedin](https://www.linkedin.com/in/asimsharf/) - [Github](https://github.com/asimsharf) - [Facebook](https://www.facebook.com/asimsharf) - [Medium](https://medium.com/@asimsharf) 

* **Saif S. Sabit** - [ Twitter](https://twitter.com/saif-sabit) - [Linkedin](https://www.linkedin.com/in/saif-sabit/) - [Github](https://github.com/saif-sabit) - [Facebook](https://www.facebook.com/saif-sabit) - [Medium](https://medium.com/@saif-sabit)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* ALX School
* Stack Overflow
* C Programming Language
* The Linux Programming Interface

## Resources

* [Secrets of printf](https://www.cypress.com/file/54761/download)
* [Group Projects at ALX School](https://intranet.alxswe.com/concepts)
* [Project 0x11. C - printf](https://intranet.alxswe.com/projects/228)

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags).
