1. kod
```
#include <stdio.h>

int main()
{
	int x = 4;
	int y = 10;

	printf("%d\n", (x++, ++x));
	printf("%d\n", (y *= x++, y + x));
}
```
2. kod
```
#include <stdio.h>

double foo(double x)
{
	return x + 5,6;
}

int main()
{
	printf("%f\n", foo(3.));
}
```
3. kod
```
#include <stdio.h>

int main()
{
	int x = 0;
	int y = 1;

	printf("%d\n", !!x == !!y > x + 1);
	printf("%d\n", !!y > !y == !!x < !x);
	printf("%d\n", !x + !!x + y - !y - !!y);
}
```
4. kod

```
#include <stdio.h>

int g = 3;

int f1(int x)
{
	return x * g++;
}

int f2(int x)
{
	return x * ++g;
}


int main()
{
	printf("%d\n", f2(f1(g)));
	printf("%d\n", f1(f2(g)));
}
```
