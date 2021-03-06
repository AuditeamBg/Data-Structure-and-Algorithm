﻿/*Група 1
Вашата мила и добра леля Гинка ви звъни и ви казва, колко трудности изпитва нейната
комшийка с научаването на колите, и подредбите им, и ви моли за помощ. Тя отчаяно
желае вие да к напишете програма на С++ с която тя да може да вкарва в своята база
данни / просто текстово файлче/ структури от тип Съсед с член данни {име, тел. номер
и кола}. Също така тя иска да може да паркира кола, но колите могат да се паркират
само една зад друга, като в задънена улица/ само с един изход/. Но най – важното е, че
тя иска когато някоя кола е запушена, то по колата, тя да може да провери в своя файл,
на кого е колата, и какъв е номерът му/можете да го изкарате в стандартния изход/, за
да може човекът да си извади колата ( да, ще ви трябва и функция за изваждане на
коли). Тя ще ви бъде много благодарна ако го направите ! Единственото нещо, което
иска от вас е да го направите за по – малко от два часа. Добрите ви асистенти са ви
предали всичко, затова няма от какво да се притеснявате. И накрая, но не на последно
място, тя ви пожелава успех !*/
#include<iostream>
#include<fstream>
#include<stack>
#include<queue>
#include<Stack.h>
#include<Neighborhood.h>
using namespace std;
void create(Stack<Neighborhood> &stack) {
	
	ifstream f;
	f.open("Input.txt", ios::out);
	if (!f) {
		cerr << "Error!";
	}
	while (!stack.empty()) {
		Neighborhood current = stack.top();
		f >> current.getPersonPhoneNumber() >> current.getPersonName() >> current.getCarName();
	}
}
int main()
{
	Stack<Neighborhood> stack;

	Neighborhood Ivan("Ivan", "A9812MA", 886251930);
	Neighborhood Adriana("Adriana", "A3477MP", 887347684);
	Neighborhood Daniel("Daniel", "A1848KC", 884211123);
	Neighborhood Zdravko("Zdravko", "A3477MP", 887173373);
	Neighborhood Stoqnka("Stoqnka", "A6663KB", 877189776);

	stack.push(Ivan);
	stack.push(Adriana);
	stack.push(Daniel);
	stack.push(Zdravko);
	stack.push(Stoqnka);

	create(stack);
	system("pause");
	return 0;
}
