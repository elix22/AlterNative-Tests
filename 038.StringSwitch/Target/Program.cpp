/***********************************************************************************
          _ _            _   _       _   _           
    /\   | | |          | \ | |     | | (_)          
   /  \  | | |_ ___ _ __|  \| | __ _| |_ ___   _____ 
  / /\ \ | | __/ _ \ '__| . ` |/ _` | __| \ \ / / _ \
 / ____ \| | ||  __/ |  | |\  | (_| | |_| |\ V /  __/
/_/    \_\_|\__\___|_|  |_| \_|\__,_|\__|_| \_/ \___|
-----------------------------------------------------

This code has been generated by AlterNative translator

Permission is hereby granted, free of charge, to any person obtaining a copy of this
code.

   contact: alejandro.albala@upc.edu
   web: http://alexalbala.github.io/Alter-Native/
   github: https://github.com/AlexAlbala/Alter-Native
   
AlterNative @ 2014

***********************************************************************************/

#include "Program.h"
namespace StringSwitch {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->LessThan6CasesSwitch(new String("case1"));
		p->LessThan6CasesSwitch(new String("case3"));
		p->LessThan6CasesSwitch(new String("case5"));
		p->MoreThan6CasesSwitch(new String("case2"));
		p->MoreThan6CasesSwitch(new String("case4"));
		p->MoreThan6CasesSwitch(new String("case6"));
	}
	void Program::LessThan6CasesSwitch(String* s)
	{
		if (s != null) {
			if (*s == *(new String("case1"))) {
				Console::WriteLine(new String("This is the case 1"));
				return;
			}
			if (*s == *(new String("case2"))) {
				Console::WriteLine(new String("This is the case 2"));
				return;
			}
			if (*s == *(new String("case3"))) {
				Console::WriteLine(new String("This is the case 3"));
				return;
			}
			if (*s == *(new String("case4"))) {
				Console::WriteLine(new String("This is the case 4"));
				return;
			}
		}
		Console::WriteLine(new String("Default case"));
	}
	void Program::MoreThan6CasesSwitch(String* s)
	{
		switch (s10736577.parseString(s)) {
			case s10736577_labels::case1:
				Console::WriteLine(new String("This is the case 1"));
				return;

			case s10736577_labels::case2:
				Console::WriteLine(new String("This is the case 2"));
				return;

			case s10736577_labels::case3:
				Console::WriteLine(new String("This is the case 3"));
				return;

			case s10736577_labels::case4:
				Console::WriteLine(new String("This is the case 4"));
				return;

			case s10736577_labels::case5:
				Console::WriteLine(new String("This is the case 5"));
				return;

			case s10736577_labels::case6:
				Console::WriteLine(new String("This is the case 6"));
				return;

			case s10736577_labels::case7:
				Console::WriteLine(new String("This is the case 7"));
				return;
		}
		Console::WriteLine(new String("Default case"));
	}

}
