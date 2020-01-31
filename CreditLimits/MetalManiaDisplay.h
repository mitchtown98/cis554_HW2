//****************************************************************//
//	Author:				Jason Mitchell																	//
//	Course:				CIS 554-M401 Object Oriented Programming in C++	//
//	University:		Syracuse University															//
//	Reference:		HW #2 - Exercise 4.14 p150											//
//  Date:					01/29/2020																			//
//	Filename:			METALMANIADISPLAY.H															//
//	Synopsis:			Ascii art for fun																//
//																																//
//****************************************************************//
#pragma once
#include<iostream>

void displayTitle()
{
	std::cout << R"(
#**********************************************************#
#                  Welcome to Metal Mania                  #
#                  ======================                  #
#      "We know you are broke, so open a line of credit    #
#       and let's melt some faces.                         #
#                                                          #
#                                                          #
#      _                                                   #
#     / 7                                                  #
#    /_(      \m/ METAL YEAH.                              #
#    |_|                                                   #
#    |_|                                                   #
#    |_|                                                   #
#    |_| /\                                                #
#  /\|=|/ /                                                #
#  \ |_| /                                                 #
#   ) _  \                                                 #
#  / |_|  \                                                #
# /  -=-o /                                                #
# \  /~\_/                                                 #
#  \/              \mm/ TOO MUCH METAL FOR ONE HAND!       #
#                                                          #
#**********************************************************#
)";
}

