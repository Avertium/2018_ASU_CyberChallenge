
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