/***********************************************************************************

This code has been generated by AlterNative translator

Permission is hereby granted, free of charge, to any person obtaining a copy of this
code.

   contact: alejandro.albala@upc.edu
   web: http://alexalbala.github.io/Alter-Native/
   github: https://github.com/AlexAlbala/Alter-Native
   
AlterNative @ 2014

***********************************************************************************/

#include "Program.h"
using namespace System;
using namespace Covariance;

int main(int argc, char *argv[])
{
	GC::Init();
	String *args = new String[argc];
	for(int i = 0; i < argc; i++)
		args[i] = argv[i];
	Program::Main(&args);
	GC::Collect();
}