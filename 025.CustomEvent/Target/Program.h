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
#include "CustomEventClass.h"
#include <System/Console.h>

using namespace System;
namespace CustomEvent {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		private:
			void Run();
		private:
			void cec_customEvent(int a, float b);
		private:
			void cec_customEvent2(int a, float b);
	};
}
