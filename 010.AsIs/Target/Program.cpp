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
namespace AsIs {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->AsIsTest();
	}
	void Program::AsIsTest()
	{
		Person* p = new Person();
		Console::Write(new String("Person: "));
		Console::WriteLine(p->getName());
		Object* i = new John();
		Object* a = new Anne();
		Object* j = new Person();
		Console::WriteLine(new String("Cast to super class"));
		if (is_inst_of<Person*>(i)) {
			Person* _j = as_cast<Person*>(i);
			Console::WriteLine(_j->getName());
		}
		if (is_inst_of<Person*>(a)) {
			Person* _a = as_cast<Person*>(a);
			Console::WriteLine(_a->getName());
		}
		Console::WriteLine(new String("Cast to specific class"));
		if (is_inst_of<John*>(i)) {
			John* _j2 = as_cast<John*>(i);
			Console::WriteLine(_j2->getName());
		}
		if (is_inst_of<Anne*>(a)) {
			Anne* _a2 = as_cast<Anne*>(a);
			Console::WriteLine(_a2->getName());
		}
		if (is_inst_of<John*>(j)) {
			Console::WriteLine(new String("error"));
		}
	}

}
