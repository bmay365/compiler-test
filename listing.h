// Name: Brian Mayfield
// File name: listing.h
// Course: CMSC 430
// Date: February 20, 2023

// This file contains the function prototypes for the functions that produce the compilation listing
// variables
enum ErrorCategories{LEXICAL, SYNTAX, GENERAL_SEMANTIC,
DUPLICATE_IDENTIFIER,
UNDECLARED};

// function prototypes
void firstLine();
void nextLine();
int lastLine();
void appendError(ErrorCategories errorCategory, string message);
