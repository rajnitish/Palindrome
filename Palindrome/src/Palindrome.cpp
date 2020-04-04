//============================================================================
// Name        : Palindrome.cpp
// Author      : Ashutosh Kumar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
int i=0;
bool isPalindrome(char arr[], int n)
{
	if(i > n){ return true; }
	if(arr[i] != arr[n-1]){ return false ;}
	i++; n--;
	isPalindrome(arr, n);

}

int main()
{

	char arr[] = "ASHU-UHSA";
	cout<<isPalindrome(arr , sizeof(arr)-1);
	return 0; }

