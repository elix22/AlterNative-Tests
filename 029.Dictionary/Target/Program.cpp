#include "Program.h"
namespace Dictionary {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->Run();
	}
	void Program::Run()
	{
		Dictionary_T<int, int>* myDict = new Dictionary_T<int, int>();
		myDict->Add(0, 1);
		myDict->Add(1, 2);
		myDict->Add(2, 3);
		myDict->Add(3, 4);
		Console::WriteLine(new String("Now it should print false"));
		Console::WriteLine(myDict->ContainsKey(4));
		Console::WriteLine(new String("Now it should print true"));
		Console::WriteLine(myDict->ContainsKey(3));
		myDict->Remove(3);
		Console::WriteLine(new String("Now it should print false"));
		Console::WriteLine(myDict->ContainsKey(3));
		Console::WriteLine(new String("Now it should print 2"));
		Console::WriteLine((*myDict)[1]);
		Dictionary_T<A, B>* myDict2 = new Dictionary_T<A, B>();
		A* a = new A();
		A* a2 = new A();
		myDict2->Add(a, new B());
		myDict2->Add(a2, new B());
		Console::WriteLine(new String("Now it should print false"));
		Console::WriteLine(myDict2->ContainsKey(new A()));
		Console::WriteLine(new String("Now it should print true"));
		Console::WriteLine(myDict2->ContainsKey(a));
		myDict2->Remove(a);
		Console::WriteLine(new String("Now it should print false"));
		Console::WriteLine(myDict2->ContainsKey(a));
		Console::WriteLine(new String("Now it should print \"Hello I'm B\""));
		(*myDict2)[a2]->f();
	}

}