# Login And Register 

## GUI Application using C++ and RAD Studio


**It have 3 Forms : Main Form , Login Form ,Register Form **

## Main Form :

In the main form, there are **two buttons**, one for navigation to the `login form` and one for navigation to the `registration form`.

In the `login form`, the user is prompted to enter their **username and password**, which are then compared to the registered users in a file named **"RegistratedUser.txt". If the username and password match a registered user, a success message is displayed, otherwise an error message is displayed**.

In the `registration form`, the user is prompted to enter their **name, age, username, and password**. This information is then saved to the **"RegistratedUser.txt" file**.



### Login Form:

**This code is an implementation of a login form in C++ using the FireMonkey (FMX) framework.**

The `LoginForm` class has a constructor that initializes the form, and a method `LoginButtonClick` that is called when the user clicks the `"Login" button`. In this method, the code reads data from a file ***"RegistratedUser.txt"*** which contains the username and password information of the registered users. The file is read line by line, and each line is parsed using the `parseCommaDeLimitedString` function which returns a vector of strings obtained by splitting the input string using a comma as the delimiter.

The `parseCommaDeLimitedString` function takes a string as input and uses a stringstream to split it into substrings using the **','** delimiter. The substrings are stored in a vector of strings, which is returned as the output.

The `convertToCharPtr` function is a utility function that takes an `AnsiString` as input and returns a `const char*`. This function is used to convert the AnsiString objects obtained from the UI elements **(UsernameEdit and PasswordEdit)** to `const char*`, which can be used with the `strcmp` function to compare strings.

Inside the `LoginButtonClick` method, the code loops through each line of the file and compares the **username and password** of each registered user with the **username and password** entered by the user in the UI elements. If a match is found, the user is considered to be successfully logged in, and the status label is updated with a success message. If no match is found, an error message is displayed on the status label.
 
 
 
 ## Register Form :
 
 This code is for a simple registration form that saves user data to a text file when the **"Save"** button is clicked.

The `TMyRegistrationForm` class constructor and the form resources are declared at the top of the file. The `SaveButtonClick` method is the main function that is triggered when the **"Save"** button is clicked.

In this method, a **fstream object** is created and the **"RegistratedUser.txt"** file is opened in append mode. If the file is opened successfully, the user's data entered in the form is retrieved using the Text property of the corresponding `TEdit` objects.

The data is then written to the file in comma-separated format using the `<< operator` of the `fstream object`. The file is then closed and the form is closed using the **Close method** of the form.



### The video of the Login and Register Application :


[![Alt Text](https://img.youtube.com/vi/L6OZNIUz-T0/0.jpg)](https://www.youtube.com/watch?v=L6OZNIUz-T0)

#### YouTube link : https://www.youtube.com/watch?v=L6OZNIUz-T0.

Subscribe and Link the Channel.
      
Author : *Mohammed Shehsin Thamarachalil Abdulresak*
