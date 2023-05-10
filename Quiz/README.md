# 🙋‍♂️ Quiz Game APP

## 💻 C Project GUI Apps 

This is a **C++ code for a quiz program** that asks questions with multiple choices and checks if the user's answer is correct. Here is an overview of how the code works:

The code defines a class called `Question` that contains a question text, three possible answers, and the correct answer number.

The code defines a function called `LoadQuestions` that creates a queue of 10 Question objects and initializes them with question text, answers, and correct answer numbers.

In the main program, the code initializes a queue of Question objects by calling LoadQuestions and sets the currentQuestion variable to the first question in the queue.

The program displays the question and its three possible answers on the screen.

When the user selects one of the answers, the program sets the selectedAnswer variable to the **corresponding number (1, 2, or 3)** using event handlers for the `radio button` changes.

When the user clicks the `Confirm button`, the program checks if the selected answer is correct by comparing it to the correct answer number in the **currentQuestion object**.

If the selected answer is correct, the program increments the points variable and displays the new score on the screen.

The program then retrieves the next question from the queue and displays it on the screen, or if the queue is empty, it disables the "Confirm" button and displays **"THE END"** message.

 
### 📺 The video of the QUiz APP :


[![Alt Text](https://img.youtube.com/vi/qEux5o_IemU/0.jpg)](https://www.youtube.com/watch?v=qEux5o_IemU)

#### 🔗 YouTube link : https://www.youtube.com/watch?v=qEux5o_IemU

Subscribe and Link the Channel.
      
🧑 Author : *Mohammed Shehsin Thamarachalil Abdulresak*
