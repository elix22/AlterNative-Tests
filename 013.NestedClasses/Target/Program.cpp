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
namespace NestedClasses {
	void Program::Main(Array<String>* args){
		ParentClass* p = new ParentClass();
		ParentClass::NestedClass1* n = new ParentClass::NestedClass1();
		ParentClass::NestedClass2* n2 = new ParentClass::NestedClass2();
		ParentClass::NestedClass2::NestedClass3* n3 = new ParentClass::NestedClass2::NestedClass3();
		p->f();
		n->f();
		n2->f();
		n3->f();
	}

}
