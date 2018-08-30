/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

using System;

namespace BadWeakness
{
	class Bad
	{
		static void Main()
		{
			string s = "MyPass";
			if (s.Equals("MyPass"))
				Console.WriteLine("User Accepted!");
			s = string.Empty; //dead store
		}
	}
}
