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

using namespace System;
namespace Constraints {
	namespace _Internal {

		//The classes defined in namespace _Internal are internal types.
		//DO NOT modify this code

		template<typename T>
		class Example2_T_Base : public virtual Object{
			public:
			Example2_T_Base(){
				Where_T_is_New(T);
			}
		};

		template<typename T, bool>
		class Example2_T  {
		};

		//Basic types template type
		template<typename T>
		class Example2_T<T, true> : public Example2_T_Base<T>{
			public:
			inline Example2_T() : Example2_T_Base<T>()
			{
			}
		};

		//Generic template type
		template<typename T>
		class Example2_T<T, false> : public virtual Example2_T_Base<Object>{
			public:
			inline Example2_T() : Example2_T_Base<Object>()
			{
			}
		};
	}

	//Type definition
	template<typename T>
	class Example2_T : public _Internal::Example2_T<T, IsBasic(T)>{
		public:
		Example2_T() : _Internal::Example2_T<T, IsBasic(T)>(){
		}
	};
}
