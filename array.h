#include <string>

template <typename T>
class Array {
	public:
		Array();
		Array(T arr[]);
		T get(int index);
		void remove(int index);
		T findIndex(int index);
		void push(T element);
		int size();
		string join(string joinString);
		T search(bool (f*) (T));

	private:
		T literalArr[];
		int length;
};
