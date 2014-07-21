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
namespace ConsoleApplication1 {
	void Program::Main(Array<String>* args){
		String* b = new String("Hello");
		String* c = new String(" ");
		String* d = new String("World!");
		Array<String>* array = new Array<String>(3);
		array->SetData(0, b);
		array->SetData(1, c);
		array->SetData(2, d);
		String* a = String::Concat(array);
		Console::WriteLine(a);
	}

}
