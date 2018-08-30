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
			bool accepted = true;
			if (accepted)
				Console.WriteLine("User Accepted!");
			accepted = false; //dead store
		}
	}
}
