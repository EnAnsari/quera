# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/710/

Operators = set(['+', '-', '*', '/', '(', ')', '^'])  # collection of Operators
Priority = {'+':1, '-':1, '*':2, '/':2, '^':3} # dictionary having priorities of Operators
 
 
def infixToPostfix(expression): 
    stack = [] # initialization of empty stack
    output = '' 
    for character in expression:
        if character not in Operators:  # if an operand append in postfix expression
            output+= character
        elif character=='(':  # else Operators push onto stack
            stack.append('(')
        elif character==')':
            while stack and stack[-1]!= '(':
                output+=stack.pop()
            stack.pop()
        else: 
            while stack and stack[-1]!='(' and Priority[character]<=Priority[stack[-1]]:
                output+=stack.pop()
            stack.append(character)
    while stack:
        output+=stack.pop()
    return output

expression = input()
print(infixToPostfix(expression))