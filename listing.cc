// Name: Brian Mayfield
// File name: listing.cc
// Course: CMSC 430
// Date: February 19, 2023

// This file contains the bodies of the functions that produces the compilation listing
// imports
#include <cstdio>
#include <string>
using namespace std;
#include "listing.h"

// variables
static int lineNumber;
static string error = "";
static int totalErrors = 0;
static void displayErrors();

// void firstLine()
void firstLine()
{
    lineNumber = 1;
    printf("\n%4d", lineNumber);
}

// void nextLine()
void nextLine()
{
    displayErrors();
    lineNumber++;
    printf("%4d", lineNumber);
}

// int lastLine()
int lastLine()
{
    printf("\r");
    displayErrors();
    printf("\n");
    return totalErrors;
}

// void appendError()
void appendError(ErrorCategories errorCategory, string message)
{
    string messages[] = {"Lexical Error, Invalid Character", "",
    "Semantic Error", "Semantic Error, Duplicate Identifier: ",
    "Semantic Error, Undeclared "};
    error = messages[errorCategory] + message;
    totalErrors++;
}

// void displayErrors()
void displayErrors()
{
    if (error != "")
    printf("%s\n", error.c_str());
    error = "";
}