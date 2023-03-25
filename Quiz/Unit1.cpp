//---------------------------------------------------------------------------

#include <fmx.h>
#include<queue>
#include<iostream>
#include<cstring>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

using namespace std;

class Question{
	public:
	char* text_;
	char* answer1_;
	char* answer2_;
	char* answer3_;
	int correctans_;

	Question(){}
	Question(char* text,char* ans1,char* ans2,char* ans3,int corrans){
	text_=text;
	answer1_=ans1;
	answer2_=ans2;
	answer3_=ans3;
    correctans_=corrans;
}
};

std::queue<Question> LoadQuestions(){
Question q1=Question("What is the capital of France?","Paris","Madrid","Rome", 1);
Question q2=Question("What is the largest mammal in the world?","Elephant","Hippopotamus","Blue Whale", 3);
Question q3=Question("Which planet in our solar system is known for having a ring around it?","Saturn","Mars","Venus", 1);
Question q4=Question("Who is the author of 'To Kill a Mockingbird'?","Harper Lee","Mark Twain","William Shakespeare", 1);
Question q5=Question("What is the tallest mountain in the world?","K2","Mount Everest","Matterhorn", 2);
Question q6=Question("What is the smallest country in the world?","Monaco","Vatican City","Liechtenstein", 2);
Question q7=Question("What is the largest ocean in the world?","Atlantic Ocean","Indian Ocean","Pacific Ocean", 3);
Question q8=Question("What is the capital of Spain?","Lisbon","Barcelona","Madrid", 3);
Question q9=Question("Who is the founder of Microsoft?","Steve Jobs","Bill Gates","Jeff Bezos", 2);
Question q10=Question("What is the chemical symbol for gold?","Ag","Au","Cu", 2);

std::queue<Question> questions;
		 questions.push(q1);
		 questions.push(q2);
		 questions.push(q3);
		 questions.push(q4);
		 questions.push(q5);
		 questions.push(q6);
		 questions.push(q7);
		 questions.push(q8);
		 questions.push(q9);
		 questions.push(q10);

   return questions;
}


queue<Question> questions;
Question currentQuestion;
int selectedAnswer;
int points;


TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
questions=LoadQuestions();
currentQuestion=questions.front();


QuestionLabel->Text=currentQuestion.text_;
Answer1RadioButton->Text=currentQuestion.answer1_;
Answer2RadioButton->Text=currentQuestion.answer2_;
Answer3RadioButton->Text=currentQuestion.answer3_;
questions.pop();
PointLabel->Text=points;

}




void __fastcall TForm1::Answer1RadioButtonChange(TObject *Sender)
{
					  selectedAnswer=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Answer2RadioButtonChange(TObject *Sender)
{
					   selectedAnswer=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Answer3RadioButtonChange(TObject *Sender)
{
						selectedAnswer=3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConfirmButtonClick(TObject *Sender)
{
if(selectedAnswer==currentQuestion.correctans_){
   points++;
   PointLabel->Text=points;
		}

if(!questions.empty()){

currentQuestion=questions.front();


QuestionLabel->Text=currentQuestion.text_;
Answer1RadioButton->Text=currentQuestion.answer1_;
Answer2RadioButton->Text=currentQuestion.answer2_;
Answer3RadioButton->Text=currentQuestion.answer3_;
questions.pop();


Answer1RadioButton->IsChecked=false;
Answer2RadioButton->IsChecked=false;
Answer3RadioButton->IsChecked=false;

}else{
	ConfirmButton->Enabled=false;
	ConfirmButton->Text= "THE END";

}


}
//---------------------------------------------------------------------------

