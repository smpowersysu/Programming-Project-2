# Programming-Project-2

The goal of this program is to create an algorithm that decodes bar codes of three different encoding schemes. These schemes are Simple Binary, Code 39, and Code 48. The scheme to be used will be decided by the user at the beginning of the program.

For simple binary code, the program will be able to read an odd integer between 1 and 21 representing the number of bars. It will read a number of characters equal to the number of bars. Wide bars will be represented by "w" and "1", and narrow bars will be represented by "n" and "0". The program will then convert the bar code into a number and output that number. The user will choose this type by inputting "1".

For Code 39, the program will read nine characters that are either "w" or "n" and decode the bars as appropriate. If the appropriate number of wide bars is recognized, the program will output the decoded number. If there are too many or too few wide bars, an error message will be displayed instead. The user will choose this type by inputting "2".

For Code 48, the program will read eight characters that are either "b" or "w" and decode the bars as appropriate. The program will output the decoded number if it recognizes that there are four black bars and four white bars. Otherwise, an error message will be displayed. The user will choose this type by inputting "3".

The program will prompt the user to input another code after it has decoded the previous code. The user can input "0" at this point to terminate the program.
