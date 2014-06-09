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

#pragma once
#include <System/System.h>
#include <System/Delegate.h>
#include <System/Console.h>

using namespace System;
namespace CustomEvent {
	class CustomEventClass : public virtual Object
	{
		public:
			DELEGATE(void, int, float) CustomEventHandler;
		private:
			CustomEventClass::CustomEventHandler* myPrivateEvent;
		public:
			void addcustomEvent(CustomEventClass::CustomEventHandler* value);
		public:
			void removecustomEvent(CustomEventClass::CustomEventHandler* value);
		public:
			void RaiseEvent(int a, float b);
	};
}
