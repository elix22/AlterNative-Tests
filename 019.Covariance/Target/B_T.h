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
#include "CovIEnumerator_T.h"
#include <System/Console.h>

using namespace System;
namespace Covariance {
	namespace _Internal {

		//The classes defined in namespace _Internal are internal types.
		//DO NOT modify this code

		template<typename T>
		class B_T_Base : public virtual CovIEnumerator_T<T>, public virtual Object{
			public:
			B_T_Base(){
				Console::WriteLine(new String("Building B..."));
			}
		};

		template<typename T, bool>
		class B_T  {
		};

		//Basic types template type
		template<typename T>
		class B_T<T, true> : public B_T_Base<T>{
			public:
			inline B_T() : B_T_Base<T>()
			{
			}
		};

		//Generic template type
		template<typename T>
		class B_T<T, false> : public virtual B_T_Base<Object>{
			public:
			inline B_T() : B_T_Base<Object>()
			{
			}
		};
	}

	//Type definition
	template<typename T>
	class B_T : public _Internal::B_T<T, IsBasic(T)>{
		public:
		B_T() : _Internal::B_T<T, IsBasic(T)>(){
		}
	};
}
