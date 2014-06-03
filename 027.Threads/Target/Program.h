/***********************************************************************************

This code has been generated by AlterNative translator

Permission is hereby granted, free of charge, to any person obtaining a copy of this
code.

   contact: alejandro.albala@upc.edu
   web: http://alexalbala.github.io/Alter-Native/
   github: https://github.com/AlexAlbala/Alter-Native
   
AlterNative @ 2014

***********************************************************************************/

#pragma once
#include <System/System.h>
#include <System/Threading/Thread.h>
#include <System/Console.h>

using namespace System::Threading;
using namespace System;
namespace Threads {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		public:
			void Run();
		public:
			void target1();
		public:
			void target2();
	};
}
