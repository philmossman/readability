#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//declare functions
int count_letters(string s);
int count_words(string s);
int count_sentences(string s);
int liau_index(double l, double w, double s);
string reading_grade(float i);

int main(void)
{
    //get text in the form of a string
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    int index = liau_index(letters, words, sentences);
    string grade = reading_grade(index);
    printf("%s", grade);
}

//define count_letters function
int count_letters(string s)
{
    int l = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        char c = s[i];
        if (isalpha(c))
        {
            l++;
        }
    }
    return l;
}

//define count_words function
int count_words(string s)
{
    int w = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        char c = s[i];
        if (isblank(c))
        {
            w++;
        }
    }
    return w + 1;
}

//define count_sentences function
int count_sentences(string s)
{
    int sen = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        char c = s[i];
        if (c == '.' || c == '!' || c == '?')
        {
            sen++;
        }
    }
    return sen;
}

//define liau_index function
int liau_index(double l, double w, double s)
{
    double L = ((l / w) * 100);
    double S = (s / w) * 100;
    double index = (L * 0.0588) - (S * 0.296) - 15.8;
    int round_index = round(index);
    return round_index;
}

//define reading_grade function
string reading_grade(float i)
{
    string g = 0;
    if (i < 1)
    {
        g = "Before Grade 1\n";
    }
    else if (i >= 1 && i < 2)
    {
        g = "Grade 1\n";
    }
    else if (i >= 2 && i < 3)
    {
        g = "Grade 2\n";
    }
    else if (i >= 3 && i < 4)
    {
        g = "Grade 3\n";
    }
    else if (i >= 4 && i < 5)
    {
        g = "Grade 4\n";
    }
    else if (i >= 5 && i < 6)
    {
        g = "Grade 5\n";
    }
    else if (i >= 6 && i < 7)
    {
        g = "Grade 6\n";
    }
    else if (i >= 7 && i < 8)
    {
        g = "Grade 7\n";
    }
    else if (i >= 8 && i < 9)
    {
        g = "Grade 8\n";
    }
    else if (i >= 9 && i < 10)
    {
        g = "Grade 9\n";
    }
    else if (i >= 10 && i < 11)
    {
        g = "Grade 10\n";
    }
    else if (i >= 11 && i < 12)
    {
        g = "Grade 11\n";
    }
    else if (i >= 12 && i < 13)
    {
        g = "Grade 12\n";
    }
    else if (i >= 13 && i < 14)
    {
        g = "Grade 13\n";
    }
    else if (i >= 14 && i < 15)
    {
        g = "Grade 14\n";
    }
    else if (i >= 15 && i < 16)
    {
        g = "Grade 15\n";
    }
    else if (i >= 16)
    {
        g = "Grade 16+\n";
    }
    return g;
}