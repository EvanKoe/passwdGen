# PASSWDGEN
This little program generates a random password of a given length, using the C language. It is used as follows :
  ./passwdGen [length (int)]

By default, length is set to 10. The minimal length is 2 (and you will get a bad security score...)
/!\ Note that the password will contain alphanumeric and special characters.

# RETURN VALUE
This program returns the security level of the generated password (in percent).

# FEATURES TO ADD
If you are interested to contribute, the following features could be interesting to make :
- options to include special characters or not,
- add a Makefile,
- save the generated password to the clipboard

Of course, if you have other ideas, do not hesitate to tell us !

# TO CONTRIBUTE
Of course, you can contribute to this project, but you'll have to follow those rules :
- using the snake_case for file, variable and function names,
- declare a function like this (brackets) : 
  ```c
    void function(void)
    {
      do_something();
    }
  ```
- using brackets for loops like this : 
  ```c
    if (a == b) {
      do_something();
    }
    
    for (int i = 0; i < 12; ++i) {
      do_something();
    }
  ```
  but you can, of course, use no brackets for a one-line statement :
  ```c
    if (a == b)
      one_line_statement();
  ```
- do not write more than 20 lines a function, and 5 functions a file,
- make understandable variable names
This coding style will make the code easier to understand to whoever wants to contribute. Thanks !
