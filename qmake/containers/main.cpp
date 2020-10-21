#include <QtCore>

int main(int argc, char const *argv[])
{ 
	qDebug() << "Stack:";
  QStack<QString> stk;
  stk.push("Era");
  stk.push("Corvus Corax");
  stk.push("Gathering");

  while (!stk.empty()) {
  	qDebug() << "Element: " << stk.pop();
  }

  qDebug() << "Queue:";
  QQueue<QString> que;
  que.enqueue("Era");
  que.enqueue("Corvus Corax");
  que.enqueue("Gathering");

  while (!que.empty()) {
  	qDebug() << "Element: " << que.dequeue();
  }
	return 0;
}