// ProjectTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <algorithm>

//Read Data
//open file with fstream
//void loadCourses(csv file, data structure)
//if file does not open
//print error
//else check each file line
//if less ten two parameters
//print missing information error
//void matchPrerequisite(Vector<Course> courses, String courseNumber) {
//	if course does not have prerequisite
//		return
//	else
//		call searchCourse for that prerequisite
//}
//Vector Data Structure
//Vector<Course>
//create course object struct
//set vector size to lines in the file
//while i is less then or equal to size
//add current line to vector
//
//Course Search
//Vector

//void searchCourse(Vector<Course> courses, String courseNumber) {
//
//	declare current variable and set equal to head node
//		for all courses
//			if the course is the same as courseNumber
//				print out the course information
//				for each prerequisite of the course
//					print the prerequisite course information
//					if course does not match courseNumber
//						check next node
//						if current node is tail node
//							print that course does not exist
//}
//Hash Table 
define HashTable<Course>
define node structure
define tableSize
declare int key

void searchCourse(HashTable<Course> courses, String courseNumber) {
	define key node
		if key node found and empty
			assign node to key
			if key node NOT found
				check next node
			else if node contains course
				Assign to next empty node
}

void loadCourse(HashTable<Course> courses, String courseNumber) {
	for each row in file
		set courseId
		set courseName
		if there is a prerequisite
			set prerequisite
			searchCourse()
}
//Binary Tree 
define BinaryTree<Course>
void searchCourse(Tree<Course> courses, String courseNumber)
set current node
while node is not null
if course id matches current
output course information
output prerequisite information(if it exists)
else if course id is lower than current
Set current to left node
else
set current to right node



int main()
{
	//Menu and Choice Selection 
	choice == 0;
		cout << Menu
		<< 1:Load Courses 
		<< 2 : Print All Courses 
		<< 3 : Print Selected Course 
		<< 9 : Exit Program
		while choice is not 9 :
			case 1:
				loadCourses(csv file, data structure)
			case 2:
			printSorted
			case 3:
			int course
			cin >> course
			printCourse(course)
			case 9:
				return;
			

}

