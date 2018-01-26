
# Linux Challenges

## 01_Getting_Started - 100 Points  
**Objective**: Login to your specified team server via SSH. If you're on a mac or linux machine, you can do this by opening up a terminal and using the ssh command.

If you are on a windows machine, you can use a tool like putty available at the link below.

<a href='/resources'>https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html</a>

Once logged in type <strong>ls</strong>, this will list the contents of the current directory you are in. If you'd like to see which directory you are currently in, your current working directory, type <strong>pwd</strong>. To change the directory you are in use the command <strong>cd</strong> to change your directory. Below is a list of common system navigation commands that can be used to roam the system.

As you have completed the first challenge simply by loging in, there should be a file already in your directory called flags.txt. When you complete a challenge, a new flag should appear within the flags.txt file within 60 seconds of completion. **  
**Difficulty**: Easy  
<details>
  <summary><strong>Flag</strong></summary>
	  W3lcom3ToTh3Jungl3.
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Here's a free hint for your first challenge. <i>(Everybody gets one)</i>

**Windows Users:**  
putty_screenshot.png  
**Mac/Linux Users:**  
unix_screenshot.png  
</details>

----------

## 02_Moving_In - 200 Points  
**Objective**: Add a rsa key for ssh authentication to your team server to make logging in more secure and convenient.  
**Difficulty**: Medium  
<details>
  <summary><strong>Flag</strong></summary>
	  LookM4NoP455WoRD5!
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Try this: <strong>man ssh-keygen</strong>
</details>

----------

## 03_Making_It_Your_Own - 300 Points  
**Objective**: Once logged into your server, by editing your bashrc, add a custom message that gets displayed on login for your user that reads:  

<strong>Welcome back! It is [date]</strong>  
			
Where <u>[date]</u> is the current system time and date. Your bashrc gets executed every time your user logs in. Using this file you can customize your shell, execute tasks on login, or add things like environment variables to your session.  
**Difficulty**: Medium  
<details>
  <summary><strong>Flag</strong></summary>
	  Wh4t4w4rmW3lcom3?
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  The system date and time can be found by using the command <strong>date</strong>
</details>

----------

## 04_Finding_Your_Way - 200 Points  
**Objective**: There is a file somewhere on the system with the name waldo, your job is to find waldo in the filesystem and then add the following text to the file:

<strong>"Found waldo!"</strong>  
**Difficulty**: Medium  
<details>
  <summary><strong>Flag</strong></summary>
	  ?NowWh3r3I5C4rm3n?
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  seek and you shall <strong>find</strong>
</details>

----------

## 05_Time_To_Explore - 200 Points  
**Objective**: There is a process listening on 127.0.0.1 on a port higher than 7000 and lower than 10000, find the listening port and then connect to it and say:
		
<strong>HELLO</strong>  
**Difficulty**: Medium  
<details>
  <summary><strong>Flag</strong></summary>
	  H3r3545tick3r4U?
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  run <strong>man netstat</strong>
</details>
<details>
  <summary><strong>Hint2</strong></summary>
	  look for the <i>'swiss army knife of networking'</i>
</details>

----------

## 06_Lucky_Number - 300 Points  
**Objective**: The service is thinking of a number between 1 and 1000, connect to it and send it your guess, if you're right the flag is yours! 
**Difficulty**: Medium  
<details>
  <summary><strong>Flag</strong></summary>
	  YouGu355edIt!1!11!
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Bash script something that could try <strong>for</strong> each number in the <strong>seq</strong>uence of 1 – 1000 on your behalf.
</details>

----------

## 07_Not_For_You_To_Know - 500 Points  
**Objective**: User admin has a flag.txt inside <strong>secret_docs</strong> in their in their home directory, find a permissions issue on the system that will allow you to read it from their home directory!
**Difficulty**: Hard  
<details>
  <summary><strong>Flag</strong></summary>
	  Th3y'llN3v3rF1ndTh3LoopHol3
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Only admin can read the files in secret docs, can you find a way to pretend to be admin?
</details>

----------

## 08_Im_Not_Who_I_Say_I_Am - 500 Points  
**Objective**: <strong>admin</strong> has written a clever little binary in c that can list the contents of a directory by running some commands on their behalf. 

Find the program and find a way to use it to instead become admin and then create a file named <strong>flag8.txt</strong> in <strong>/home/admin/secret_docs/</strong>  
**Difficulty**: Hard  
<details>
  <summary><strong>Flag</strong></summary>
	  Not5oCl3v3r4r3W3?
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Consider your <strong>ENV</strong>ironment
</details>