// Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30
/*
#include <iostream>
using namespace std;
bool test(int x, int y)
{
    return x == 30 || y == 30 || (x + y == 30);
}
int main()
{
    cout << test(20, 25) << endl;
    return 0;
}
*/

// Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.
/*
#include<iostream>
using namespace std;

bool test(int x){
  if (abs(x-100) <= 10 || abs(x-200) <= 10){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  cout<<test(103)<<endl;
}
*/

// Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
/*
#include<iostream>
using namespace std;

string test(string s){
  if (s.length() > 2 && s.substr(0, 2)=="if"){
    return s;
  }
  else{
    return "if " + s;
  }
}
int main(){
  cout<<test("if else")<<endl;
}
*/

// Write a C++ program to remove the character in a given position of a given string. The given position will be in the range 0..string length -1 inclusive.

/*
#include <iostream>

using namespace std;

string test(string str, int n)
        {
            return str.erase(n, 1);
        }

int main()
 {
  cout << test("Python", 1) << endl;
  cout << test("Python", 0) << endl;
  cout << test("Python", 4) << endl;
  return 0;
}
*/

// Write a C++ program to exchange the first and last characters in a given string and return the new string.

/*
#include <iostream>
using namespace std;

string test(string str)
        {
            return str.length() > 1
                ? str.substr(str.length() - 1) + str.substr(1, str.length() - 2) + str.substr(0, 1) : str;
        }

int main()
 {
  cout << test("abcd") << endl;
  cout << test("a") << endl;
  cout << test("xy") << endl;
  return 0;
}
*/

// Write a C++ program to create a new string with the last char added at the front and back of a given string of length 1 or more.

/*
#include <iostream>
using namespace std;

string test(string str){
  string s = str.substr(str.length()-1);
  return (s + str + s);
}

int main() {
  cout << test("Red") << endl;
  cout << test("Green") << endl;
  cout << test("1") << endl;
  return 0;
}
*/

// Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.

/*
#include <iostream>
using namespace std;

bool test(int x){
  return (x % 3 == 0) || (x % 7 == 0);
}
int main(){
  cout<<test(24)<<endl;
  cout<<test(16)<<endl;
  return 0;
}
*/

// Write a C++ program to check if one given temperatures is less than 0 and the other is greater than 100.

/*
#include <iostream>
using namespace std;

bool test(int temp1, int temp2){
  return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
}
int main(){
  cout<<test(120, -1)<<endl;
  cout<<test(-1, 200)<<endl;
}
*/

// Write a C++ program to check two given integers whether either of them is in the range 100, 200 inclusive.

/*
#include <iostream>
using namespace std;

bool test(int x, int y){
  return (x >= 100 && x <= 200) || (y >= 100 && y <= 200);
}

int main(){
  cout << test(100, 199) << endl;
  cout << test(250, 300) << endl;
  cout << test(105, 190) << endl;
  return 0;
}
*/

// Write a C++ program to check whether three given integer values are in the range 20, 50 inclusive. Return true if 1 or more of them are in the said range otherwise false.

/*
#include <iostream>
using namespace std;

bool test(int x, int y, int z)
        {
            return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
        }

int main()
 {
  cout << test(11, 20, 12) << endl;
  cout << test(30, 30, 17) << endl;
  cout << test(25, 35, 50) << endl;
  cout << test(15, 12, 8) << endl;
  return 0;
}
*/

// Write a C++ program to create a new string which is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.

/*
#include <iostream>
using namespace std;
string test(string str){
  return str.length() < 2 ? str:str.substr(0, 2) + str.substr(0, 2) + str.substr(0, 2) + str.substr(0, 2);
}
int main(){
  cout << test("C Sharp") << endl;
  cout << test("JS") << endl;
  cout << test("a") << endl;
  return 0;
}
*/

// Write a C++ program to create a new string with the last char added at the front and back of a given string of length 1 or more

/*
#include <iostream>
using namespace std;

string test(string str){
  string s = str.substr(str.length()-1);
  return s + str + s;
}
int main(){
  cout<<test("Red")<<endl;
  cout<<test("Green")<<endl;
  cout<<test("1")<<endl;
  return 0;
}
*/

// Write a C++ program to check if a string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.

/*
#include <iostream>
using namespace std;

string test(string str){
  return str.substr(1, 2) == "yt" ? str.erase(1, 2) : str;
}
int main(){
  cout<< test("python")<< endl;
  cout<< test("ytade")<< endl;
  cout<< test("jsues")<< endl;
  return 0;
}
*/

// Write a C++ program to check the largest number among three given integers.

/*
#include <iostream>
using namespace std;
int test(int x,int y, int z){
  int result = max(x, max(y, z));
  return result;
}
int main(){
  cout<<test(2, 3, 4)<<endl;
  cout<<test(1, 1, 1)<<endl;
}
*/

// Write a C++ program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.

/*
#include <iostream>
using namespace std;

int test(int x, int y){
  const int n = 100;
  int val = abs(x-n);
  int val2 = abs(y-n);
  if (val == val2){
    return 0;
  }
  else if (val > val2){
    return y;
  }
  else{
    return x;
  }
}
int main(){
  cout<<test(78, 95)<<endl;
  cout<<test(95, 95)<<endl;
}
*/

// Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.
/*
#include <iostream>
using namespace std;
bool test(int x, int y){
  return (x >= 40 && x <= 50 && y >= 40 && y <= 50) || (x >= 50 && x <= 60 && y >= 50 && y <= 60);
}
int main(){
  cout<<test(78, 95)<<endl;
  cout<<test(25, 35)<<endl;
  cout<<test(55, 60)<<endl;
  return 0;
}
*/

//Simple interest program

/*
#include<iostream>
using namespace std;

int main()
{
  int p,r,t,i;
    cout << "\n\n Calculate the Simple Interest :\n";
    cout << " -----------------------------------\n";
  cout<<" Input the Principle: ";
  cin>>p;
  cout<<" Input the Rate of Interest: ";
  cin>>r;
  cout<<" Input the Time: ";
  cin>>t;
  i=(p*r*t)/100;
  cout<<" The Simple interest for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<i;
        cout << endl;
  return 0;
}
*/

// Write a C++ program to check if two given non-negative integers have the same last digit.

/*
#include <iostream>
using namespace std;
bool test(int x, int y){
  return abs(x % 10) == abs(y % 10);
}
int main(){
  cout << test(45, 5) << endl;
  cout << test(43, 24) << endl;
}
*/

// Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".

/*
#include <iostream>
using namespace std;

int test(string s){
  int ctr_aa = 0;
  for (int i = 0; i < s.length()-1; i++){
    if (s.substr(i, 2) == "aa"){
    ctr_aa++;
    }
  }
  return ctr_aa;
}

int main(){
  cout << test("bbaaccaag") << endl;
  cout << test("jjkiaaasew") << endl;
  cout << test("JSaaakoiaa") << endl;
}
*/

// Write a C++ program to check if the first appearance of "a" in a given string is immediately followed by another "a".

/*
#include <iostream>
using namespace std;

bool test(string str){
  int counter = 0;
  for (int i = 0; i < str.length()-1; i++){
    if (str[i] == 'a'){
      counter++;
    }
    if (str.substr(i, 2) == "aa" && counter < 2){
      return true;
    }
    return false;
  }
}
int main(){
  cout<< test("caabb") << endl;
  cout<< test("babaaba") << endl;
}
*/

// Write a C++ program to create a new string made of every other character starting with the first from a given string.

/*
#include <iostream>
using namespace std;

string test(string s)
        {
           string result = " ";
            for (int i = 0; i < s.length(); i++)
             {
                 if (i % 2 == 0) result += s[i];
             }
            return result;
        }

int main()
 {
  cout << test("Python") << endl;
  cout << test("PHP") << endl;
  cout << test("JS") << endl;
  return 0;
}
*/

// Write a program in C++ to find the first 10 natural numbers.

/*
#include <iostream>
using namespace std;

int main(){
  int i;
  cout << "Find the first 10 natural numbers"<< endl;
  cout << "The natural numbers are: " << endl;
  for (i = 1; i <= 10; i++){
    cout << i << endl;
  }
}
*/

// Write a program in C++ to find the sum of first 10 natural numbers.

/*
#include <iostream>
using namespace std;
int main()
{
    int i,sum=0;
    cout << "\n\n Find the first 10 natural numbers:\n";
    cout << "---------------------------------------\n";
    cout << " The natural numbers are: \n";
    for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
    sum=sum+i;
    }
     cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
}
*/

// Write a program in C++ to display n terms of natural number and their sum.

/*
#include <iostream>
using namespace std;

int main(){
  int n, i, sum = 0;
  cout << "Enter the number of numbers for which the sum is to be calculated: "<< endl;
  cin >> n;
  cout<< "The natural numbers upto "<< n << "are " <<endl;
  for(i = 0; i <= n; i++){
    cout << i << " ";
    sum = sum + i;
  }
  cout<< "Sum of the given natural numbers are: "<< sum << endl;
}
*/

// Write a program in C++ to find the perfect numbers between 1 and 500.

/*

*/

// Write a program in C++ to check whether a number is prime or not:

/*
#include <iostream>
using namespace std;

int main(){
  int num1, ctr = 0;
  cout<<"Input the number to check whether the given number is a prime number or not: "<<endl;
  cin >> num1;
  for(int a = 1; a <= num1; a++){
    if(num1 % a == 0){
      ctr++;
    }
  }
  if (ctr == 2){
    cout<<"The entered number is a prime number"<< endl;
  }
  else{
    cout<<"The number is not a prime number"<<endl;
  }
}
*/

// Write a program in C++ to find prime number within a range.

/*

*/

// Write a C++ program to find the factorial of the given number:

/*
#include <iostream>
using namespace std;
int main(){
  int num1, factorial = 1;
  cout << "Input a number to find the factorial:"<<endl;
  cin>>num1;
  for (int a = 1; a <= num1; a++){
    factorial = factorial*a;
  }
  cout<< "The factorial of the given number is: "<< factorial<<endl;
  return 0;
}
*/

// Write a program in C++ to find the last prime number occur before the entered number.

/*
#include<iostream>
using namespace std;
int main()
{
 int num,count=0;
 cout<<"Enter number to find last prime number occurs before it: ";
 cin>>num;
  for( int a=num-1;a>=1;a--)
  {
   for(int b=2;b<a;b++)
      {
       if(a%b==0)
       count++;
       }
       if(count==0)
       {
      if(a==1)
       {
       cout<<"no prime number less than 2";
       break;
     }
      cout<<a<<" is the last prime number before entered number";
       break;
       }
       count=0;
}
return 0;
}
*/

// Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

/*
#include <iostream>
using namespace std;

int main(){
  int num1, num2, gcd;
  cout << "Input the first number: ";
  cin >> num1;
  cout<< "Input the second number: ";
  cin >> num2;

  for (int i = 1; i<=num1 && i<=num2; i++){
    if (num1 % i == 0 && num2 % i == 0){
      gcd = i;
    }
  }
  cout << "The greatest common divisor is : "<< gcd<<endl;
  return 0;
}
*/

// Write a program in C++ to find the sum of digits of a given number.

/*
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r, sum=0;
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    while (num1 > 0)
    {
        r = num1 % 10;
        num1 = num1 / 10;
        sum = sum + r;
    }
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;
}
*/

// Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.

/*
#include <iostream>
using namespace std;

bool test(int nums[], int arr_length){
  for (int i = 0; i < arr_length; i++){
    if (nums[i] == 1 && nums[i+1] == 2 && nums[i+2] == 3){
      return true;
    }
  }
  return false;
}
int main(){
  int arr_length;
  int nums1[] = {1, 1, 2, 3, 1};
  arr_length = sizeof(nums1)/sizeof(nums1[0]);
  cout<<test(nums1, arr_length)<<endl;
}
*/

// Write a C++ program to reverse a given string.

/*
#include <iostream>
#include <string>
using namespace std;

string reverse_string(string str){
  string temp_str = str;
  int index_pos = 0;

  for (int x = temp_str.length()-1; x >= 0; x--){
    str[index_pos] = temp_str[x];
    index_pos++;
  }
  return str;
}
int main(){
  cout<< reverse_string("aseesh");
}

*/

// Write a C++ program to change every letter in a given string with the letter following it in the alphabet(ie.a becomes b, p becomes q, z becomes a).

/*
#include <iostream>
#include <string>
using namespace std;

string change_letter(string str){
  int char_code;
  for (int x = 0; x < str.length(); x++){
    char_code = int(str[x]);
    if (char_code == 122){
      str[x] = char(99);
    }
    else if(char_code == 90){
      str[x] = char(65);
    }
    else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122){
      str[x] = char(char_code + 1);
    }
  }
  return str;
}

int main(){
  cout<< change_letter("w3schools")<<endl;
  cout<<change_letter("python")<<endl;
  return 0;
}
*/

// Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space.

/*
#include <iostream>
#include <string>
using namespace std;

string Capitalize_first_letter(string text){
  for (int x = 0; x < text.length(); x++){
    if (x == 0){
      text[x] == toupper(text[x]);
    }
    else if(text[x-1] == ' '){
      text[x] = toupper(text[x]);
    }
  }
  return text;
}

int main(){
  cout<<Capitalize_first_letter(" cpp string exercises");
  return 0;
}
*/

// Write a C++ program to find the largest word in a given string.

/*

*/

// Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.

/*
#include <iostream>
#include <string>
using namespace std;

string sort_characters(string text){
  bool flag;
  char ch;

  do{
    flag = false;
    for (int x = 0; x < text.length()-1; x++){
      if (text[x] > text[x+1]){
        ch = text[x];
        text[x] = text[x+1];
        text[x+1] = ch;
        flag = true;
      }
    }
  }
  while (flag);

  string str;

  for (int y = 0; y < text.length(); y++){
    if (text[y] != ' '){
      str.push_back(text[y]);
    }
  }
  return str;
}
int main(){
  cout << "Original text: python \nSorted text: ";
  cout << sort_characters("python") << endl;
  cout << "\nOriginal text: AaBb \nSorted text: ";
  cout << sort_characters("AaBb") << endl;
  cout << "\nOriginal text: the best way we learn anything is by practice and exercise questions \nSorted text: ";
  cout << sort_characters("the best way we learn anything is by practice and exercise questions") << endl;
  return 0;
}
*/

// Write a C++ program to count all the vowels in a given string.

/*
#include <iostream>
#include <string>
using namespace std;

int Vowel_Count(string text) {
  int ctr = 0;
  for(int i = 0; i < int(text.size()); i++){
    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
      ++ctr;
    if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
      ++ctr;
  }
  return ctr;

}

int main() {
        cout << "Original string: eagerer, number of vowels -> " << Vowel_Count("eagerer") << endl;
        cout << "\nOriginal string: eaglets, number of vowels -> " << Vowel_Count("eaglets") << endl;
        cout << "\nOriginal string: w3resource, number of vowels -> " << Vowel_Count("w3resource") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday., number of vowels -> ";
    cout << Vowel_Count("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}

*/

// Write a C++ program to count all the words in a given string.

/*
#include <iostream>
#include <string>
using namespace std;

int Word_count(string text){
  int ctr = 0;
  for (int x = 0; x < text.length(); x++){
    if (text[x] == ' '){
      ctr++;
    }
  }
  return ctr+1;
}

int main(){
  cout << "Original string: Python, number of words -> " << Word_count("Python") << endl;
        cout << "\nOriginal string: CPP Exercises, number of words -> " << Word_count("CPP Exercises") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday., \nnumber of words -> ";
    cout << Word_count("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}
*/

// Write a C++ program to check if a given string is a Palindrome or not.

/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char str[100];
        int i, length;
        int flag = 0;

        cout<<"\n Enter String : ";
        cin>>str;

        length = strlen(str);

        for(i=0;i < length ;i++)
        {
                if(str[i] != str[length-i-1])
                {
                        flag = 1;
                        break;
                }
        }
        if(flag)
        {
                cout<<" "<<str<<" is not a palindrome"<<endl;
        }
        else
        {
                cout<<" "<<str<< " is a palindrome"<<endl;
        }
        return 0;
}
*/

// You're given an integer N. Write a program to calculate the sum of all the digits of N.

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        while(n!=0)
        {
            int r = n%10;
            sum+= r;
            n /= 10;
        }

        cout<<sum<<endl;
    }

    return 0;
}
*/

// Write a C++ program to check the largest number among three given integers.

/*
#include <iostream>
using namespace std;

int test(int x, int y, int z){
  int result = max(x, max(y, z));
  return result;
}

int main(){
  cout<<test(1, 2, 4)<<endl;
}
*/

// Write a C++ program to compare two given strings and return the number of the positions where they contain the same length 2 substring.

/*
#include <iostream>
using namespace std;

int test(string str1, string str2){
  int ctr = 0;
  for (int i = 0; i < str1.length()-1; i++){
    string firstString = str1.substr(i, 2);
    for (int j = 0; j < str2.length()-1; j++){
      string secondString = str2.substr(j, 2);
      if (firstString == secondString){
        ctr++;
      }
    }
  }
  return ctr;
}

int main(){
  cout<<test("abcdefgh", "abijsklm")<<endl;
}
*/

// Create a new string from a given string where a specified character have been removed except starting and ending position of the given string.

/*
#include <iostream>
using namespace std;

string test(string str1, string c){
  for (int i = str1.length()-2; i > 0; i--){
    if (str1[i] == c[0]){
      str1 = str1.erase(i, 1);
    }
  }
  return str1;
}

int main(){
  cout<<test("xxHxix", "x") << endl;
  cout<<test("abxdddca", "a")<<endl;
}
*/

// Write a C++ program to create a new string of the characters at indexes 0,1, 4,5, 8,9 ... from a given string.

/*
#include <iostream>
using namespace std;

string test(string str1){
  string result = "";
  for (int i = 0; i < str1.length(); i = i+4){
    int c = i+2;
    int n = 0;
    n = n + c > str1.length() ? 1:2;
    result = result + str1.substr(i, n);
  }
  return result;
}

int main(){
  cout << test("Python") << endl;
  cout << test("HTML") << endl;
  return 0;
}
*/

// Write a C++ program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple

/*
#include <iostream>
using namespace std;

bool test(int nums[], int arr_length){
  int arra_len = arr_length - 1;
  int n = 0;
  for (int i = 0; i < arra_len; i++){
    n = nums[i];
    if (n == nums[i+1] && n == nums[i+2]){
      return true;
    }
  }
  return false;
}

int main(){
  int arr_length;
  int nums1[] = {1, 1, 2, 2, 1};
  arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl;
    int nums2[] = {1, 1, 2, 1, 2, 3};
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = {1, 1, 1, 2, 2, 2, 1};
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
}
*/

// Write a C++ program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30

/*
#include <iostream>
using namespace std;

int test(int a, int b){
  return a+b >= 10 && a+b <=20 ? 30 : a+b;
}
int main(){
  cout<<test(12, 17)<<endl;
  cout<<test(2, 17)<<endl;
  cout << test(22, 17) << endl;
  cout << test(20, 0) << endl;
  return 0;
}
*/

// Write a C++ program that accept two integers and return true if either one is 5 or their sum or difference is 5.

/*
#include <iostream>

using namespace std;

bool test(int x, int y)
        {
            return x == 5 || y == 5 || x + y == 5 || abs(x - y) == 5;
        }


int main()
 {
  cout << test(5, 4) << endl;
  cout << test(4, 3) << endl;
  cout << test(1, 4) << endl;
  return 0;
}

*/