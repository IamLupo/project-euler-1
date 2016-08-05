# project-euler

##How to be more productive on Project Euler 101

For the first 12 Project Euler problems my average problem resolution rate was 2 hours per problem using C++. I consider this ineffective since the difficulty level for these problems is 5%.

###The basic tools needed for resolving a problem are:
####A Browser
- Being logged in to check if your solution is correct at:
https://projecteuler.net/sign_in
This begs the question, is there a way to check solution in the command line?

- The problem itself, found at:
https://projecteuler.net/problem=problem_number_here
(Maybe a local databse/file of all project euler problems would also help here)

- Your favorite search engine for looking up any new mathematical concepts, starts with "Go", ends in "ogle".

####A command line
- Admitting you're pushing your work to github:
A machine that can both compile/execute your program and push your work directly to github from the command-line rather than via github.com

git clone https://github.com/username/reponame.git

cd reponame

git add -A

git commit -m "your comment on this commit here"

git push

####A start template file for a quick start
In my case, I do the following to get started:

mkdir probN

cp template.cpp probN/probN.cpp

vim probN.cpp

####A text editor
- Beyond vim, your favorite text/code editor for quick text processing (notepad++ for me)

####Conclusion
Avoiding the use of notepad++ would allow for split screen work without swapping between windows, even better would be to do it all in the command line/just one window.

###Resolution methodology
####Stay fresh
Get enough sleep, food and drink before coding. Maybe keep a little sweet snack and small glass of water to help your brain if it gets tired, try keep the snacks healthy though... If you are sick or feeling upset about something then it will severely affect your productivity so relax and take care of yourself!

####Solve the problem on a smaller scale
So you have to find the sum of the first trillion prime numbers? Do it for the first 5 instead and increment from there. If it's not working for smaller numbers then it won't work for larger ones either. 

####Solve the given hint yourself
Project Euler might tell you that the sum of the first 10 primes is 129, can your program also find this solution?

####Compile/Save/Execute often
Compiling/executing often allows to identify errors as you go as opposed to looking for an obscure typo you made 1 hour ago. Save your work often too, you never know what might happen.

####Write your code as if you were writing it for somebody else
Keep your code clean as you go: increment and space your code as you go so that it doesn't become a mess that you will struggle to read over once more. Consider that your code will always have a readership. Comment your code.

####Know your programming language
Know the specifics of your language without having to search for it on the internet. This willl save you lots of precious time. This is where a cheat sheet can come in handy.


