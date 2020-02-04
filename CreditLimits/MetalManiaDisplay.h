//****************************************************************//
//	Author:		Jason Mitchell									  //
//	Course:		CIS 554-M401 Object Oriented Programming in C++	  //
//	University:	Syracuse University								  //
//	Reference:  HW #2 - Exercise 4.14 p150						  //
//  Date:		01/29/2020										  //
//	Filename:	METALMANIADISPLAY.H								  //
//	Synopsis:	Ascii art for fun								  //
//																  //
//****************************************************************//
#pragma once
#include<iostream>

/**
* A little art to display at Startup
* Source: Charlie Weaver : guitar
* Paul Desjarlais : bass guitar
* Bob Allison : amp and speaker
* Bob Allison : compilation
* https://asciiart.website/index.php?art=music/musical%20instruments
*/
void displayTitle()
{
	std::cout << R"(
  __  __     _        _   __  __           _      
 |  \/  |___| |_ __ _| | |  \/  |__ _ _ _ (_)__ _ 
 | |\/| / -_)  _/ _` | | | |\/| / _` | ' \| / _` |
 |_|  |_\___|\__\__,_|_| |_|  |_\__,_|_||_|_\__,_|
                                        _
                                      /   )
                                     @| ?\
       ._-_.    _____________________@| ?\\
      +|\G/|+  | ____________________@| ?\\\
      +|\./|+  || O  o o o  =|=  |  =@| ?\\\\
      +|\./|+  || O  o o o   |  =|=  | -- ====
       `|H|'   ||______________________||\ \\\
        |a|    |________________________| \ \\\
        |H|    ||MM88MM<<<?<<<XHHHHMMMM||  \ \\\
        |a|    ||M88MM<<<?<<<XHHHMMMMMM||   \ \\\
        |H|    ||88MM<<<?<<<XHHHMMMMMMM||    \ \\\
        |a|    ||8MM<<<?<<<XHHHHMMMMMMM||     \ \\\
        |H|    ||MM<<<?<<<XHHHHMMMMMMMM||      \ \\\
        |H|    ||M<<<?<<<XHHHHMMMMMMMMM||       \ \\\
  _-_   |H|   _-_<<<?<<<XHHHHMMMMMMMMMM||        \ \\\
 /   \  |H|  /   \<?<<<XHHHHMMMMMMMMMMM||         \ \\\
 |    \_|a|_/    |?<<<XHHHHMMMMMMMMMMMM||          \ \\\
 \      |H|      /<<<XHHHHMMMMMMMMMMMMR||    =_     \ \\\   _
  \     |H|     /<<<XHHHHMMMMMMMMMMMRMM||   || |     \ \\\  ||\
   |    '"'    |<<<XHHHHMMMMMMMMMMMRMM8||   | | \   // \\\\ /  \
  /     ===     \<XHHHHMMMMMMMMMMMRMM8R||    | |  \-    \\\\   |
 /      ===   !  \HHHHMMMMMMMMMMMRMM8RM||     \ \       \\\\\\ \
|             | o |HMMMMMMMMMMMMMM988MM||        \\       \\\\  \
|      +---+ /  o |MMMMMMMMMMMMMM988MM<||          \\      \\\\   \
\       ___ /  o  /M/MMMMMRMMMRMM88MM<<||           \ \     \\\\     \
 \     |HHH|    l/MMMMMMMRMMMRMM88MM<<<||           | |     \\\\\\     \
  `-_   \_/   _-MMRMMMMMRMMMRMM88MM<<<?||           | |       \\\\   (O \
     """"""""' ~~~V~~""~~~~~~~~~~~~~~V~~~           \ \      <o=====o    |
                                                     \ \              (O |
"Welcome to Metal Mania"                              \\                /
 Open an in store credit account and let's              \\_            /
 start melting some faces!                                  --_______--
)";
	std::cout << std::endl; 
}

