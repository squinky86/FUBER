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
			String s = "MyPass";
			if (s.Equals("MyPass"))
				Console.WriteLine("User Accepted!");
			s = String.Empty; //dead store
		}
	}
}
