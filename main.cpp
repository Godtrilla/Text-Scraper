//Del'Juan Jackson
//Intro to Programming
//Final
//File Inspector


#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

//Structure to hold Data File Content
struct wordPlay {
    string fileName;
    string selectedWords[100];
    int wordCount[100];
    float wordFrequency[100];
    string shortestWord = "abcdefghijklmnopqrstuvwxyz";
    string longestWord = "";
    float totalWordCount;
}; wordPlay starter, modestProposalStruct, apology, wizardOfOz, tomSawyer;


//Function to initialize counters
void initializer();

//Function to Count 100Words_M from 100 100Words_M file
void countwords();

//String Array Initializer
void stringInitializer();

//Function to find the shortest and longestword
void longWordFunc();

//Function to read occurences into Array
void wordCount();

//Function to calculate the frequencies
void wordFrequncy();

//Format to Output Function
void formatter(float numberOfWords, string name, string longest, string shortest);


//MODEST PROPOSAL PROTOTYPES
void longWordFunc2();
void wordCount2();
void wordFrequncy2();

//WIZARD OF OZ PROTOTYPES
void longWordFunc3();
void wordCount3();
void wordFrequncy3();

//TOM SAWYER PROTOTYPES
void longWordFunc4();
void wordCount4();
void wordFrequncy4();









int main() {
    
//Variables to Name each file
    modestProposalStruct.fileName = "A Modest Proposal";
    apology.fileName = "Apology_M";
    wizardOfOz.fileName = "The Wizard of Oz";
    tomSawyer.fileName = "Tom Sawyer";

//Choice input Variable
    int choice;


    //Output to User
    cout << "Hello!! It has been a long journey but we have finally made it!" << endl;
    cout << "Here, we have the FILE INSPECTOR!  We have 4 data files that are ready to be analyzed." << endl;
    cout << "Enter a number that corresponds to the file you will like to be analyzed." << endl;
    cout << "1: Title: A Modest Proposal Author: Jonathan Swift" << endl;
    cout << "2: Title: Apology_M Author: Plato" << endl;
    cout << "3: Title: The Wonderful Wizard of Oz Author: L. Frank Baum" << endl;
    cout << "4: Title: The Adventures of Tom Sawyer Author: Mark Twain" << endl;
    cout << "Enter 5 to exit program" << endl;
    cin >> choice;
    while (choice <1 || choice >= 6)
    {
        cout << "Please try your selection again" << endl;
        cin >> choice;
    }


    while(choice != 5)
    {


        //Modest Proposal Data Output and function calls
        if(choice == 1)
        {
            stringInitializer();
            initializer();
            countwords();
            longWordFunc();
            wordCount();
            wordFrequncy();

            formatter(modestProposalStruct.totalWordCount, modestProposalStruct.fileName, modestProposalStruct.longestWord
                    , modestProposalStruct.shortestWord);
            cout<<endl<<endl;


            cout << left << setw(15) << "100 Words" << setw(15) << "Occurences" << setw(15) << "Frequencies" << endl;


            for(int count = 0; count < 100; count++)
            {


                cout << left << setw(15) << starter.selectedWords[count]  << setw(15) << modestProposalStruct.wordCount[count]
                     << setw(15) << setprecision(4) << modestProposalStruct.wordFrequency[count] << endl;
            }
            modestProposalStruct.totalWordCount = 0;

            cout << endl<<endl;
            cout << "Enter a number that corresponds to the file you will like to be analyzed." << endl;
            cout << "1: Title: A Modest Proposal Author: Jonathan Swift" << endl;
            cout << "2: Title: Apology_M Author: Plato" << endl;
            cout << "3: Title: The Wonderful Wizard of Oz Author: L. Frank Baum" << endl;
            cout << "4: Title: The Adventures of Tom Sawyer Author: Mark Twain" << endl;
            cout << "Enter 5 to exit program" << endl;
            cin >> choice;

        }


//Apology_M Data File Output and Function Calls
        else if (choice == 2)
        {
            stringInitializer();
            initializer();
            countwords();
            longWordFunc2();
            wordCount2();
            wordFrequncy2();

            formatter(apology.totalWordCount, apology.fileName, apology.longestWord
                    , apology.shortestWord);
            cout<<endl<<endl;


            cout << left << setw(15) << "100 Words" << setw(15) << "Occurences" << setw(15) << "Frequencies" << endl;


            for(int count = 0; count < 100; count++)
            {


                cout << left << setw(15) << starter.selectedWords[count]  << setw(15) << apology.wordCount[count]
                     << setw(15) << setprecision(4) << apology.wordFrequency[count] << endl;
            }

            apology.totalWordCount = 0;

            cout << endl<<endl;
            cout << "Enter a number that corresponds to the file you will like to be analyzed." << endl;
            cout << "1: Title: A Modest Proposal Author: Jonathan Swift" << endl;
            cout << "2: Title: Apology_M Author: Plato" << endl;
            cout << "3: Title: The Wonderful Wizard of Oz Author: L. Frank Baum" << endl;
            cout << "4: Title: The Adventures of Tom Sawyer Author: Mark Twain" << endl;
            cout << "Enter 5 to exit program" << endl;
            cin >> choice;
        }


//Wizard Of Oz Data Output and Function Calls
        else if (choice == 3)
        {
            stringInitializer();
            initializer();
            countwords();
            longWordFunc3();
            wordCount3();
            wordFrequncy3();

            formatter(wizardOfOz.totalWordCount, wizardOfOz.fileName, wizardOfOz.longestWord
                    , wizardOfOz.shortestWord);
            cout<<endl<<endl;


            cout << left << setw(15) << "100 Words" << setw(15) << "Occurences" << setw(15) << "Frequencies" << endl;


            for(int count = 0; count < 100; count++)
            {


                cout << left << setw(15) << starter.selectedWords[count]  << setw(15) << wizardOfOz.wordCount[count]
                     << setw(15) << setprecision(4) << wizardOfOz.wordFrequency[count] << endl;
            }
            wizardOfOz.totalWordCount = 0;

            cout << endl<<endl;
            cout << "Enter a number that corresponds to the file you will like to be analyzed." << endl;
            cout << "1: Title: A Modest Proposal Author: Jonathan Swift" << endl;
            cout << "2: Title: Apology_M Author: Plato" << endl;
            cout << "3: Title: The Wonderful Wizard of Oz Author: L. Frank Baum" << endl;
            cout << "4: Title: The Adventures of Tom Sawyer Author: Mark Twain" << endl;
            cout << "Enter 5 to exit program" << endl;
            cin >> choice;
        }

//Tom Sawyer Data Output and Function Calls
        else
        {
            stringInitializer();
            initializer();
            countwords();
            longWordFunc4();
            wordCount4();
            wordFrequncy4();

            formatter(tomSawyer.totalWordCount, tomSawyer.fileName, tomSawyer.longestWord, tomSawyer.shortestWord);
            cout<<endl<<endl;



            cout << left << setw(15) << "100 Words" << setw(15) << "Occurences" << setw(15) << "Frequencies" << endl;

            for(int count = 0; count < 100; count++)
            {


                cout << left << setw(15) << starter.selectedWords[count]  << setw(15) << tomSawyer.wordCount[count]
                     << setw(15) << setprecision(4) << tomSawyer.wordFrequency[count] << endl;
            }
            tomSawyer.totalWordCount = 0;

            cout << endl<<endl;
            cout << "Enter a number that corresponds to the file you will like to be analyzed." << endl;
            cout << "1: Title: A Modest Proposal Author: Jonathan Swift" << endl;
            cout << "2: Title: Apology_M Author: Plato" << endl;
            cout << "3: Title: The Wonderful Wizard of Oz Author: L. Frank Baum" << endl;
            cout << "4: Title: The Adventures of Tom Sawyer Author: Mark Twain" << endl;
            cout << "Enter 5 to exit program" << endl;
            cin >> choice;
        }



    }



    return 0;
}







void formatter(float numberOfWords, string name, string longest, string shortest)
{
    cout << "Datafile Name: " << name << endl;
    cout << "Total Word Count is " << setprecision(8) << numberOfWords << endl;
    cout << "The shortest word is " << shortest << endl;
    cout << "The longest word is " << longest << endl;


}


void initializer()
{
    for(int counter = 0; counter < 100; counter++)
    {
        starter.wordCount[counter] = 0;
        starter.wordFrequency[counter] = 0;

        modestProposalStruct.wordCount[counter] = 0;
        modestProposalStruct.wordFrequency[counter] = 0;

        apology.wordCount[counter] = 0;
        apology.wordFrequency[counter] = 0;

        wizardOfOz.wordCount[counter] = 0;
        wizardOfOz.wordFrequency[counter] = 0;

        tomSawyer.wordCount[counter] = 0;
        tomSawyer.wordFrequency[counter] = 0;
    }
    starter.totalWordCount = 0;
    modestProposalStruct.totalWordCount = 0;
    apology.totalWordCount = 0;
    wizardOfOz.totalWordCount = 0;
    tomSawyer.totalWordCount = 0;




}


void countwords()
{
    ifstream fin;
    fin.open("/Users/DeeDee/CLionProjects/untitled4/100Words_M");
    string word;
    while(fin >> word)
    {
        starter.totalWordCount++;

    }

    fin.close();

}


void stringInitializer()
{
    ifstream infile;
    infile.open("/Users/DeeDee/CLionProjects/untitled4/100Words_M");
    string word;
    int index = 0;
    while(infile >> word) {



        starter.selectedWords[index] = word;
        index++;


    }
    infile.close();

}

//MODEST PROPOSAL FUNCTIONS****************

void longWordFunc()

{
    ifstream infile;
    infile.open("/Users/DeeDee/CLionProjects/untitled4/ModestProposal_M");
    string word;
    while(infile >> word)
    {

        if(word.length()  > modestProposalStruct.longestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);

        }
        modestProposalStruct.totalWordCount++;

        if(word.length()  < modestProposalStruct.shortestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            modestProposalStruct.shortestWord = word;
        }

    }
    infile.close();
}




void wordCount()
{
    ifstream fin;
    fin.open("/Users/DeeDee/CLionProjects/untitled4/ModestProposal_M");
    string word;

    while(fin >> word)
    {
        for(int index = 0; index < 100; index++)
        {

            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);

            if(starter.selectedWords[index] == word)
            {
                modestProposalStruct.wordCount[index] += 1;


            }

        }

    }

    fin.close();

}

void wordFrequncy()
{
    for(int index = 0; index < 100; index++)
    {
        modestProposalStruct.wordFrequency[index] = modestProposalStruct.wordCount[index] / modestProposalStruct.totalWordCount;
    }
}


//APOLOGY FUNCTIONS*****************

void longWordFunc2()

{
    ifstream infile;
    infile.open("/Users/DeeDee/CLionProjects/untitled4/Apology_M");
    string word;
    while(infile >> word)
    {

        if(word.length()  > apology.longestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            apology.longestWord = word;

        }
        apology.totalWordCount++;

        if(word.length()  < apology.shortestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            apology.shortestWord = word;
        }

    }
    infile.close();
}




void wordCount2()
{
    ifstream fin;
    fin.open("/Users/DeeDee/CLionProjects/untitled4/Apology_M");
    string word;

    while(fin >> word)
    {
        for(int index = 0; index < 100; index++)
        {

            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);

            if(starter.selectedWords[index] == word)
            {
                apology.wordCount[index] += 1;


            }

        }

    }

    fin.close();

}

void wordFrequncy2()
{
    for(int index = 0; index < 100; index++)
    {
        apology.wordFrequency[index] = apology.wordCount[index] / apology.totalWordCount;
    }
}


//WIZARD OF OZ FUNCTIONS*********************
void longWordFunc3()

{
    ifstream infile;
    infile.open("/Users/DeeDee/CLionProjects/untitled4/WizardOfOz_M");
    string word;
    while(infile >> word)
    {

        if(word.length()  > wizardOfOz.longestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            wizardOfOz.longestWord = word;

        }
        wizardOfOz.totalWordCount++;

        if(word.length()  < wizardOfOz.shortestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            wizardOfOz.shortestWord = word;
        }

    }
    infile.close();
}




void wordCount3()
{
    ifstream fin;
    fin.open("/Users/DeeDee/CLionProjects/untitled4/WizardOfOz_M");
    string word;

    while(fin >> word)
    {
        for(int index = 0; index < 100; index++)
        {

            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);

            if(starter.selectedWords[index] == word)
            {
                wizardOfOz.wordCount[index] += 1;


            }

        }

    }

    fin.close();

}

void wordFrequncy3()
{
    for(int index = 0; index < 100; index++)
    {
        wizardOfOz.wordFrequency[index] = wizardOfOz.wordCount[index] / wizardOfOz.totalWordCount;
    }
}

//TOM SAWYER FUNCTIONS********************

void longWordFunc4()

{
    ifstream infile;
    infile.open("/Users/DeeDee/CLionProjects/untitled4/Tom Sawyer");
    string word;
    while(infile >> word)
    {

        if(word.length()  > tomSawyer.longestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            tomSawyer.longestWord = word;

        }
        tomSawyer.totalWordCount++;

        if(word.length()  < tomSawyer.shortestWord.length())
        {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            tomSawyer.shortestWord = word;
        }

    }
    infile.close();
}




void wordCount4()
{
    ifstream fin;
    fin.open("/Users/DeeDee/CLionProjects/untitled4/Tom Sawyer");
    string word;

    while(fin >> word)
    {
        for(int index = 0; index < 100; index++)
        {

            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
            transform(word.begin(), word.end(), word.begin(), ::tolower);

            if(starter.selectedWords[index] == word)
            {
                tomSawyer.wordCount[index] += 1;


            }

        }

    }

    fin.close();

}

void wordFrequncy4()
{
    for(int index = 0; index < 100; index++)
    {
        tomSawyer.wordFrequency[index] = tomSawyer.wordCount[index] / tomSawyer.totalWordCount;
    }
}
