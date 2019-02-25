/*
 * Copyright © 2019, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

using System;
using System.Numerics;

namespace BadWeakness
{
	class Bad
	{
		static void Main()
		{
			Complex c1 = new Complex(0, 0);
			Complex c2 = new Complex(0, 0);
			Complex c3 = c1 / c2; //divide by 0 + 0i
			Console.WriteLine(c3);
		}
	}
}
